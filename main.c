#include <16F877A.h>

#fuses HS,NOWDT,NOPROTECT,NOPUT

#use delay(clock=20MHz, crystal=20MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_B1,rcv=PIN_B0,bits=8)
#use FAST_IO(A)

#define NeoPin PIN_A3
#define NUMPIXELS 26

#include "ports.h"
#include "vars.h"
#include "NeoPixel.c"
#include "irqs.c"
#include "fun.c"

void main()
{
    set_tris_b(0x10);   //Definido como porta de entrada B0 E B1 -> 0000 0010
    set_tris_a(0x10);
    //port_b_pullups(true);
    setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1|RTCC_8_bit);
    enable_interrupts(INT_EXT);
    ext_int_edge(L_TO_H); //ext_int_edge(H_TO_L);
    enable_interrupts(global);
    set_TIMER0(0xFF);   //init timer with last value   
     
   
    
   iniciaLEDS();

    int x= 0;
    while(TRUE)
    {
      
      
       switch(mode) {
            case 0:
               if(input(PIN_B1)){     
        
                    mode_SingleColor(0);
                    delay_us(200);
                    mode_SingleColor(1);
                    delay_us(200);
                     mode_SingleColor(0);
      
                  }
            break;
            case 1:
                  if(input(PIN_B1)){   
                    mode_SingleColor(1);
                    delay_us(200);
                    mode_SingleColor(0);
                    delay_us(200);
                     mode_SingleColor(1);
      
                  }
            break;
            case 2:
                
                if(input(PIN_B1)){   
                    mode_SingleColor(2);
                    delay_us(200);
                    mode_SingleColor(3);
                    delay_us(200);
                     mode_SingleColor(2);      
                  }
            break;
            case 3:
                  if(input(PIN_B1)){   
                    mode_SingleColor(3);
                    delay_us(200);
                    mode_SingleColor(2);
                    delay_us(200);
                     mode_SingleColor(3);
      
                  }
            break;
            case 4:
                  if(input(PIN_B1)){   
                    mode_SingleColor(4);
                    delay_us(200);
                    mode_SingleColor(5);
                    delay_us(200);
                    mode_SingleColor(4);
      
                  }
            break;
            case 5:
                if(input(PIN_B1)){   
                    mode_SingleColor(5);
                    delay_us(200);
                    mode_SingleColor(4);
                    delay_us(200);
                    mode_SingleColor(5);
      
                  }
            break;
            case 6:
            if(input(PIN_B1)){   
                    mode_SingleColor(6);
                    delay_us(200);
                    mode_SingleColor(7);
                    delay_us(200);
                    mode_SingleColor(6);
      
                  }
            break;
            case 7:
                if(input(PIN_B1)){   
                    mode_SingleColor(7);
                    delay_us(200);
                    mode_SingleColor(6);
                    delay_us(200);
                    mode_SingleColor(7);
      
                  }
            break;
            case 8:
                  if(input(PIN_B1)){
                     mode_SingleColor(x);
                     if (x >=7){x=0;}
                     x++;
                  }
            break;
            //default:
            //mode = 0;
        }
      
       
     // mode_SingleColor(mode);
     
     
   

    }   //while
}   //main
