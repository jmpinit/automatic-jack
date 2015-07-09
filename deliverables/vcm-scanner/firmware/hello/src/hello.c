#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS 1000

int main( void )
{
  PORTC.DIRSET = 1 << 2;
  
  while(1) {
    PORTC.OUTSET = 1 << 2; // set the output high.
    _delay_ms(BLINK_DELAY_MS);
    PORTC.OUTCLR = 1 << 2; // set the output low.
    _delay_ms(BLINK_DELAY_MS);
  }
}