/*
 * $QNXLicenseC:
 * Copyright 2008, QNX Software Systems. 
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"). You 
 * may not reproduce, modify or distribute this software except in 
 * compliance with the License. You may obtain a copy of the License 
 * at: http://www.apache.org/licenses/LICENSE-2.0 
 * 
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" basis, 
 * WITHOUT WARRANTIES OF ANY KIND, either express or implied.
 *
 * This file may contain contributions from others, either as 
 * contributors under the License or as licensors under other terms.  
 * Please review this entire file for other proprietary rights or license 
 * notices, as well as the QNX Development Suite License Guide at 
 * http://licensing.qnx.com/license-guide/ for other information.
 * $
 */




/*
 * SH 7760 internal register offsets
 *

 *
 */
#ifndef _SH_7760_H_INCLUDED
#define _SH_7760_H_INCLUDED

#define SH7760_INTPRI00			0x1E080000
#define SH7760_INTPRI04			0x1E080004
#define SH7760_INTPRI08			0x1E080008
#define SH7760_INTPRI0C			0x1E08000C
#define SH7760_INTREQ00			0x1E080020
#define SH7760_INTREQ04			0x1E080024
#define SH7760_INTMSK00			0x1E080040
#define SH7760_INTMSK04			0x1E080044
#define SH7760_INTMSKCLR00		0x1E080060
#define SH7760_INTMSKCLR04		0x1E080064

#define SH7760_DMARSRA			0x1E090000
#define SH7760_DMARSRB			0x1E090004
#define SH7760_DMARCR			0x1E090008

#define SH7760_CLKSTP00			0x1E0A0000
#define SH7760_CLKSTPCLR00		0x1E0A0010
#define SH7760_DCKDR			0x1E0A0020
#define SH7760_MCKCR			0x1E0A0024
#define SH7760_WCR4			0x1E0A0028
#define SH7760_BCR4			0x1E0A00F0

#define SH7760_ICSCR0			0x1E140000
#define SH7760_ICMCR0			0x1E140004
#define SH7760_ICSSR0			0x1E140008
#define SH7760_ICMSR0			0x1E14000C
#define SH7760_ICSIER0			0x1E140010
#define SH7760_ICMIER0			0x1E140014
#define SH7760_ICCCR0			0x1E140018
#define SH7760_ICSAR0			0x1E14001C
#define SH7760_ICMAR0			0x1E140020
#define SH7760_ICRXD0			0x1E140024
#define SH7760_ICTXD0			0x1E140024
#define SH7760_ICFCR0			0x1E140028
#define SH7760_ICFSR0			0x1E14002C
#define SH7760_ICFIER0			0x1E140030
#define SH7760_ICRFDR0			0x1E140034
#define SH7760_ICTFDR0			0x1E140038

#define SH7760_ICSCR1			0x1E150000
#define SH7760_ICMCR1			0x1E150004
#define SH7760_ICSSR1			0x1E150008
#define SH7760_ICMSR1			0x1E15000C
#define SH7760_ICSIER1			0x1E150010
#define SH7760_ICMIER1			0x1E150014
#define SH7760_ICCCR1			0x1E150018
#define SH7760_ICSAR1			0x1E15001C
#define SH7760_ICMAR1			0x1E150020
#define SH7760_ICRXD1			0x1E150024
#define SH7760_ICTXD1			0x1E150024
#define SH7760_ICFCR1			0x1E150028
#define SH7760_ICFSR1			0x1E15002C
#define SH7760_ICFIER1			0x1E150030
#define SH7760_ICRFDR1			0x1E150034
#define SH7760_ICTFDR1			0x1E150038

#define SH7760_SPCR			0x1E180000
#define SH7760_SPSR			0x1E180004
#define SH7760_SPSCR			0x1E180008
#define SH7760_SPTBR			0x1E18000C
#define SH7760_SPRBR			0x1E180010

#define SH7760_CMTCFG			0x1E1C0000
#define SH7760_CMTFRT			0x1E1C0004
#define SH7760_CMTCTL			0x1E1C0008
#define SH7760_CMTIRQS			0x1E1C000C
#define SH7760_CMTCH0T			0x1E1C0010
#define SH7760_CMTCH1T			0x1E1C0014
#define SH7760_CMTCH2T			0x1E1C0018
#define SH7760_CMTCH3T			0x1E1C001C
#define SH7760_CMTCH0ST			0x1E1C0020
#define SH7760_CMTCH1ST			0x1E1C0024
#define SH7760_CMTCH2ST			0x1E1C0028
#define SH7760_CMTCH3ST			0x1E1C002C
#define SH7760_CMTCH0C			0x1E1C0030
#define SH7760_CMTCH1C			0x1E1C0034
#define SH7760_CMTCH2C			0x1E1C0038
#define SH7760_CMTCH3C			0x1E1C003C

