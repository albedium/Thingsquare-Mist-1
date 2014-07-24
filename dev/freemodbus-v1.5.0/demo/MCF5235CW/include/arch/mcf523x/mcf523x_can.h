/************************************************************************************
 * Copyright @ 1995-2005 Freescale Semiconductor, Inc. All rights reserved          *
 *                                                                                  *
 *                                                                                  *
 *                                                                                  *
 * DESCRIPTION                                                                      *
 *   Register and bit definitions for the MCF523X.                                  *
 *                                                                                  *
 *                                                                                  *
 *                                                                                  *
 * NOTE                                                                             *
 *                                                                                  *
 *                                                                                  *
 *                                                                                  *
 * HISTORY                                                                          *
 *                                                                                  *	
 ************************************************************************************/

#ifndef __MCF523X_CAN_H__
#define __MCF523X_CAN_H__

/*********************************************************************
*
* FlexCAN Module (CAN)
*
*********************************************************************/

/* Register read/write macros */
#define MCF_CAN_CANMCR0        (*(vuint32*)(void*)(&__IPSBAR[0x1C0000]))
#define MCF_CAN_CANCTRL0       (*(vuint32*)(void*)(&__IPSBAR[0x1C0004]))
#define MCF_CAN_TIMER0         (*(vuint32*)(void*)(&__IPSBAR[0x1C0008]))
#define MCF_CAN_RXGMASK0       (*(vuint32*)(void*)(&__IPSBAR[0x1C0010]))
#define MCF_CAN_RX14MASK0      (*(vuint32*)(void*)(&__IPSBAR[0x1C0014]))
#define MCF_CAN_RX15MASK0      (*(vuint32*)(void*)(&__IPSBAR[0x1C0018]))
#define MCF_CAN_ERRCNT0        (*(vuint32*)(void*)(&__IPSBAR[0x1C001C]))
#define MCF_CAN_ERRSTAT0       (*(vuint32*)(void*)(&__IPSBAR[0x1C0020]))
#define MCF_CAN_IMASK0         (*(vuint16*)(void*)(&__IPSBAR[0x1C002A]))
#define MCF_CAN_IFLAG0         (*(vuint16*)(void*)(&__IPSBAR[0x1C0032]))
#define MCF_CAN_CANMCR1        (*(vuint32*)(void*)(&__IPSBAR[0x1F0000]))
#define MCF_CAN_CANCTRL1       (*(vuint32*)(void*)(&__IPSBAR[0x1F0004]))
#define MCF_CAN_TIMER1         (*(vuint32*)(void*)(&__IPSBAR[0x1F0008]))
#define MCF_CAN_RXGMASK1       (*(vuint32*)(void*)(&__IPSBAR[0x1F0010]))
#define MCF_CAN_RX14MASK1      (*(vuint32*)(void*)(&__IPSBAR[0x1F0014]))
#define MCF_CAN_RX15MASK1      (*(vuint32*)(void*)(&__IPSBAR[0x1F0018]))
#define MCF_CAN_ERRCNT1        (*(vuint32*)(void*)(&__IPSBAR[0x1F001C]))
#define MCF_CAN_ERRSTAT1       (*(vuint32*)(void*)(&__IPSBAR[0x1F0020]))
#define MCF_CAN_IMASK1         (*(vuint16*)(void*)(&__IPSBAR[0x1F002A]))
#define MCF_CAN_IFLAG1         (*(vuint16*)(void*)(&__IPSBAR[0x1F0032]))
#define MCF_CAN_CANMCR(x)      (*(vuint32*)(void*)(&__IPSBAR[0x1C0000+((x)*0x30000)]))
#define MCF_CAN_CANCTRL(x)     (*(vuint32*)(void*)(&__IPSBAR[0x1C0004+((x)*0x30000)]))
#define MCF_CAN_TIMER(x)       (*(vuint32*)(void*)(&__IPSBAR[0x1C0008+((x)*0x30000)]))
#define MCF_CAN_RXGMASK(x)     (*(vuint32*)(void*)(&__IPSBAR[0x1C0010+((x)*0x30000)]))
#define MCF_CAN_RX14MASK(x)    (*(vuint32*)(void*)(&__IPSBAR[0x1C0014+((x)*0x30000)]))
#define MCF_CAN_RX15MASK(x)    (*(vuint32*)(void*)(&__IPSBAR[0x1C0018+((x)*0x30000)]))
#define MCF_CAN_ERRCNT(x)      (*(vuint32*)(void*)(&__IPSBAR[0x1C001C+((x)*0x30000)]))
#define MCF_CAN_ERRSTAT(x)     (*(vuint32*)(void*)(&__IPSBAR[0x1C0020+((x)*0x30000)]))
#define MCF_CAN_IMASK(x)       (*(vuint16*)(void*)(&__IPSBAR[0x1C002A+((x)*0x30000)]))
#define MCF_CAN_IFLAG(x)       (*(vuint16*)(void*)(&__IPSBAR[0x1C0032+((x)*0x30000)]))

