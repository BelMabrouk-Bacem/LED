#include <led.h>

void main()
{//set_tris_B(0x01);
//set_tris_A(0x00);
/*output_A(0x00);
OUTPUT_HIGH(PIN_A3);
OUTPUT_LOW(PIN_A2);*/
   while(true)
   { OUTPUT_HIGH(PIN_A3);delay_ms(100);OUTPUT_LOW(PIN_A3);delay_ms(100);
     OUTPUT_LOW(PIN_A2);
    if ( input(PIN_A0)==1)
    {
     OUTPUT_LOW(PIN_A3);//output_A(0x04);
    // bit_set(PORTA,0);
      delay_ms(1000);
    }/*else{ 
       output_A(0x00);
       delay_ms(1000);
       OUTPUT_HIGH(PIN_A3);
       OUTPUT_LOW(PIN_A2);
    }*/
    if ( input(PIN_A1)==1)
    {
    OUTPUT_HIGH(PIN_A2);// output_A(0x05);
    // bit_set(PORTA,0);
      delay_ms(1000);
    }/*else{ 
       output_A(0x00);
       delay_ms(1000);
       OUTPUT_HIGH(PIN_A3);
       OUTPUT_LOW(PIN_A2);
    }*/
   }
   }  


