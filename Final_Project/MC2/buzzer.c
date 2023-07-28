/*******************************************************************************
 *                                                                             *
 * [FILE NAME]:   buzzer.c                                                     *
 *                                                                             *
 * [AUTHOR]:      Ahmed Saeed                                                  *
 *                                                                             *
 * [DATE]:        05/11/2022                                                   *
 *                                                                             *
 * [DESCRIPTION]: Source file for the BUZZER driver                            *
 *                                                                             *
 *******************************************************************************/

#include "buzzer.h"
#include "gpio.h"

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

/*
 * Description :
 * Setup the direction for the buzzer pin as output pin through the
 * GPIO driver.
 * Turn off the buzzer through the GPIO.
 */
void Buzzer_init(void)
{
	/* Configure the direction for the buzzer pin */
	GPIO_setupPinDirection(BUZZER_PORT_ID,BUZZER_PIN_ID,PIN_OUTPUT);

	/* Buzzer is turned off at the beginning */
	GPIO_writePin(BUZZER_PORT_ID,BUZZER_PIN_ID,LOGIC_LOW);
}

/*
 * Description :
 * Function to enable the Buzzer through the GPIO.
 */
void Buzzer_on(void)
{
	/* Turn on the buzzer */
	GPIO_writePin(BUZZER_PORT_ID,BUZZER_PIN_ID,LOGIC_HIGH);
}

/*
 * Description :
 * Function to disable the Buzzer through the GPIO.
 */
void Buzzer_off(void)
{
	/* Turn off the buzzer */
	GPIO_writePin(BUZZER_PORT_ID,BUZZER_PIN_ID,LOGIC_LOW);
}