#define SH7760_HACCR0			0x1E240008
#define SH7760_HACCSAR0			0x1E240020
#define SH7760_HACCSDR0			0x1E240024
#define SH7760_HACPCML0			0x1E240028
#define SH7760_HACPCMR0			0x1E24002C
#define SH7760_HACTIER0			0x1E240050
#define SH7760_HACTSR0			0x1E240054
#define SH7760_HACRIER0			0x1E240058
#define SH7760_HACRSR0			0x1E24005C

#define SH7760_HACACR0			0x1E240060
#define SH7760_HACCR1			0x1E250008
#define SH7760_HACCSAR1			0x1E250020
#define SH7760_HACCSDR1			0x1E250024
#define SH7760_HACPCML1			0x1E250028
#define SH7760_HACPCMR1			0x1E25002C
#define SH7760_HACTIER1			0x1E250050
#define SH7760_HACTSR1			0x1E250054
#define SH7760_HACRIER1			0x1E250058
#define SH7760_HACRSR1			0x1E25005C
#define SH7760_HACACR1			0x1E250060

#define SH7760_ADDRA			0x1E280000
#define SH7760_ADDRB			0x1E280002
#define SH7760_ADDRC			0x1E280004
#define SH7760_ADDRD			0x1E280006
#define SH7760_ADCSR			0x1E280008

#define SH7760_MFIIDX			0x1E2C0000
#define SH7760_MFIGSR			0x1E2C0004
#define SH7760_MFISCR			0x1E2C0008
#define SH7760_MFIMCR			0x1E2C000C
#define SH7760_MFIIICR			0x1E2C0010
#define SH7760_MFIEICR			0x1E2C0014
#define SH7760_MFIADR			0x1E2C0018
#define SH7760_MFIDATA			0x1E2C001C

#define SH7760_LDICKR			0x1E300C00
#define SH7760_LDMTR			0x1E300C02
#define SH7760_LDDFR			0x1E300C04
#define SH7760_LDSMR			0x1E300C06
#define SH7760_LDSARU			0x1E300C08
#define SH7760_LDSARL			0x1E300C0C
#define SH7760_LDLAOR			0x1E300C10
#define SH7760_LDPALCR			0x1E300C12
#define SH7760_LDHCNR			0x1E300C14
#define SH7760_LDHSYNR			0x1E300C16
#define SH7760_LDVDLNR			0x1E300C18
#define SH7760_LDVTLNR			0x1E300C1A
#define SH7760_LDVSYNR			0x1E300C1C
#define SH7760_LDACLNR			0x1E300C1E
#define SH7760_LDINTR			0x1E300C20
#define SH7760_LDPMMR			0x1E300C24
#define SH7760_LDPSPR			0x1E300C26
#define SH7760_LDCNTR			0x1E300C28

#define SH7760_HcRevision		0x1E340000
#define SH7760_HcControl		0x1E340004
#define SH7760_HcCommandStatus		0x1E340008
#define SH7760_HcInterruptStatus	0x1E34000C
#define SH7760_HcInterruptEnable	0x1E340010
#define SH7760_HcInterruptDisable	0x1E340014
#define SH7760_HcHCCA			0x1E340018
#define SH7760_HcPeriodCurrentED	0x1E34001C
#define SH7760_HcControlHeadED		0x1E340020
#define SH7760_HcControlCurrentE	0x1E340024
#define SH7760_HcBulkHeadED		0x1E340028
#define SH7760_HcBulkCurrentED		0x1E34002C
#define SH7760_HcDoneHead		0x1E340030
#define SH7760_HcFmInterval		0x1E340034
#define SH7760_HcFmRemaining		0x1E340038
#define SH7760_HcFmNumber		0x1E34003C
#define SH7760_HcPeriodicStart		0x1E340040
#define SH7760_HcLSThreshold		0x1E340044
#define SH7760_HcRhDescriptorA		0x1E340048
#define SH7760_HcRhDescriptorB		0x1E34004C
#define SH7760_HcRhStatus		0x1E340050
#define SH7760_HcRhPortStatus1		0x1E340054