#define MCF_CAN_MBUF0_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0080+((x)*0x30000)]))
#define MCF_CAN_MBUF0_TMSTP(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0082+((x)*0x30000)]))
#define MCF_CAN_MBUF0_ID(x) 	    (*(vuint32 *)(void *)(&__IPSBAR[0x1C0084+((x)*0x30000)]))
#define MCF_CAN_MBUF0_BYTE0(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0088+((x)*0x30000)]))
#define MCF_CAN_MBUF0_BYTE1(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0089+((x)*0x30000)]))
#define MCF_CAN_MBUF0_BYTE2(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C008A+((x)*0x30000)]))
#define MCF_CAN_MBUF0_BYTE3(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C008B+((x)*0x30000)]))
#define MCF_CAN_MBUF0_BYTE4(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C008C+((x)*0x30000)]))
#define MCF_CAN_MBUF0_BYTE5(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C008D+((x)*0x30000)]))
#define MCF_CAN_MBUF0_BYTE6(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C008E+((x)*0x30000)]))
#define MCF_CAN_MBUF0_BYTE7(x)      (*(vuint8  *)(void *)(&__IPSBAR[0x1C008F+((x)*0x30000)]))
#define MCF_CAN_MBUF1_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0090+((x)*0x30000)]))
#define MCF_CAN_MBUF1_TMSTP(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0092+((x)*0x30000)]))
#define MCF_CAN_MBUF1_ID(x)			(*(vuint32 *)(void *)(&__IPSBAR[0x1C0094+((x)*0x30000)]))
#define MCF_CAN_MBUF1_BYTE0(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0098+((x)*0x30000)]))
#define MCF_CAN_MBUF1_BYTE1(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0099+((x)*0x30000)]))
#define MCF_CAN_MBUF1_BYTE2(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C009A+((x)*0x30000)]))
#define MCF_CAN_MBUF1_BYTE3(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C009B+((x)*0x30000)]))
#define MCF_CAN_MBUF1_BYTE4(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C009C+((x)*0x30000)]))
#define MCF_CAN_MBUF1_BYTE5(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C009D+((x)*0x30000)]))
#define MCF_CAN_MBUF1_BYTE6(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C009E+((x)*0x30000)]))
#define MCF_CAN_MBUF1_BYTE7(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C009F+((x)*0x30000)]))
#define MCF_CAN_MBUF2_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C00A0+((x)*0x30000)]))
#define MCF_CAN_MBUF2_ID(x) 	    (*(vuint32 *)(void *)(&__IPSBAR[0x1C00A4+((x)*0x30000)]))
#define MCF_CAN_MBUF2_BYTE0(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00A8+((x)*0x30000)]))
#define MCF_CAN_MBUF2_BYTE1(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00A9+((x)*0x30000)]))
#define MCF_CAN_MBUF2_BYTE2(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00AA+((x)*0x30000)]))
#define MCF_CAN_MBUF2_BYTE3(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00AB+((x)*0x30000)]))
#define MCF_CAN_MBUF2_BYTE4(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00AC+((x)*0x30000)]))
#define MCF_CAN_MBUF2_BYTE5(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00AD+((x)*0x30000)]))
#define MCF_CAN_MBUF2_BYTE6(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00AE+((x)*0x30000)]))
#define MCF_CAN_MBUF2_BYTE7(x)      (*(vuint8  *)(void *)(&__IPSBAR[0x1C00AF+((x)*0x30000)]))
#define MCF_CAN_MBUF3_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C00B0+((x)*0x30000)]))
#define MCF_CAN_MBUF3_ID(x)			(*(vuint32 *)(void *)(&__IPSBAR[0x1C00B4+((x)*0x30000)]))
#define MCF_CAN_MBUF3_BYTE0(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00B8+((x)*0x30000)]))
#define MCF_CAN_MBUF3_BYTE1(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00B9+((x)*0x30000)]))
#define MCF_CAN_MBUF3_BYTE2(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00BA+((x)*0x30000)]))
#define MCF_CAN_MBUF3_BYTE3(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00BB+((x)*0x30000)]))
#define MCF_CAN_MBUF3_BYTE4(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00BC+((x)*0x30000)]))
#define MCF_CAN_MBUF3_BYTE5(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00BD+((x)*0x30000)]))
#define MCF_CAN_MBUF3_BYTE6(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00BE+((x)*0x30000)]))
#define MCF_CAN_MBUF3_BYTE7(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00BF+((x)*0x30000)]))
#define MCF_CAN_MBUF4_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C00C0+((x)*0x30000)]))
#define MCF_CAN_MBUF4_ID(x) 	    (*(vuint32 *)(void *)(&__IPSBAR[0x1C00C4+((x)*0x30000)]))
#define MCF_CAN_MBUF4_BYTE0(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00C8+((x)*0x30000)]))
#define MCF_CAN_MBUF4_BYTE1(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00C9+((x)*0x30000)]))
#define MCF_CAN_MBUF4_BYTE2(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00CA+((x)*0x30000)]))
#define MCF_CAN_MBUF4_BYTE3(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00CB+((x)*0x30000)]))
#define MCF_CAN_MBUF4_BYTE4(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00CC+((x)*0x30000)]))
#define MCF_CAN_MBUF4_BYTE5(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00CD+((x)*0x30000)]))
#define MCF_CAN_MBUF4_BYTE6(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00CE+((x)*0x30000)]))
#define MCF_CAN_MBUF4_BYTE7(x)      (*(vuint8  *)(void *)(&__IPSBAR[0x1C00CF+((x)*0x30000)]))
#define MCF_CAN_MBUF5_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C00D0+((x)*0x30000)]))
#define MCF_CAN_MBUF5_ID(x)			(*(vuint32 *)(void *)(&__IPSBAR[0x1C00D4+((x)*0x30000)]))
#define MCF_CAN_MBUF5_BYTE0(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00D8+((x)*0x30000)]))
#define MCF_CAN_MBUF5_BYTE1(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00D9+((x)*0x30000)]))
#define MCF_CAN_MBUF5_BYTE2(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00DA+((x)*0x30000)]))
#define MCF_CAN_MBUF5_BYTE3(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00DB+((x)*0x30000)]))
#define MCF_CAN_MBUF5_BYTE4(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00DC+((x)*0x30000)]))
#define MCF_CAN_MBUF5_BYTE5(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00DD+((x)*0x30000)]))
#define MCF_CAN_MBUF5_BYTE6(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00DE+((x)*0x30000)]))
#define MCF_CAN_MBUF5_BYTE7(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00DF+((x)*0x30000)]))
#define MCF_CAN_MBUF6_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C00E0+((x)*0x30000)]))
#define MCF_CAN_MBUF6_ID(x) 	    (*(vuint32 *)(void *)(&__IPSBAR[0x1C00E4+((x)*0x30000)]))
#define MCF_CAN_MBUF6_BYTE0(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00E8+((x)*0x30000)]))
#define MCF_CAN_MBUF6_BYTE1(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00E9+((x)*0x30000)]))
#define MCF_CAN_MBUF6_BYTE2(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00EA+((x)*0x30000)]))
#define MCF_CAN_MBUF6_BYTE3(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00EB+((x)*0x30000)]))
#define MCF_CAN_MBUF6_BYTE4(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00EC+((x)*0x30000)]))
#define MCF_CAN_MBUF6_BYTE5(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00ED+((x)*0x30000)]))
#define MCF_CAN_MBUF6_BYTE6(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C00EE+((x)*0x30000)]))
#define MCF_CAN_MBUF6_BYTE7(x)      (*(vuint8  *)(void *)(&__IPSBAR[0x1C00EF+((x)*0x30000)]))
#define MCF_CAN_MBUF7_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C00F0+((x)*0x30000)]))
#define MCF_CAN_MBUF7_ID(x)			(*(vuint32 *)(void *)(&__IPSBAR[0x1C00F4+((x)*0x30000)]))
#define MCF_CAN_MBUF7_BYTE0(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00F8+((x)*0x30000)]))
#define MCF_CAN_MBUF7_BYTE1(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00F9+((x)*0x30000)]))
#define MCF_CAN_MBUF7_BYTE2(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00FA+((x)*0x30000)]))
#define MCF_CAN_MBUF7_BYTE3(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00FB+((x)*0x30000)]))
#define MCF_CAN_MBUF7_BYTE4(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00FC+((x)*0x30000)]))
#define MCF_CAN_MBUF7_BYTE5(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00FD+((x)*0x30000)]))
#define MCF_CAN_MBUF7_BYTE6(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00FE+((x)*0x30000)]))
#define MCF_CAN_MBUF7_BYTE7(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C00FF+((x)*0x30000)]))
#define MCF_CAN_MBUF8_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0100+((x)*0x30000)]))
#define MCF_CAN_MBUF8_ID(x) 	    (*(vuint32 *)(void *)(&__IPSBAR[0x1C0104+((x)*0x30000)]))
#define MCF_CAN_MBUF8_BYTE0(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0108+((x)*0x30000)]))
#define MCF_CAN_MBUF8_BYTE1(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0109+((x)*0x30000)]))
#define MCF_CAN_MBUF8_BYTE2(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C010A+((x)*0x30000)]))
#define MCF_CAN_MBUF8_BYTE3(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C010B+((x)*0x30000)]))
#define MCF_CAN_MBUF8_BYTE4(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C010C+((x)*0x30000)]))
#define MCF_CAN_MBUF8_BYTE5(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C010D+((x)*0x30000)]))
#define MCF_CAN_MBUF8_BYTE6(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C010E+((x)*0x30000)]))
#define MCF_CAN_MBUF8_BYTE7(x)      (*(vuint8  *)(void *)(&__IPSBAR[0x1C010F+((x)*0x30000)]))
#define MCF_CAN_MBUF9_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0100+((x)*0x30000)]))
#define MCF_CAN_MBUF9_ID(x)			(*(vuint32 *)(void *)(&__IPSBAR[0x1C0114+((x)*0x30000)]))
#define MCF_CAN_MBUF9_BYTE0(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0118+((x)*0x30000)]))
#define MCF_CAN_MBUF9_BYTE1(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0119+((x)*0x30000)]))
#define MCF_CAN_MBUF9_BYTE2(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C011A+((x)*0x30000)]))
#define MCF_CAN_MBUF9_BYTE3(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C011B+((x)*0x30000)]))
#define MCF_CAN_MBUF9_BYTE4(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C011C+((x)*0x30000)]))
#define MCF_CAN_MBUF9_BYTE5(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C011D+((x)*0x30000)]))
#define MCF_CAN_MBUF9_BYTE6(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C011E+((x)*0x30000)]))
#define MCF_CAN_MBUF9_BYTE7(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C011F+((x)*0x30000)]))
#define MCF_CAN_MBUF10_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0120+((x)*0x30000)]))
#define MCF_CAN_MBUF10_ID(x) 	    (*(vuint32 *)(void *)(&__IPSBAR[0x1C0124+((x)*0x30000)]))
#define MCF_CAN_MBUF10_BYTE0(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0128+((x)*0x30000)]))
#define MCF_CAN_MBUF10_BYTE1(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0129+((x)*0x30000)]))
#define MCF_CAN_MBUF10_BYTE2(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C012A+((x)*0x30000)]))
#define MCF_CAN_MBUF10_BYTE3(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C012B+((x)*0x30000)]))
#define MCF_CAN_MBUF10_BYTE4(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C012C+((x)*0x30000)]))
#define MCF_CAN_MBUF10_BYTE5(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C012D+((x)*0x30000)]))
#define MCF_CAN_MBUF10_BYTE6(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C012E+((x)*0x30000)]))
#define MCF_CAN_MBUF10_BYTE7(x)     (*(vuint8  *)(void *)(&__IPSBAR[0x1C012F+((x)*0x30000)]))
#define MCF_CAN_MBUF11_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0130+((x)*0x30000)]))
#define MCF_CAN_MBUF11_ID(x)		(*(vuint32 *)(void *)(&__IPSBAR[0x1C0134+((x)*0x30000)]))
#define MCF_CAN_MBUF11_BYTE0(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0138+((x)*0x30000)]))
#define MCF_CAN_MBUF11_BYTE1(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0139+((x)*0x30000)]))
#define MCF_CAN_MBUF11_BYTE2(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C013A+((x)*0x30000)]))
#define MCF_CAN_MBUF11_BYTE3(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C013B+((x)*0x30000)]))
#define MCF_CAN_MBUF11_BYTE4(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C013C+((x)*0x30000)]))
#define MCF_CAN_MBUF11_BYTE5(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C013D+((x)*0x30000)]))
#define MCF_CAN_MBUF11_BYTE6(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C013E+((x)*0x30000)]))
#define MCF_CAN_MBUF11_BYTE7(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C013F+((x)*0x30000)]))
#define MCF_CAN_MBUF12_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0140+((x)*0x30000)]))
#define MCF_CAN_MBUF12_ID(x) 	    (*(vuint32 *)(void *)(&__IPSBAR[0x1C0144+((x)*0x30000)]))
#define MCF_CAN_MBUF12_BYTE0(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0148+((x)*0x30000)]))
#define MCF_CAN_MBUF12_BYTE1(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0149+((x)*0x30000)]))
#define MCF_CAN_MBUF12_BYTE2(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C014A+((x)*0x30000)]))
#define MCF_CAN_MBUF12_BYTE3(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C014B+((x)*0x30000)]))
#define MCF_CAN_MBUF12_BYTE4(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C014C+((x)*0x30000)]))
#define MCF_CAN_MBUF12_BYTE5(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C014D+((x)*0x30000)]))
#define MCF_CAN_MBUF12_BYTE6(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C014E+((x)*0x30000)]))
#define MCF_CAN_MBUF12_BYTE7(x)     (*(vuint8  *)(void *)(&__IPSBAR[0x1C014F+((x)*0x30000)]))
#define MCF_CAN_MBUF13_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0150+((x)*0x30000)]))
#define MCF_CAN_MBUF13_ID(x)		(*(vuint32 *)(void *)(&__IPSBAR[0x1C0154+((x)*0x30000)]))
#define MCF_CAN_MBUF13_BYTE0(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0158+((x)*0x30000)]))
#define MCF_CAN_MBUF13_BYTE1(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0159+((x)*0x30000)]))
#define MCF_CAN_MBUF13_BYTE2(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C015A+((x)*0x30000)]))
#define MCF_CAN_MBUF13_BYTE3(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C015B+((x)*0x30000)]))
#define MCF_CAN_MBUF13_BYTE4(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C015C+((x)*0x30000)]))
#define MCF_CAN_MBUF13_BYTE5(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C015D+((x)*0x30000)]))
#define MCF_CAN_MBUF13_BYTE6(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C015E+((x)*0x30000)]))
#define MCF_CAN_MBUF13_BYTE7(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C015F+((x)*0x30000)]))
#define MCF_CAN_MBUF14_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0160+((x)*0x30000)]))
#define MCF_CAN_MBUF14_ID(x) 	    (*(vuint32 *)(void *)(&__IPSBAR[0x1C0164+((x)*0x30000)]))
#define MCF_CAN_MBUF14_BYTE0(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0168+((x)*0x30000)]))
#define MCF_CAN_MBUF14_BYTE1(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C0169+((x)*0x30000)]))
#define MCF_CAN_MBUF14_BYTE2(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C016A+((x)*0x30000)]))
#define MCF_CAN_MBUF14_BYTE3(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C016B+((x)*0x30000)]))
#define MCF_CAN_MBUF14_BYTE4(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C016C+((x)*0x30000)]))
#define MCF_CAN_MBUF14_BYTE5(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C016D+((x)*0x30000)]))
#define MCF_CAN_MBUF14_BYTE6(x)	    (*(vuint8  *)(void *)(&__IPSBAR[0x1C016E+((x)*0x30000)]))
#define MCF_CAN_MBUF14_BYTE7(x)     (*(vuint8  *)(void *)(&__IPSBAR[0x1C016F+((x)*0x30000)]))
#define MCF_CAN_MBUF15_CTRL(x)		(*(vuint16 *)(void *)(&__IPSBAR[0x1C0170+((x)*0x30000)]))
#define MCF_CAN_MBUF15_ID(x)		(*(vuint32 *)(void *)(&__IPSBAR[0x1C0174+((x)*0x30000)]))
#define MCF_CAN_MBUF15_BYTE0(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0178+((x)*0x30000)]))
#define MCF_CAN_MBUF15_BYTE1(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C0179+((x)*0x30000)]))
#define MCF_CAN_MBUF15_BYTE2(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C017A+((x)*0x30000)]))
#define MCF_CAN_MBUF15_BYTE3(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C017B+((x)*0x30000)]))
#define MCF_CAN_MBUF15_BYTE4(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C017C+((x)*0x30000)]))
#define MCF_CAN_MBUF15_BYTE5(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C017D+((x)*0x30000)]))
#define MCF_CAN_MBUF15_BYTE6(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C017E+((x)*0x30000)]))
#define MCF_CAN_MBUF15_BYTE7(x)		(*(vuint8  *)(void *)(&__IPSBAR[0x1C017F+((x)*0x30000)]))
																				  
																				  
#define MCF_CAN_MBUF0_DATAL(x)	    (*(vuint32  *)(void *)(&__IPSBAR[0x1C0088+((x)*0x30000)]))
#define MCF_CAN_MBUF0_DATAH(x)	    (*(vuint32  *)(void *)(&__IPSBAR[0x1C008C+((x)*0x30000)]))
#define MCF_CAN_MBUF1_DATAL(x)		(*(vuint32  *)(void *)(&__IPSBAR[0x1C0098+((x)*0x30000)]))
#define MCF_CAN_MBUF1_DATAH(x)		(*(vuint32  *)(void *)(&__IPSBAR[0x1C009C+((x)*0x30000)]))
#define MCF_CAN_MBUF2_DATAL(x)	    (*(vuint32  *)(void *)(&__IPSBAR[0x1C00A8+((x)*0x30000)]))
#define MCF_CAN_MBUF2_DATAH(x)	    (*(vuint32  *)(void *)(&__IPSBAR[0x1C00AC+((x)*0x30000)]))
																				  
																				  
/* Bit definitions and macros for MCF_CAN_CANMCR */								  
#define MCF_CAN_CANMCR_MAXMB(x)            (((x)&0x0000000F)<<0)				  
#define MCF_CAN_CANMCR_SUPV                (0x00800000)							  
#define MCF_CAN_CANMCR_FRZACK              (0x01000000)							  
#define MCF_CAN_CANMCR_SOFTRST             (0x02000000)							  
#define MCF_CAN_CANMCR_HALT                (0x10000000)							  
#define MCF_CAN_CANMCR_FRZ                 (0x40000000)							  
#define MCF_CAN_CANMCR_MDIS                (0x80000000)							  

