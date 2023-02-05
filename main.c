#include <main.h>

const int digit[10] = {0X3F,0X6,0X5B,0X4F,0X66,0X6D,0X7D,0X7,0X7F,0X6F};
void main()
{
int sayi = 0;
   while(TRUE)
   {
      output_b(digit[sayi]);
      sayi++;
      delay_ms(500);
      if(sayi > 9)
      sayi = 0;
   }

}
