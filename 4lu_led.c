#include <4lu_led.h>

void main()
{
int birler,onlar,yuzler,binler;
unsigned int32 sayi;
   while(TRUE)
   {
      birler=sayi%10;
      onlar=(sayi%100)/10;
      yuzler=(sayi%1000)/100;
      binler=(sayi%10000)/1000;
      
      output_b(0x30 | birler);
      delay_ms(10);
      output_b(0x20 | onlar);
      delay_ms(10);
      output_b(0x10 | yuzler);
      delay_ms(10);
      output_b(0x00 | binler);
      delay_ms(10);
   }

}
