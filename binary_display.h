/*
 * led_blinker.h
 *
 *  Created on: Mar 6, 2015
 *      Author: gathu
 */

#ifndef LED_BLINKER_H_
#define LED_BLINKER_H_

void binary_display(char);

void  binary_display(char byte1){
	  int c;
	  int LED[4];

	  for (c = 0; c<4; c++)
	  {
	    LED[c]=((byte1>>c)& 0x01);
	 
	  }
                GPIOA->PDDR.bit_reg.bit11 = LED[0];//e1
		GPIOA->PDDR.bit_reg.bit28 = LED[1];//e2
		GPIOA->PDDR.bit_reg.bit29 = LED[2];//e3
		GPIOA->PDDR.bit_reg.bit10 = LED[3];//e4
}


#endif /* BINARY_DISPLAY_H_ */
