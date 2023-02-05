#include <final_sifreli_led.h>
#define LCD_ENABLE_PIN PIN_B2
#define LCD_RS_PIN PIN_B0
#define LCD_RW_PIN PIN_B1
#define LCD_DATA4 PIN_B3
#define LCD_DATA5 PIN_B4
#define LCD_DATA6 PIN_B5
#define LCD_DATA7 PIN_B6

#include <lcd.c>


int16 tus = 0;
int kontrol = 0;
int16 sifre = 1234;
int sayac = 0;

void main()
{
   lcd_init();
   
   set_tris_d(0x456);
   
   
   lcd_gotoxy(1,1);
   printf(lcd_putc, "\fSifreyi Girip");

   lcd_gotoxy(1,2);
   printf(lcd_putc, "# tusuna basin");
   delay_ms(1000);
       
   printf(lcd_putc, "\f");
   lcd_gotoxy(1,1);
   

   while(TRUE)
   {
      output_high(pin_d3); 
      if(input(pin_d0))
      {
         tus = (tus * 10) + 1;
         delay_ms(500);
      }
      
      if(input(pin_d1))
      {
         tus = (tus * 10) + 2;
         delay_ms(500);
      }
         
      if(input(pin_d2))
      {
         tus = (tus * 10) +3;
         delay_ms(500);
      }
                 
      output_low(pin_d3);
      output_high(pin_d4); 
      
      if(input(pin_d0))
      {
         tus = (tus * 10) + 4;
         delay_ms(500);
      }
         
      if(input(pin_d1))
      {
         tus = (tus * 10) + 5;
         delay_ms(500);
      }
         
      if(input(pin_d2))
      {
         tus = (tus * 10) + 6;
         delay_ms(500);
      }
                 
      output_low(pin_d4);
      output_high(pin_d5); 
      
      if(input(pin_d0))
      {
         tus = (tus * 10) + 7;
         delay_ms(500);
      }
         
      if(input(pin_d1))
      {
         tus = (tus * 10) + 8;
         delay_ms(500);
      }
         
      if(input(pin_d2))
      {
         tus = (tus * 10) + 9;
         delay_ms(500);
      }
                  
      output_low(pin_d5);
      output_high(pin_d6); 
    
      if(input(pin_d1))
      {
         tus = 0;
         delay_ms(500);
      }
      
      if(input(pin_d2))
      {
         kontrol = 1;
         delay_ms(500);
      }
                 
      output_low(pin_d6);
      lcd_gotoxy(1,1); 
          
      printf(lcd_putc, "%ld ", tus);
      
      if(kontrol == 1)
      {
         if(sifre == tus)
         {
            output_high(pin_c0);
            delay_ms(1000);
            output_low(pin_c0);
            delay_ms(1000);
            printf(lcd_putc, "\f");                  
         }
         else
         {
            sayac++;  
            if(sayac == 3){
               lcd_gotoxy(1,1);
               printf(lcd_putc, "\f  Bloke");
               delay_ms(1000);
               
               lcd_gotoxy(1,1);
               printf(lcd_putc, "\f  4321");
               delay_ms(1000);
   
               printf(lcd_putc, "\f");
               lcd_gotoxy(1,1);
            }
         }
         
         kontrol = 0;
         tus = 0;
      }
      
   }

}