/* Bit definitions and macros for MCF_CAN_CANCTRL */
#define MCF_CAN_CANCTRL_PROPSEG(x)         (((x)&0x00000007)<<0)
#define MCF_CAN_CANCTRL_LOM                (0x00000008)
#define MCF_CAN_CANCTRL_LBUF               (0x00000010)
#define MCF_CAN_CANCTRL_TSYNC              (0x00000020)
#define MCF_CAN_CANCTRL_BOFFREC            (0x00000040)
#define MCF_CAN_CANCTRL_SAMP               (0x00000080)
#define MCF_CAN_CANCTRL_LPB                (0x00001000)
#define MCF_CAN_CANCTRL_CLKSRC             (0x00002000)
#define MCF_CAN_CANCTRL_ERRMSK             (0x00004000)
#define MCF_CAN_CANCTRL_BOFFMSK            (0x00008000)
#define MCF_CAN_CANCTRL_PSEG2(x)           (((x)&0x00000007)<<16)
#define MCF_CAN_CANCTRL_PSEG1(x)           (((x)&0x00000007)<<19)
#define MCF_CAN_CANCTRL_RJW(x)             (((x)&0x00000003)<<22)
#define MCF_CAN_CANCTRL_PRESDIV(x)         (((x)&0x000000FF)<<24)

