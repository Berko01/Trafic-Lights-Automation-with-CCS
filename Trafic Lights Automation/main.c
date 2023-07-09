#include <main.h>

void main()
{

   set_tris_b(0x00);
   output_b(0x00);
   

   
   
   while(TRUE)
   {
      output_high(pin_B0);
      output_high(pin_B5);
      delay_ms(5000);
      output_low(pin_B0);
      output_low(pin_B5);
      delay_ms(2000);
      output_high(pin_B1);
      output_high(pin_B4);
      delay_ms(3000);
      output_low(pin_B1);
      output_low(pin_B4);
      delay_ms(2000);
      output_high(pin_B2);
      output_high(pin_B3);
      delay_ms(5000);
      output_low(pin_B2);
      output_low(pin_B3);
      delay_ms(2000);
      
      
   }

}
