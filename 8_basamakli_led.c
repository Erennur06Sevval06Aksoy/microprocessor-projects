#include <8_basamakli_led.h>

void main()
{
unsigned int32 sayi = 0;
int birler,onlar,yuzler,binler,onbin,yuzbin,milyon,onmilyon;

   while(TRUE)
   {
      sayi++;
      birler=sayi%10;
      onlar=(sayi%100)/10;
      yuzler=(sayi%1000)/100;
      binler=(sayi%10000)/1000;
      onbin=(sayi%100000)/10000;
      yuzbin=(sayi%1000000)/100000;
      milyon=(sayi%10000000)/1000000;
      onmilyon=(sayi%100000000)/10000000;
      
      output_b(0x70 | birler); 
      delay_ms(5);
      output_b(0x60 | onlar);
      delay_ms(5);
      output_b(0x50 | yuzler);
      delay_ms(5);
      output_b(0x40 | binler);
      delay_ms(5);
      output_b(0x30 | onbin);
      delay_ms(5);
      output_b(0x20 | yuzbin);
      delay_ms(5);
      output_b(0x10 | milyon);
      delay_ms(5);
      output_b(0x00 | onmilyon);
      delay_ms(5);
   }
}

