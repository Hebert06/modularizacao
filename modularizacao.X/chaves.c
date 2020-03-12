/*
 * File:   chaves.c
 * Author: 19269311
 *
 * Created on 12 de Março de 2020, 08:32
 */


#include <xc.h>

void initChave(void) 
{
    TRISDbits.TRISD2 = 1;
    TRISDbits.TRISD3 = 1;
}
unsigned char chave0 (void)
{
    return( PORTDbits.RD2);
}
unsigned char chave1 (void)
{
    return( PORTDbits.RD3);
}