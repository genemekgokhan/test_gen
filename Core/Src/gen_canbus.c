/*
 * gen_canbus.c
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

void gen_canbus_config(void)
{
	CAN_HandleTypeDef hcan;

	CAN_TxHeaderTypeDef pTxHeader;




	CAN_FilterTypeDef sFilterConfig;



	pTxHeader.DLC=8; //give message size of 1 byte
	 	pTxHeader.IDE=CAN_ID_STD; //set identifier to standard
	 	pTxHeader.RTR=CAN_RTR_DATA; //set data type to remote transmission request?
	 	pTxHeader.StdId=0x244; //define a standard identifier, used for message identification by filters (switch this for the other microcontroller)
	 	pTxHeader.ExtId=0x02; // min data ile max data arasında olmalı
	 	pTxHeader.TransmitGlobalTime = DISABLE;

	 	//filter one (stack light blink)
	 	sFilterConfig.FilterFIFOAssignment=CAN_FILTER_FIFO0; //set fifo assignment
	 	sFilterConfig.FilterIdHigh=0; //the ID that the filter looks for (switch this for the other microcontroller)
	 	sFilterConfig.FilterIdLow=0;
	 	sFilterConfig.FilterMaskIdHigh=0;
	 	sFilterConfig.FilterMaskIdLow=0;
	 	sFilterConfig.FilterScale=CAN_FILTERSCALE_32BIT; //set filter scale
	 	sFilterConfig.FilterActivation=ENABLE;

	 	HAL_CAN_ConfigFilter(&hcan, &sFilterConfig); //configure CAN filter

	//     GEN_canbus_config();



}
