

#include "mcc_generated_files/mcc.h"
void update_seg(int valor);
void clear(void);
void states(void);

char state = 1;
int count = 0;
int TH = 2;

void interrupt INTERRUPT_InterruptManager(void) {

    if (INTCONbits.PEIE == 1 && PIE1bits.TMR1IE == 1 && PIR1bits.TMR1IF == 1) {
        
        count++;
        if (count >= TH) {
            count = 0;
            states();
        }
        TMR1_ISR();
    } else {

    }
}

void main(void) {
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    update_seg(1);
    
    while (1) {
        
        __delay_ms(200);



    }
}

void update_seg(int valor) {
    clear();

    switch (valor) {
        case 0:
            break;
        case 1:
            RB_SetHigh();
            RC_SetHigh();
            break;
        case 2:
            RA_SetHigh();
            RB_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RG_SetHigh();
            break;
        case 3:
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RG_SetHigh();
            break;
        case 4:
            break;
        case 5:
            RA_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case 6:
            RA_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case 7:
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            break;
        case 8:
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case 9:
            break;

    }

}

void clear(void) {
    RA_SetLow();
    RB_SetLow();
    RC_SetLow();
    RD_SetLow();
    RE_SetLow();
    RF_SetLow();
    RG_SetLow();
    RP_SetLow();


}

void states(void) {

    state++;

    if (state > 3) {
        state = 1;
    }

    switch (state) {
        case 1:
            SEG1_SetHigh();
            SEG2_SetLow();
            SEG3_SetLow();
            break;
        case 2:
            SEG2_SetHigh();
            SEG1_SetLow();
            SEG3_SetLow();
            break;
        case 3:
            SEG3_SetHigh();
            SEG1_SetLow();
            SEG2_SetLow();
            break;


    }
}