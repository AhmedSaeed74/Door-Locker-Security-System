/*******************************************************************************
 *                                                                             *
 * [FILE NAME]:   main.c                                                       *
 *                                                                             *
 * [AUTHOR]:      Ahmed Saeed                                                  *
 *                                                                             *
 * [DATE]:        11/10/2022                                                   *
 *                                                                             *
 * [DESCRIPTION]: Implement system to measure the distance using               *
 *                Ultrasonic sensor HC-SR04 following its specifications.      *
 *                Measure the distance using the Ultrasonic sensor             *
 *                then show it on LCD.                                         *
 *                                                                             *
 *******************************************************************************/

#include "lcd.h"
#include "ultrasonic.h"
#include <avr/io.h> /* To use the SREG register */

int main(void)
{
	uint16 distance;

	/* Enable Global Interrupt I-Bit */
	SREG |= (1<<7);

	/* Initialize both the LCD and ULTRASONIC drivers */
	LCD_init();
	ULTRASONIC_init();

	/* Display this string "Distance =    cm" only once on LCD at the first row */
	LCD_displayString("Distance =    cm");

	while(1)
	{
		/* call ULTRASONIC_readDistance function to start the timing diagram then get the distance value */
		distance = ULTRASONIC_readDistance();

		/* Display the temperature value every time at same position */
		LCD_moveCursor(0,11);

		/* Display the distance value on LCD */
		LCD_intgerToString(distance);

		if(distance < 100)
		{
			/* In case the digital value is two or one digits print space in the next digit place */
			LCD_displayString(" ");
		}

	}
}
