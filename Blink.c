/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
� Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : blinkLED
Version : 
Date    : 10/14/2019
Author  : 
Company : 
Comments: 


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <mega16.h>
#include <delay.h>
#include <io.h>

// Declare your global variables here

void main(void)
{
// Declare your local variables here
    int delay_v = 200;
    DDRC = 0xfc;
    DDRD = 0x01;
    PORTC = 0xff;
    DDRA = 0xff;
while (1){
        if(PINC.0 == 0){
            if(delay_v > 50)
                delay_v -= 30;
      }
      if(PINC.1 == 0){ 
            if(delay_v < 500)
                delay_v += 30;
      }  
      PORTD.0 = !PORTD.0;
      delay_ms(delay_v); 
      PORTA = delay_v; 
}
}