/* Bit definitions and macros for MCF_CAN_TIMER */
#define MCF_CAN_TIMER_TIMER(x)             (((x)&0x0000FFFF)<<0)

/* Bit definitions and macros for MCF_CAN_RXGMASK */
#define MCF_CAN_RXGMASK_MI(x)              (((x)&0x1FFFFFFF)<<0)

/* Bit definitions and macros for MCF_CAN_RX14MASK */
#define MCF_CAN_RX14MASK_MI(x)             (((x)&0x1FFFFFFF)<<0)

/* Bit definitions and macros for MCF_CAN_RX15MASK */
#define MCF_CAN_RX15MASK_MI(x)             (((x)&0x1FFFFFFF)<<0)

/* Bit definitions and macros for MCF_CAN_ERRCNT */
#define MCF_CAN_ERRCNT_TXECTR(x)           (((x)&0x000000FF)<<0)
#define MCF_CAN_ERRCNT_RXECTR(x)           (((x)&0x000000FF)<<8)

/* Bit definitions and macros for MCF_CAN_ERRSTAT */
#define MCF_CAN_ERRSTAT_WAKINT             (0x00000001)
#define MCF_CAN_ERRSTAT_ERRINT             (0x00000002)
#define MCF_CAN_ERRSTAT_BOFFINT            (0x00000004)
#define MCF_CAN_ERRSTAT_FLTCONF(x)         (((x)&0x00000003)<<4)
#define MCF_CAN_ERRSTAT_TXRX               (0x00000040)
#define MCF_CAN_ERRSTAT_IDLE               (0x00000080)
#define MCF_CAN_ERRSTAT_RXWRN              (0x00000100)
#define MCF_CAN_ERRSTAT_TXWRN              (0x00000200)
#define MCF_CAN_ERRSTAT_STFERR             (0x00000400)
#define MCF_CAN_ERRSTAT_FRMERR             (0x00000800)
#define MCF_CAN_ERRSTAT_CRCERR             (0x00001000)
#define MCF_CAN_ERRSTAT_ACKERR             (0x00002000)
#define MCF_CAN_ERRSTAT_BITERR(x)          (((x)&0x00000003)<<14)
#define MCF_CAN_ERRSTAT_FLTCONF_ACTIVE     (0x00000000)
#define MCF_CAN_ERRSTAT_FLTCONF_PASSIVE    (0x00000010)
#define MCF_CAN_ERRSTAT_FLTCONF_BUSOFF     (0x00000020)

