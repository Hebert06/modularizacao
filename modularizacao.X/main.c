/*
 * File:   main.c
 * Author: 19269311
 *
 * Created on 12 de Março de 2020, 08:26
 */


#include <xc.h>
#include <pic16f887.h>
#include "config.h"
#include "chaves.h"
#include "leds.h"

void main(void)
{
    initChave();
    initLED();
    
    while(1)
    {
        if( chave0() == 0 && chave1() == 0 )
        {
            ligarLED0();
            __delay_ms(500);
            desligarLED0();
            ligarLED1();
            __delay_ms(500);
            desligarLED1();
        }
        
        if ( chave0() == 1 && chave1() == 1 )
        {
            ligarLED0();
            __delay_ms(100);
            desligarLED0();
            ligarLED1();
            __delay_ms(100);
            desligarLED1();
        }
        else
        {
            if( chave0() == 1 || chave1() == 1 )
            {
                ligarLED0();
                __delay_ms(250);
                desligarLED0();
                ligarLED1();
                __delay_ms(250);
                desligarLED1();
            }
        }
        
    }
    return;
}
