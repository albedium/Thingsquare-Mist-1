#include "mist.h"
#include "websocket.h"
#include "dev/uart.h"
// will communicate with linux embedded via SPI/UART
// ModBus, BACNet, SNMP will be handled by linux embedded

static struct websocket s;

static void callback(struct websocket *s, websocket_result r,
                     uint8_t *data, uint16_t datalen);

#define RECONNECT_INTERVAL 10 * CLOCK_SECOND

static struct ctimer reconnect_timer;

/*---------------------------------------------------------------------------*/
PROCESS(ionode_process, "Machinode will get machines data teaming up with embedded Linux");
AUTOSTART_PROCESSES(&ionode_process);
/*---------------------------------------------------------------------------*/
static void
reconnect_callback(void *ptr)
{
  websocket_open(&s, "ws://172.16.0.1:8080/",
                 "thingsquare mist", callback);
}
/*---------------------------------------------------------------------------*/
static void
callback(struct websocket *s, websocket_result r,
         uint8_t *data, uint16_t datalen)
{
  if(r == WEBSOCKET_CLOSED ||
     r == WEBSOCKET_RESET ||
     r == WEBSOCKET_HOSTNAME_NOT_FOUND ||
     r == WEBSOCKET_TIMEDOUT) {
    ctimer_set(&reconnect_timer, RECONNECT_INTERVAL, reconnect_callback, s);
  } else if(r == WEBSOCKET_CONNECTED) {
    websocket_send_str(s, "Connected");
  } else if(r == WEBSOCKET_DATA) {
    printf("environode: Received data '%.*s' (len %d)\n", datalen,
           data, datalen);
  }
}
/*---------------------------------------------------------------------------*/
PROCESS_THREAD(environode_process, ev, data)
{
  static struct etimer et;
  PROCESS_BEGIN();
  /* set digital input pins */
  GPIO_SET_INPUT(IN_PORT_BASE, DC_IN_PIN);

  /* set digital output pins */
  GPIO_SET_OUTPUT(OUT_PORT_BASE, DC_OUT1_PIN);
  GPIO_SET_OUTPUT(OUT_PORT_BASE, DC_OUT2_PIN);
  GPIO_SET_OUTPUT(OUT_PORT_BASE, OUT_CONTACT_PIN);

  /* set ADC pins */
  adc_init();

  ctimer_set(&reconnect_timer, RECONNECT_INTERVAL, reconnect_callback, &s);

  while(1) {
    etimer_set(&et, CLOCK_SECOND / 8);
    PROCESS_WAIT_EVENT_UNTIL(etimer_expired(&et));

    /* read ADC result */
    ionodeInputs.adc_contact_read = adc_get(ADC_CONTACT_CH, SOC_ADC_ADCCON_REF_INT, SOC_ADC_ADCCON_DIV_64);
    ionodeInputs.analog_curr_read = adc_get(ANALOG_CURR_CH, SOC_ADC_ADCCON_REF_INT, SOC_ADC_ADCCON_DIV_64);
    /* read pin result */
    ionodeInputs.dc_in_read = GPIO_READ_PIN(IN_PORT_BASE, DC_IN_PIN);

    static int count;
    count++;
    websocket_send_str(&s, ctemp);
  }

  PROCESS_END();
}

/*---------------------------------------------------------------------------*/
/**
 * @}
 */
