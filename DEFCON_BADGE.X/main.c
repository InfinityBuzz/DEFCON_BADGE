

#include "mcc_generated_files/mcc.h"
void update_seg(int valor);
void clear(void);
void states(void);

char state = 1;


void interrupt INTERRUPT_InterruptManager (void)
{
    
    if(INTCONbits.PEIE == 1 && PIE1bits.TMR1IE == 1 && PIR1bits.TMR1IF == 1)
    {
        TMR1_ISR();
        update_seg(10);
        states();
    }
    else
    {
        
    }
}
void main(void)
{
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

    while (1)
    {
        
       
       
       
    }
}

void update_seg(int valor){
    clear();
    
    switch(valor){
        case 0:
            break;
        case 1:
            RB_SetHigh();
            RC_SetHigh();
            break;
        case 2:
            RA_SetHigh();
            RB_SetHigh();
            RG_SetHigh();
            RE_SetHigh();
            RD_SetHigh();
            break;
        case 3:
            RA_SetHigh();
            RB_SetHigh();
            RG_SetHigh();
            RC_SetHigh();
            RD_SetHigh();
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
            
    }
    
}

void clear(void){
    
}

void states(void){
    
    state++;
    
    if (state >= 3){
        state = 1;
    }
}