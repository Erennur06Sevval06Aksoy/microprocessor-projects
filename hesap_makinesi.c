#include <hesap_makinesi.h>
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
   printf(lcd_putc,"Merhaba...");
   char tus;
   while(TRUE)
   {
      lcd_gotoxy(1,2);
      
      output_high(pin_c0);
      if(input(pin_d0))
         tus="7";
      if(input(pin_d1))
         tus="8";
      if(input(pin_d2))
         tus="9";
      if(input(pin_d3))
         tus="B";
      
      output_low(pin_c0);
      output_high(pin_c1);
       if(input(pin_d0))
         tus="4";
      if(input(pin_d1))
         tus="5";
      if(input(pin_d2))
         tus="6";
      if(input(pin_d3))
         tus="Ç";
         
      output_low(pin_c1);
      output_high(pin_c2);
       if(input(pin_d0))
         tus="1";
      if(input(pin_d1))
         tus="2";
      if(input(pin_d2))
         tus="3";
      if(input(pin_d3))
         tus="F";
         
      output_low(pin_c2);
      output_high(pin_c3);
       if(input(pin_d0))
         tus="S";
      if(input(pin_d1))
         tus="0";
      if(input(pin_d2))
         tus="E";
      if(input(pin_d3))
         tus="T";
         
       output_low(pin_c3);
   }

}