#define SH7760_CAN0MCR			0x1E380000
#define SH7760_CAN0GSR			0x1E380002
#define SH7760_CAN0BCR1			0x1E380004
#define SH7760_CAN0BCR0			0x1E380006
#define SH7760_CAN0IRR			0x1E380008
#define SH7760_CAN0IMR			0x1E38000A
#define SH7760_CAN0TECREC		0x1E38000C
#define SH7760_CAN0TXPR1		0x1E380020
#define SH7760_CAN0TXPR0		0x1E380022
#define SH7760_CAN0TXCR1		0x1E380028
#define SH7760_CAN0TXCR0		0x1E38002A
#define SH7760_CAN0TXACK1		0x1E380030
#define SH7760_CAN0TXACK0		0x1E380032
#define SH7760_CAN0ABACK1		0x1E380038
#define SH7760_CAN0ABACK0		0x1E38003A
#define SH7760_CAN0RXPR1		0x1E380040
#define SH7760_CAN0RXPR0		0x1E380042
#define SH7760_CAN0RFPR1		0x1E380048
#define SH7760_CAN0RFPR0		0x1E38004A
#define SH7760_CAN0MBIMR1		0x1E380050
#define SH7760_CAN0MBIMR0		0x1E380052
#define SH7760_CAN0UMSR1		0x1E380058
#define SH7760_CAN0UMSR0		0x1E38005A
#define SH7760_CAN0TCNTR		0x1E380080
#define SH7760_CAN0TCR			0x1E380082
#define SH7760_CAN0TSR			0x1E380084
#define SH7760_CAN0TDCR			0x1E380086
#define SH7760_CAN0LOSR			0x1E380088
#define SH7760_CAN0ICR0_cc		0x1E38008A
#define SH7760_CAN0ICR0_tm		0x1E38008C
#define SH7760_CAN0ICR1			0x1E38008E
#define SH7760_CAN0TCMR0		0x1E380090
#define SH7760_CAN0TCMR1		0x1E380092
#define SH7760_CAN0TCMR2		0x1E380094
#define SH7760_CAN0CCR			0x1E380096
#define SH7760_CAN0CMAX			0x1E380098
#define SH7760_CAN0TMR			0x1E38009A
#define SH7760_CAN0MB0			0x1E380100
#define SH7760_CAN0MB1			0x1E380120
#define SH7760_CAN0MB2			0x1E380140
#define SH7760_CAN0MB3			0x1E380160
#define SH7760_CAN0MB4			0x1E380180
#define SH7760_CAN0MB5			0x1E3801A0
#define SH7760_CAN0MB6			0x1E3801C0
#define SH7760_CAN0MB7			0x1E3801E0
#define SH7760_CAN0MB8			0x1E380200
#define SH7760_CAN0MB9			0x1E380220
#define SH7760_CAN0MB10			0x1E380240
#define SH7760_CAN0MB11			0x1E380260
#define SH7760_CAN0MB12			0x1E380280
#define SH7760_CAN0MB13			0x1E3802A0
#define SH7760_CAN0MB14			0x1E3802C0
#define SH7760_CAN0MB15			0x1E3802E0
#define SH7760_CAN0MB16			0x1E380300
#define SH7760_CAN0MB17			0x1E380320
#define SH7760_CAN0MB18			0x1E380340
#define SH7760_CAN0MB19			0x1E380360
#define SH7760_CAN0MB20			0x1E380380
#define SH7760_CAN0MB21			0x1E3803A0
#define SH7760_CAN0MB22			0x1E3803C0
#define SH7760_CAN0MB23			0x1E3803E0
#define SH7760_CAN0MB24			0x1E380400
#define SH7760_CAN0MB25			0x1E380420
#define SH7760_CAN0MB26			0x1E380440
#define SH7760_CAN0MB27			0x1E380460
#define SH7760_CAN0MB28			0x1E380480
#define SH7760_CAN0MB29			0x1E3804A0
#define SH7760_CAN0MB30			0x1E3804C0
#define SH7760_CAN0MB31			0x1E3804E0

