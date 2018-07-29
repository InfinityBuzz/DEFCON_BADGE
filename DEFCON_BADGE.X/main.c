

#include "mcc_generated_files/mcc.h"
void update_seg(char seg, char valor);
void clear(void);
void states(void);
void load_msg(void);

char state = 1;
uint8_t count = 0;
uint8_t TH = 1;
char msg[20];
uint8_t x = 0;

void interrupt INTERRUPT_InterruptManager(void) {

    if (INTCONbits.PEIE == 1 && PIE1bits.TMR1IE == 1 && PIR1bits.TMR1IF == 1) {

        count++;
        if (count >= TH) {
            count = 0;
            states();
        }
        //update_seg(1, msg[x]);
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

    load_msg();
    while (1) {

        update_seg(1, msg[x]);
        __delay_ms(200);
        x++;
        if (x > 20) {
            x = 0;
        }




    }
}

void load_msg(void) {
    msg[0] = '0';
    msg[1] = '1';
    msg[2] = '2';
    msg[3] = '3';
    msg[4] = '4';
    msg[5] = '5';
    msg[6] = '6';
    msg[7] = '7';
    msg[8] = '8';
    msg[9] = '9';
    msg[10] = 'A';
    msg[11] = 'B';
    msg[12] = 'C';
    msg[13] = 'D';
    msg[14] = 'E';
    msg[15] = 'F';
    msg[16] = 'H';
    msg[17] = 'A';
    msg[18] = 'A';
    msg[19] = 'A';
    msg[20] = 'A';
}

void update_seg(char seg, char valor) {
    clear();

    switch (valor) {
        case '0':
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            break;
        case '1':
            RB_SetHigh();
            RC_SetHigh();
            break;
        case '2':
            RA_SetHigh();
            RB_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RG_SetHigh();
            break;
        case '3':
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RG_SetHigh();
            break;
        case '4':
            RB_SetHigh();
            RC_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case '5':
            RA_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case '6':
            RA_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case '7':
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            break;
        case '8':
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case '9':
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case 'A':
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case 'B':
            RC_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case 'C':
            RA_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            break;
        case 'D':
            RB_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RG_SetHigh();
            break;
        case 'E':
            RA_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case 'F':
            RA_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case 'H':
            RB_SetHigh();
            RC_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
            break;
        case 'G':
            RA_SetHigh();
            RB_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            RE_SetHigh();
            RF_SetHigh();
            RG_SetHigh();
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