/*
 * File:   IR_Sensor.c
 * Author: Preethi
 *
 * Created on 25 February, 2022, 6:50 PM
 */


#include <xc.h>
#define button RA0
#define IR_Sensor RA1
#define motor RB0


void main(void) 
{
    PORTA=0x00;
    TRISA=0x03;
    PORTB=0x00;
    TRISB=0x00;
    ANSEL=0x00;
    ANSELH=0x00;
    static unsigned char count=0;
    while(1)
    {
        if(button==1)
        {
            motor=1;
        }while(button==1);
        
        if(IR_Sensor==1)
        {
          count++;  
        }while(IR_Sensor==1);
    }
    
    
    
   
}