#define SH7760_CAN1MCR			0x1E390000
#define SH7760_CAN1GSR			0x1E390002
#define SH7760_CAN1BCR1			0x1E390004
#define SH7760_CAN1BCR0			0x1E390006
#define SH7760_CAN1IRR			0x1E390008
#define SH7760_CAN1IMR			0x1E39000A
#define SH7760_CAN1TECREC		0x1E39000C
#define SH7760_CAN1TXPR1		0x1E390020
#define SH7760_CAN1TXPR0		0x1E390022
#define SH7760_CAN1TXCR1		0x1E390028
#define SH7760_CAN1TXCR0		0x1E39002A
#define SH7760_CAN1TXACK1		0x1E390030
#define SH7760_CAN1TXACK0		0x1E390032
#define SH7760_CAN1ABACK1		0x1E390038
#define SH7760_CAN1ABACK0		0x1E39003A
#define SH7760_CAN1RXPR1		0x1E390040
#define SH7760_CAN1RXPR0		0x1E390042
#define SH7760_CAN1RFPR1		0x1E390048
#define SH7760_CAN1RFPR0		0x1E39004A
#define SH7760_CAN1MBIMR1		0x1E390050
#define SH7760_CAN1MBIMR0		0x1E390052
#define SH7760_CAN1UMSR1		0x1E390058
#define SH7760_CAN1UMSR0		0x1E39005A
#define SH7760_CAN1TCNTR		0x1E390080
#define SH7760_CAN1TCR			0x1E390082
#define SH7760_CAN1TSR			0x1E390084
#define SH7760_CAN1TDCR			0x1E390086
#define SH7760_CAN1LOSR			0x1E390088
#define SH7760_CAN1ICR0_cc		0x1E39008A
#define SH7760_CAN1ICR0_tm		0x1E39008C
#define SH7760_CAN1ICR1			0x1E39008E
#define SH7760_CAN1TCMR0		0x1E390090
#define SH7760_CAN1TCMR1		0x1E390092
#define SH7760_CAN1TCMR2		0x1E390094
#define SH7760_CAN1CCR			0x1E390096
#define SH7760_CAN1CMAX			0x1E390098
#define SH7760_CAN1TMR			0x1E39009A
#define SH7760_CAN1MB0			0x1E390100
#define SH7760_CAN1MB1			0x1E390120
#define SH7760_CAN1MB2			0x1E390140
#define SH7760_CAN1MB3			0x1E390160
#define SH7760_CAN1MB4			0x1E390180
#define SH7760_CAN1MB5			0x1E3901A0
#define SH7760_CAN1MB6			0x1E3901C0
#define SH7760_CAN1MB7			0x1E3901E0
#define SH7760_CAN1MB8			0x1E390200
#define SH7760_CAN1MB9			0x1E390220
#define SH7760_CAN1MB10			0x1E390240
#define SH7760_CAN1MB11			0x1E390260
#define SH7760_CAN1MB12			0x1E390280
#define SH7760_CAN1MB13			0x1E3902A0
#define SH7760_CAN1MB14			0x1E3902C0
#define SH7760_CAN1MB15			0x1E3902E0
#define SH7760_CAN1MB16			0x1E390300
#define SH7760_CAN1MB17			0x1E390320
#define SH7760_CAN1MB18			0x1E390340
#define SH7760_CAN1MB19			0x1E390360
#define SH7760_CAN1MB20			0x1E390380
#define SH7760_CAN1MB21			0x1E3903A0
#define SH7760_CAN1MB22			0x1E3903C0
#define SH7760_CAN1MB23			0x1E3903E0
#define SH7760_CAN1MB24			0x1E390400
#define SH7760_CAN1MB25			0x1E390420
#define SH7760_CAN1MB26			0x1E390440
#define SH7760_CAN1MB27			0x1E390460
#define SH7760_CAN1MB28			0x1E390480
#define SH7760_CAN1MB29			0x1E3904A0
#define SH7760_CAN1MB30			0x1E3904C0
#define SH7760_CAN1MB31			0x1E3904E0

#define SH7760_DMABRGCR			0x1E3C0000
#define SH7760_DMAATXSAR0		0x1E3C0040
#define SH7760_DMAARXDAR0		0x1E3C0044
#define SH7760_DMAATXTCR0		0x1E3C0048
#define SH7760_DMAARXTCR0		0x1E3C004C
#define SH7760_DMAACR0			0x1E3C0050
#define SH7760_DMAATXTCNT0		0x1E3C0054
#define SH7760_DMAARXTCNT0		0x1E3C0058
#define SH7760_DMAATXSAR1		0x1E3C0060
#define SH7760_DMAARXDAR1		0x1E3C0064
#define SH7760_DMAATXTCR1		0x1E3C0068
#define SH7760_DMAARXTCR1		0x1E3C006C
#define SH7760_DMAACR1			0x1E3C0070
#define SH7760_DMAATXTCNT1		0x1E3C0074
#define SH7760_DMAARXTCNT1		0x1E3C0078
#define SH7760_DMAUSAR			0x1E3C0080
#define SH7760_DMAUDAR			0x1E3C0084
#define SH7760_DMAURWSZ			0x1E3C0088
#define SH7760_DMAUCR			0x1E3C008C

