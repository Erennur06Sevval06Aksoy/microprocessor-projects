#include <vize_99a_yazdirma.h>
const int digit[10]={0X3F,0X6,0X5B,0X4F,0X66,0X6D,0X7D,0X7,0X7F,0X6F};
void main()
{
int sayi = 0;
int sayi2 = 0;
   while(TRUE)
   {
      for(int i=0 ; i<1 ; i++){
         output_low(pin_d0);
         output_c(digit[sayi]);
         delay_ms(50);
         output_high(pin_d0);
         
         output_low(pin_d1);
         output_c(digit[sayi2]);
         delay_ms(50);
         output_high(pin_d1);
      }
      sayi2++;
      if(sayi2 == 10){
         sayi2 = 0;
         sayi++;
      if(sayi == 10){
         sayi = 0;
         }
      }
   }
}
