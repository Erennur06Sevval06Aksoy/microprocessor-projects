#include <button_uygulama.h>

void main()
{
int sayac = 0;
   while(TRUE)
   {
      if(input(pin_b0)) //eðer pin 1 olduysa yani butona týklandýysa
      {
         if(sayac == 1){
            sayac = 0;
            output_high(pin_c2); //c2ye baðlý ledi yak
            output_low(pin_c3); //c3e baðlý ledi söndür
            delay_ms(250); //250milisaniye bekle
         }  
      
          else
         {
            sayac = 1;
            output_high(pin_c3); //c3e baðlý ledi yak
            output_low(pin_c2); //c2ye baðlý ledi söndür
            delay_ms(250); //250milisaniye bekle
         }
      }
   }
}
