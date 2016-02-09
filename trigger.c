/*
 * trigger.c
 *
 * Created: 09.02.2016 20:32:35
 * Author: Falcon
 */

#include <io.h>
#include <delay.h>

#define IN  PIND.2
#define OUT PORTB.2
#define LED PORTB.5

void main(void){

unsigned int i;

DDRD.2=0;
DDRB.2=DDRB.5=1;

PORTD.2=OUT=0;

for (i=0; i<20;i++) {
 LED=1;
 delay_ms(100);
 LED=0;
 delay_ms(100);
}

while (!IN);

OUT=LED=1;
        
while (1);

}
