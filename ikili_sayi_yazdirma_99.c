#include <ikili_sayi_yazdirma_99.h>

void main()
{
int birler,onlar;
unsigned int32 sayi = 0;
   while(TRUE)
   { 
       sayi++;
       birler=sayi%10;
       onlar=(sayi%100)/10;
       
       output_b(0x10 | birler);
       delay_ms(10);
       output_b(0x00 | onlar);
       delay_ms(10);
   }
}
