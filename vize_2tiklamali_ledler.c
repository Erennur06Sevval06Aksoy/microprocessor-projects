#include <vize_2tiklamali_ledler.h>

void main()
{
int sayac = 0;
   while(TRUE)
   {
      if(input(pin_b0)){
         if(sayac == 1){
            sayac = 0;
            output_high(pin_c2);
            output_low(pin_c3);
            delay_ms(250);
         }
         else{
            sayac++;
            output_high(pin_c3);
            output_low(pin_c2);
            delay_ms(50);
         }
      }
   }

}
