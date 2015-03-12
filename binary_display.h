/*
 * led_blinker.h
 *
 *  Created on: Mar 6, 2015
 *      Author: gathu
 */

#ifndef LED_BLINKER_H_
#define LED_BLINKER_H_
#include <stdio.h>
void binary_display(char);
void  binary_display(char byte1){
	  int n, c, k;
	  int LED[4];

	 n = byte1;
	  for (c = 3; c >= 0; c--)
	  {
	    k = n >> c;

	    if (k & 1)
	    	LED[c] = 1;
	    else
	    	LED[c] = 0;
	  }
                GPIOA->PDDR.bit_reg.bit11 = LED[0];
		GPIOA->PDDR.bit_reg.bit28 = LED[1];
		GPIOA->PDDR.bit_reg.bit29 = LED[2];
		GPIOA->PDDR.bit_reg.bit10 = LED[3];
}


#endif /* BINARY_DISPLAY_H_ */
