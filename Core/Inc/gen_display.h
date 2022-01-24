/*
 * display.h
 *
 *  Created on: Jan 24, 2022
 *      Author: gokhan.tekinok
 */

#ifndef INC_GEN_DISPLAY_H_
#define INC_GEN_DISPLAY_H_


#include <stdint.h>

void display_all(void);

void MBI5026_Display(uint8_t _index);
void MBI5026_SendData(uint32_t data);
void SendData(void);
void MBI5026_Off(uint8_t _index);
void display_counter_up();
void display_counter_down(void);


void num_18(void);
void num_17(void);
void num_16(void);
void num_15(void);
void num_14(void);
void num_13(void);
void num_12(void);
void num_11(void);
void num_10(void);

void l_num_9(void);
void l_num_8(void);
void l_num_7(void);
void l_num_6(void);
void l_num_5(void);
void l_num_4(void);
void l_num_3(void);
void l_num_2(void);
void l_num_1(void);
void l_num_0(void);

void r_num_9(void);
void r_num_8(void);
void r_num_7(void);
void r_num_6(void);
void r_num_5(void);
void r_num_4(void);
void r_num_3(void);
void r_num_2(void);
void r_num_1(void);
void r_num_0(void);

void display_down(void);
void display_up(void);
void display_non_service(void);
void display_ns(void);
void display_busy(void);

#endif /* INC_GEN_DISPLAY_H_ */