#define SH7760_PACR			0x1E400000
#define SH7760_PBCR			0x1E400004
#define SH7760_PCCR			0x1E400008
#define SH7760_PDCR			0x1E40000C
#define SH7760_PECR			0x1E400010
#define SH7760_PFCR			0x1E400014
#define SH7760_PGCR			0x1E400018
#define SH7760_PHCR			0x1E40001C
#define SH7760_PJCR			0x1E400020
#define SH7760_PKCR			0x1E400024
#define SH7760_INPUPA			0x1E400028
#define SH7760_DMAPCR			0x1E40002C
#define SH7760_SCIHZR			0x1E400030
#define SH7760_IPSELR			0x1E400034
#define SH7760_PADR			0x1E400040
#define SH7760_PBDR			0x1E400044
#define SH7760_PCDR			0x1E400048
#define SH7760_PDDR			0x1E40004C
#define SH7760_PEDR			0x1E400050
#define SH7760_PFDR			0x1E400054
#define SH7760_PGDR			0x1E400058
#define SH7760_PHDR			0x1E40005C
#define SH7760_PJDR			0x1E400060
#define SH7760_PKDR			0x1E400064
#define SH7760_PAPUPR			0x1E400080
#define SH7760_PBPUPR			0x1E400084
#define SH7760_PCPUPR			0x1E400088
#define SH7760_PDPUPR			0x1E40008C
#define SH7760_PEPUPR			0x1E400090
#define SH7760_PFPUPR			0x1E400094
#define SH7760_PGPUPR			0x1E400098
#define SH7760_PHPUPR			0x1E40009C
#define SH7760_PJPUPR			0x1E4000A0
#define SH7760_PKPUPR			0x1E4000A4
#define SH7760_MDPUPR			0x1E4000A8
#define SH7760_MODSELR			0x1E4000AC

#define SH7760_FLCMNCR			0x1E440000
#define SH7760_FLCMDCR			0x1E440004
#define SH7760_FLCMCDR			0x1E440008
#define SH7760_FLADR			0x1E44000C
#define SH7760_FLDATAR			0x1E440010
#define SH7760_FLDTCNTR			0x1E440014
#define SH7760_FLINTDMACR		0x1E440018
#define SH7760_FLBSYTMR			0x1E44001C
#define SH7760_FLBSYCNT			0x1E440020
#define SH7760_FLDTFIFO			0x1E440024
#define SH7760_FLECFIFO			0x1E440028
#define SH7760_FLTRCR			0x1E44002C

#define SH7760_SISMR			0x1E480000
#define SH7760_SIBRR			0x1E480002
#define SH7760_SISCR			0x1E480004
#define SH7760_SITDR			0x1E480006
#define SH7760_SISSR			0x1E480008
#define SH7760_SIRDR			0x1E48000A
#define SH7760_SISCMR			0x1E48000C
#define SH7760_SISC2R			0x1E48000E
#define SH7760_SIWAIT			0x1E480010
#define SH7760_SIGRD			0x1E480012
#define SH7760_SISMPL			0x1E480014

