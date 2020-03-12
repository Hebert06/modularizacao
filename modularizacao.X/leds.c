/*
 * File:   leds.c
 * Author: 19269311
 *
 * Created on 12 de Março de 2020, 08:32
 */


#include <xc.h>
#include <pic16f887.h>
#define LED0 PORTDbits.RD0
#define LED1 PORTDbits.RD1

void initLED(void) 
{
    LED0 = 0;
    LED1 = 0;
    TRISDbits.TRISD0 = 0;
    TRISDbits.TRISD1 = 0;
}
void ligarLED0 (void)
{
    LED0 = 1;
}
void ligarLED1 (void)
{
    LED1 = 1;
}
void desligarLED0(void)
{
    LED0 = 0;
}
void desligarLED1(void)
{
    LED1 = 0;
}
unsigned char lerLED(void)
{
    return ( LED0 );
    return ( LED1 );
}