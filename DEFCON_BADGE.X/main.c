

#include "mcc_generated_files/mcc.h"
void update_seg(int valor);
void clear(void);



void interrupt INTERRUPT_InterruptManager (void)
{
    
    if(INTCONbits.PEIE == 1 && PIE1bits.TMR1IE == 1 && PIR1bits.TMR1IF == 1)
    {
        TMR1_ISR();
        update_seg(10);
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
        RB_SetHigh();
        RC_SetHigh();
        SEG1_Toggle();
       __delay_ms(10);
       SEG1_Toggle();
       SEG2_Toggle();
       __delay_ms(10);
       SEG2_Toggle();
       SEG3_Toggle();
       __delay_ms(10);
       SEG3_Toggle();
       
       
       
    }
}

void update_seg(int valor){
    clear();
    
    switch(valor){
        case 1 :
            RB_SetHigh();
            RC_SetHigh();
    }
    
}

void clear(void){
    
}