#define SH7760_CMDR0			0x1E500000
#define SH7760_CMDR1			0x1E500001
#define SH7760_CMDR2			0x1E500002
#define SH7760_CMDR3			0x1E500003
#define SH7760_CMDR4			0x1E500004
#define SH7760_CMDR5			0x1E500005
#define SH7760_CMDSTRT			0x1E500006
#define SH7760_OPCR			0x1E50000A
#define SH7760_CSTR			0x1E50000B
#define SH7760_INTCR0			0x1E50000C
#define SH7760_INTCR1			0x1E50000D
#define SH7760_INTSTR0			0x1E50000E
#define SH7760_INTSTR1			0x1E50000F
#define SH7760_CLKON			0x1E500010
#define SH7760_CTOCR			0x1E500011
#define SH7760_TBCR			0x1E500014
#define SH7760_MODER			0x1E500016
#define SH7760_CMDTYR			0x1E500018
#define SH7760_RSPTYR			0x1E500019
#define SH7760_RSPR0			0x1E500020
#define SH7760_RSPR1			0x1E500021
#define SH7760_RSPR2			0x1E500022
#define SH7760_RSPR3			0x1E500023
#define SH7760_RSPR4			0x1E500024
#define SH7760_RSPR5			0x1E500025
#define SH7760_RSPR6			0x1E500026
#define SH7760_RSPR7			0x1E500027
#define SH7760_RSPR8			0x1E500028
#define SH7760_RSPR9			0x1E500029
#define SH7760_RSPR10			0x1E50002A
#define SH7760_RSPR11			0x1E50002B
#define SH7760_RSPR12			0x1E50002C
#define SH7760_RSPR13			0x1E50002D
#define SH7760_RSPR14			0x1E50002E
#define SH7760_RSPR15			0x1E50002F
#define SH7760_RSPR16			0x1E500030
#define SH7760_DTOUTR			0x1E500032
#define SH7760_DR			0x1E500040
#define SH7760_FIFOCLR			0x1E500042
#define SH7760_DMACR			0x1E500044
#define SH7760_INTCR2			0x1E500046
#define SH7760_INTSTR2			0x1E500048
#define SH7760_RDTIMSEL			0x1E50004A

#define SH7760_SCSMR0			0x1E600000
#define SH7760_SCBRR0			0x1E600004
#define SH7760_SCSCR0			0x1E600008
#define SH7760_SCFTDR0			0x1E60000C
#define SH7760_SCFSR0			0x1E600010
#define SH7760_SCFRDR0			0x1E600014
#define SH7760_SCFCR0			0x1E600018
#define SH7760_SCTFDR0			0x1E60001C
#define SH7760_SCRFDR0			0x1E600020
#define SH7760_SCSPTR0			0x1E600024
#define SH7760_SCLSR0			0x1E600028
#define SH7760_SCRER0			0x1E60002C

#define SH7760_SCSMR1			0x1E610000
#define SH7760_SCBRR1			0x1E610004
#define SH7760_SCSCR1			0x1E610008
#define SH7760_SCFTDR1			0x1E61000C
#define SH7760_SCFSR1			0x1E610010
#define SH7760_SCFRDR1			0x1E610014
#define SH7760_SCFCR1			0x1E610018
#define SH7760_SCTFDR1			0x1E61001C
#define SH7760_SCRFDR1			0x1E610020
#define SH7760_SCSPTR1			0x1E610024
#define SH7760_SCLSR1			0x1E610028
#define SH7760_SCRER1			0x1E61002C

#define SH7760_SCSMR2			0x1E620000
#define SH7760_SCBRR2			0x1E620004
#define SH7760_SCSCR2			0x1E620008
#define SH7760_SCFTDR2			0x1E62000C
#define SH7760_SCFSR2			0x1E620010
#define SH7760_SCFRDR2			0x1E620014
#define SH7760_SCFCR2			0x1E620018
#define SH7760_SCTFDR2			0x1E62001C
#define SH7760_SCRFDR2			0x1E620020
#define SH7760_SCSPTR2			0x1E620024
#define SH7760_SCLSR2			0x1E620028
#define SH7760_SCRER2			0x1E62002C

#define SH7760_SSICR0			0x1E680000
#define SH7760_SSISR0			0x1E680004
#define SH7760_SSITDR0			0x1E680008
#define SH7760_SSIRDR0			0x1E68000C
#define SH7760_SSICR1			0x1E690000
#define SH7760_SSISR1			0x1E690004
#define SH7760_SSITDR1			0x1E690008
#define SH7760_SSIRDR1			0x1E69000C

#define SH7760_PTEH			0x1F000000
#define SH7760_PTEL			0x1F000004
#define SH7760_TTB			0x1F000008
#define SH7760_TEA			0x1F00000C
#define SH7760_MMUCR			0x1F000010
#define SH7760_BASRA			0x1F000014
#define SH7760_BASRB			0x1F000018
#define SH7760_CCR			0x1F00001C
#define SH7760_TRA			0x1F000020
#define SH7760_EXPEVT			0x1F000024
#define SH7760_INTEVT			0x1F000028
#define SH7760_PTEA			0x1F000034
#define SH7760_QACR0			0x1F000038
#define SH7760_QACR1			0x1F00003C

