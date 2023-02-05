#include <ikiliyazdirma.h>
const int digit[10] = {0X3F,0X6,0X5B,0X4F,0X66,0X6D,0X7D,0X7,0X7F,0X6F};
void main()
{

   while(TRUE)
   {
      output_c(digit[0]);
      output_high(pin_d0);
      output_low(pin_d1);
      delay_ms(200);
      output_c(digit[2]);
      output_high(pin_d1);
      output_low(pin_d0);
      delay_ms(200);
   }

}
