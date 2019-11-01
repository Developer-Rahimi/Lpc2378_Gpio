 #include <lpc23xx.h>
 #include "GPIO.h"
 #define CCLK 12000000
#define PCLK (CCLK/4)
void delay_s (unsigned int x)
{
x=x*CCLK;
while(x--);
}

void delay_ms(unsigned int x)
{
  x=x*(CCLK/1000);
  while(x--);
}

void delay_us(unsigned int x)
{
x=x*(CCLK/1000000);
while(x--);
}
 int main(void){
 	SCS|=1;
	INIT_PIN(2,0);
	INIT_PIN(0,9);
	INIT_PIN(4,0);

 while(1){
  	SET_PIN(2,0);
	SET_PIN(0,9);
	SET_PIN(4,0);
  	delay_ms (300);
	CLR_PIN(2,0);
	CLR_PIN(0,9);
	CLR_PIN(4,0);
   	delay_ms (300);
	SET_PIN(2,0);
	SET_PIN(0,9);
	SET_PIN(4,0);
  	delay_ms (300);
	CLR_PIN(2,0);
	CLR_PIN(0,9);
	CLR_PIN(4,0);
   	delay_ms (300);

	SET_PIN(2,0);
	SET_PIN(0,9);
	SET_PIN(4,0);
  	delay_ms (100);
	CLR_PIN(2,0);
	CLR_PIN(0,9);
	CLR_PIN(4,0);
   	delay_ms (100);
	SET_PIN(2,0);
	SET_PIN(0,9);
	SET_PIN(4,0);
  	delay_ms (100);
	CLR_PIN(2,0);
	CLR_PIN(0,9);
	CLR_PIN(4,0);
   	delay_ms (200);
	 SET_PIN(2,0);
	SET_PIN(0,9);
	SET_PIN(4,0);
  	delay_ms (100);
	CLR_PIN(2,0);
	CLR_PIN(0,9);
	CLR_PIN(4,0);
   	delay_ms (300);
 }
 }
