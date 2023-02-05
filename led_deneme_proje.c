#include <led_deneme_proje.h>
#define LCD_ENABLE_PIN PIN_B2
#define LCD_RS_PIN PIN_B0
#define LCD_RW_PIN PIN_B1
#define LCD_DATA4 PIN_B3
#define LCD_DATA5 PIN_B4
#define LCD_DATA6 PIN_B5
#define LCD_DATA7 PIN_B6

#include <lcd.c>

void main()
{

   lcd_init();
   printf(lcd_putc,"Merhaba");
   unsigned int32 sayi=0;
   while(TRUE)
   {
      lcd_gotoxy(1,2);
      sayi++;
      delay_ms(50);
      printf(lcd_putc,"Sayi = %lu",sayi);//lu unsigned olduðu için
   }

}