/* Bit definitions and macros for MCF_CAN_IMASK */
#define MCF_CAN_IMASK_BUF0M                (0x0001)
#define MCF_CAN_IMASK_BUF1M                (0x0002)
#define MCF_CAN_IMASK_BUF2M                (0x0004)
#define MCF_CAN_IMASK_BUF3M                (0x0008)
#define MCF_CAN_IMASK_BUF4M                (0x0010)
#define MCF_CAN_IMASK_BUF5M                (0x0020)
#define MCF_CAN_IMASK_BUF6M                (0x0040)
#define MCF_CAN_IMASK_BUF7M                (0x0080)
#define MCF_CAN_IMASK_BUF8M                (0x0100)
#define MCF_CAN_IMASK_BUF9M                (0x0200)
#define MCF_CAN_IMASK_BUF10M               (0x0400)
#define MCF_CAN_IMASK_BUF11M               (0x0800)
#define MCF_CAN_IMASK_BUF12M               (0x1000)
#define MCF_CAN_IMASK_BUF13M               (0x2000)
#define MCF_CAN_IMASK_BUF14M               (0x4000)
#define MCF_CAN_IMASK_BUF15M               (0x8000)

/* Bit definitions and macros for MCF_CAN_IFLAG */
#define MCF_CAN_IFLAG_BUF0I                (0x0001)
#define MCF_CAN_IFLAG_BUF1I                (0x0002)
#define MCF_CAN_IFLAG_BUF2I                (0x0004)
#define MCF_CAN_IFLAG_BUF3I                (0x0008)
#define MCF_CAN_IFLAG_BUF4I                (0x0010)
#define MCF_CAN_IFLAG_BUF5I                (0x0020)
#define MCF_CAN_IFLAG_BUF6I                (0x0040)
#define MCF_CAN_IFLAG_BUF7I                (0x0080)
#define MCF_CAN_IFLAG_BUF8I                (0x0100)
#define MCF_CAN_IFLAG_BUF9I                (0x0200)
#define MCF_CAN_IFLAG_BUF10I               (0x0400)
#define MCF_CAN_IFLAG_BUF11I               (0x0800)
#define MCF_CAN_IFLAG_BUF12I               (0x1000)
#define MCF_CAN_IFLAG_BUF13I               (0x2000)
#define MCF_CAN_IFLAG_BUF14I               (0x4000)
#define MCF_CAN_IFLAG_BUF15I               (0x8000)

/********************************************************************/

#endif /* __MCF523X_CAN_H__ */
