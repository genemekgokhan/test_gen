/*
 * gen_struct.h
 *
 *  Created on: Jan 24, 2022
 *      Author: fatih.colak
 */

#ifndef INC_GEN_STRUCT_H_
#define INC_GEN_STRUCT_H_

#include <stdint.h>

typedef struct
{
	/* her bir task için değişkene ihtiyaç var */
	uint32_t last_time_button   ;
	uint32_t last_time_canbus	;
	uint32_t last_time_flash    ;
	uint32_t last_time_display  ;

	/*her bir süre
	uint32_t BUTTON_INTERVAL	;
	uint32_t CANBUS_INTERVAL	;
	uint32_t FLASH_INTERVAL		;*/

	uint32_t current_time		;

	/*systick timer test için*/
	uint32_t count1				;
	uint32_t count2				;
	uint32_t count3				;

	uint32_t menu_count			;

	/*canbus değişkenler*/
	uint32_t pTxMailbox;
//	uint8_t can_rx_buffer[8] ;//= {0,0,0,0,0,0,0,0};
//	uint8_t can_tx_buffer[8] ;//= {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07};


}gen_struct;


#endif /* INC_GEN_STRUCT_H_ */
