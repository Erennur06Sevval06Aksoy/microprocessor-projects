#include <vize_ikili_yazdirma.h>
const int digit[10]={0X3F,0X6,0X5B,0X4F,0X66,0X6D,0X7D,0X7,0X7F,0X6F};
void main()
{
output_high(pin_d0);
output_high(pin_d1);
int sayi = 0;
int sayi2 = 0;
   while(TRUE)
   {
      output_low(pin_d1); //d0 pinini 0 yapar
      output_c(digit[sayi]);
      delay_ms(300);
      sayi++;
      if(sayi > 9){
      sayi = 0;
      output_low(pin_d0);
      output_high(pin_d1);
      output_c(digit[sayi2]);
      delay_ms(500);
      sayi2++;
      output_low(pin_d1);
      output_high(pin_d0);
      }
   }
}
