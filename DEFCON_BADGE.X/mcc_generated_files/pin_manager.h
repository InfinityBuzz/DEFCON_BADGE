/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.0
        Device            :  PIC16F1508
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SEG2 aliases
#define SEG2_TRIS               TRISAbits.TRISA4
#define SEG2_LAT                LATAbits.LATA4
#define SEG2_PORT               PORTAbits.RA4
#define SEG2_WPU                WPUAbits.WPUA4
#define SEG2_ANS                ANSELAbits.ANSA4
#define SEG2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SEG2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SEG2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SEG2_GetValue()           PORTAbits.RA4
#define SEG2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SEG2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SEG2_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define SEG2_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define SEG2_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define SEG2_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set SEG1 aliases
#define SEG1_TRIS               TRISAbits.TRISA5
#define SEG1_LAT                LATAbits.LATA5
#define SEG1_PORT               PORTAbits.RA5
#define SEG1_WPU                WPUAbits.WPUA5
#define SEG1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SEG1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SEG1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SEG1_GetValue()           PORTAbits.RA5
#define SEG1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SEG1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SEG1_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define SEG1_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)

// get/set RF aliases
#define RF_TRIS               TRISBbits.TRISB5
#define RF_LAT                LATBbits.LATB5
#define RF_PORT               PORTBbits.RB5
#define RF_WPU                WPUBbits.WPUB5
#define RF_ANS                ANSELBbits.ANSB5
#define RF_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RF_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RF_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RF_GetValue()           PORTBbits.RB5
#define RF_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RF_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RF_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define RF_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define RF_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define RF_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set SEG3 aliases
#define SEG3_TRIS               TRISBbits.TRISB7
#define SEG3_LAT                LATBbits.LATB7
#define SEG3_PORT               PORTBbits.RB7
#define SEG3_WPU                WPUBbits.WPUB7
#define SEG3_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define SEG3_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define SEG3_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define SEG3_GetValue()           PORTBbits.RB7
#define SEG3_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define SEG3_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define SEG3_SetPullup()      do { WPUBbits.WPUB7 = 1; } while(0)
#define SEG3_ResetPullup()    do { WPUBbits.WPUB7 = 0; } while(0)

// get/set RA aliases
#define RA_TRIS               TRISCbits.TRISC0
#define RA_LAT                LATCbits.LATC0
#define RA_PORT               PORTCbits.RC0
#define RA_ANS                ANSELCbits.ANSC0
#define RA_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RA_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RA_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RA_GetValue()           PORTCbits.RC0
#define RA_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RA_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RA_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define RA_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RB aliases
#define RB_TRIS               TRISCbits.TRISC1
#define RB_LAT                LATCbits.LATC1
#define RB_PORT               PORTCbits.RC1
#define RB_ANS                ANSELCbits.ANSC1
#define RB_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RB_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RB_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RB_GetValue()           PORTCbits.RC1
#define RB_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RB_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RB_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define RB_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC aliases
#define RC_TRIS               TRISCbits.TRISC2
#define RC_LAT                LATCbits.LATC2
#define RC_PORT               PORTCbits.RC2
#define RC_ANS                ANSELCbits.ANSC2
#define RC_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC_GetValue()           PORTCbits.RC2
#define RC_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RD aliases
#define RD_TRIS               TRISCbits.TRISC3
#define RD_LAT                LATCbits.LATC3
#define RD_PORT               PORTCbits.RC3
#define RD_ANS                ANSELCbits.ANSC3
#define RD_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RD_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RD_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RD_GetValue()           PORTCbits.RC3
#define RD_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RD_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RD_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define RD_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RE aliases
#define RE_TRIS               TRISCbits.TRISC4
#define RE_LAT                LATCbits.LATC4
#define RE_PORT               PORTCbits.RC4
#define RE_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RE_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RE_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RE_GetValue()           PORTCbits.RC4
#define RE_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RE_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set RG aliases
#define RG_TRIS               TRISCbits.TRISC6
#define RG_LAT                LATCbits.LATC6
#define RG_PORT               PORTCbits.RC6
#define RG_ANS                ANSELCbits.ANSC6
#define RG_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RG_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RG_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RG_GetValue()           PORTCbits.RC6
#define RG_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RG_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RG_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define RG_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RP aliases
#define RP_TRIS               TRISCbits.TRISC7
#define RP_LAT                LATCbits.LATC7
#define RP_PORT               PORTCbits.RC7
#define RP_ANS                ANSELCbits.ANSC7
#define RP_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RP_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RP_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RP_GetValue()           PORTCbits.RC7
#define RP_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RP_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RP_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define RP_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/