/*
 * LM35_Init.h
 *
 *  Created on: Sep 5, 2023
 *      Author: Abdelrahman
 */

#ifndef HAL_LM35_LM35_INIT_H_
#define HAL_LM35_LM35_INIT_H_

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/ADC/ADC_Interface.h"

#define LM35_PIN	ADC_CHANNEL_0

void HLM35_VoidLM35Init(void);
u16  HLM35_u16LM35Read(void);


#endif /* HAL_LM35_LM35_INIT_H_ */
