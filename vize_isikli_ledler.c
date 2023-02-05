#include <vize_isikli_ledler.h>

void main()
{

   while(TRUE)
   {
   /*  output_high(pin_c3);
      output_low(pin_c2);
      delay_ms(50);
      if(input(pin_b0))
      output_high(pin_c2);
      output_low(pin_c3);
      delay_ms(250);*/

      if(input(pin_b0))
      output_high(pin_c2);
      output_low(pin_c3);
      delay_ms(250);
      if(input(pin_b0))
      output_high(pin_c3);
      output_low(pin_c2);
      delay_ms(250);
   }

}
