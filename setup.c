#include"setup.h"
#include<xc.h>

inline void init_pic(){
    ADCON1 = 0x06; //PORTA operando em modo digital
    TRISA = 0x00; //PORTA como sa�da
    PORTA = 0x00; //limpa PORTA
    TRISD = 0x00; //PORTD como sa�da
    PORTD = 0x00; //limpa PORTD
}

inline void config_interrupt(){
    GIE = 0; // habilita interrup��es
    TMR0IE = 0; // timer0
    INTE = 0; // RB0, borda configurada no INTEDG, acorda do sleep
    RBIE = 0; // PORTB
    
    PEIE = 0; // habilita interrup��o dos perif�ricos
    TMR1IE = 0; // Estouro do timer1
    TMR2IE = 0; // estouro do timer2
    EEIE = 0; // uma escrita na EEPROM termina
    CCP1IE = 0; // modo capture: quando faz captura
    SSPIE = 0; // spi
    TXIE = 0; //serial
    ADIE = 0; //adc finalizou a convers�o
    RCIE = 1;
}