#define SH7760_BARA			0x1F200000
#define SH7760_BAMRA			0x1F200004
#define SH7760_BBRA			0x1F200008
#define SH7760_BARB			0x1F20000C
#define SH7760_BAMRB			0x1F200010
#define SH7760_BBRB			0x1F200014
#define SH7760_BDRB			0x1F200018
#define SH7760_BDMRB			0x1F20001C
#define SH7760_BRCR			0x1F200020

#define SH7760_BCR1			0x1F800000
#define SH7760_BCR2			0x1F800004
#define SH7760_WCR1			0x1F800008
#define SH7760_WCR2			0x1F80000C
#define SH7760_WCR3			0x1F800010
#define SH7760_MCR			0x1F800014
#define SH7760_PCR			0x1F800018
#define SH7760_RTCSR			0x1F80001C
#define SH7760_RTCNT			0x1F800020
#define SH7760_RTCOR			0x1F800024
#define SH7760_RFCR			0x1F800028
#define SH7760_GPIOIC			0x1F800048
#define SH7760_BCR3			0x1F800050

#define SH7760_SAR0			0x1FA00000
#define SH7760_DAR0			0x1FA00004
#define SH7760_DMATCR0			0x1FA00008
#define SH7760_CHCR0			0x1FA0000C
#define SH7760_SAR1			0x1FA00010
#define SH7760_DAR1			0x1FA00014
#define SH7760_DMATCR1			0x1FA00018
#define SH7760_CHCR1			0x1FA0001C
#define SH7760_SAR2			0x1FA00020
#define SH7760_DAR2			0x1FA00024
#define SH7760_DMATCR2			0x1FA00028
#define SH7760_CHCR2			0x1FA0002C
#define SH7760_SAR3			0x1FA00030
#define SH7760_DAR3			0x1FA00034
#define SH7760_DMATCR3			0x1FA00038
#define SH7760_CHCR3			0x1FA0003C
#define SH7760_DMAOR			0x1FA00040
#define SH7760_SAR4			0x1FA00050
#define SH7760_DAR4			0x1FA00054
#define SH7760_DMATCR4			0x1FA00058
#define SH7760_CHCR4			0x1FA0005C
#define SH7760_SAR5			0x1FA00060
#define SH7760_DAR5			0x1FA00064
#define SH7760_DMATCR5			0x1FA00068
#define SH7760_CHCR5			0x1FA0006C
#define SH7760_SAR6			0x1FA00070
#define SH7760_DAR6			0x1FA00074
#define SH7760_DMATCR6			0x1FA00078
#define SH7760_CHCR6			0x1FA0007C
#define SH7760_SAR7			0x1FA00080
#define SH7760_DAR7			0x1FA00084
#define SH7760_DMATCR7			0x1FA00088
#define SH7760_CHCR7			0x1FA0008C

#define SH7760_FRQCR			0x1FC00000
#define SH7760_STBCR			0x1FC00004
#define SH7760_STBCR2			0x1FC00010

#define SH7760_ICR			0x1FD00000
#define SH7760_IPRA			0x1FD00004
#define SH7760_IPRB			0x1FD00008
#define SH7760_IPRC			0x1FD0000C
#define SH7760_IPRD			0x1FD00010
#define SH7760_TSTR			0x1FD80004
#define SH7760_TCOR0			0x1FD80008
#define SH7760_TCNT0			0x1FD8000C
#define SH7760_TCR0			0x1FD80010
#define SH7760_TCOR1			0x1FD80014
#define SH7760_TCNT1			0x1FD80018
#define SH7760_TCR1			0x1FD8001C
#define SH7760_TCOR2			0x1FD80020
#define SH7760_TCNT2			0x1FD80024
#define SH7760_TCR2			0x1FD80028
#define SH7760_TCPR2			0x1FD8002C

#define SH7760_SDIR			0x1FF00000
#define SH7760_SDDR			0x1FF00008
#define SH7760_SDDRL			0x1FF0000A
#define SH7760_SDINT			0x1FF00014

#endif /* _SH_7760_H_INCLUDED */

/* __SRCVERSION("7760.h $Rev: 648519 $"); */

#ifdef __QNXNTO__
#include <sys/srcversion.h>
__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/SP1/hardware/startup/lib/public/sh/7760.h $ $Rev: 648519 $" )
#endif