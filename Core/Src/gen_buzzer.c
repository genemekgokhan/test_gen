/*
 * gen_buzzer.c
 *
 *  Created on: Jan 24, 2022
 *      Author: fatih.colak
 */




/* include user header file*/
#include "genemek.h"
#include "gen_button.h"
#include "gen_buzzer.h"
#include "gen_canbus.h"
#include "gen_flash.h"
#include "gen_struct.h"
/* include st header file*/
#include"gpio.h"
#include "tim.h"
#include "can.h"


/*user functions*/
void led_on(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
}
void led_off(void)
{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
}

/*buzzer active*/
void buzzer_on(void)
{

	TIM3->CCR1 = 60000;// buzzer ses ayarı
}

/*buzzer off*/
void buzzer_off(void)
{
	TIM3->CCR1 = 0;     // buzzer ses ayarı
}
