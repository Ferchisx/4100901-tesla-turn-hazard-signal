/*
 * keyboard.c
 *
 *  Created on: Sep 2, 2024
 *      Author: Felipe
 */

#include <keyboard.h>
#include <main.h>

uint8_t keyboard(uint16_t GPIO_Pin){
	uint8_t pressed = 0xFF;
	switch(GPIO_Pin){
	case COL1_Pin:
		HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL1_GPIO_Port, COL1_Pin)==0){
			pressed = '1';
			break;
		}
		HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL1_GPIO_Port,COL1_Pin)==0){
			pressed = '4';
			break;
		}
		HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL1_GPIO_Port,COL1_Pin)==0){
			pressed = '7';
			break;
		}
		HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL1_GPIO_Port,COL1_Pin)==0){
			pressed = '*';
			break;
		}
		break;
	case COL2_Pin:
		HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL2_GPIO_Port, COL2_Pin)==0){
			pressed = '2';
			break;
		}
		HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL2_GPIO_Port,COL2_Pin)==0){
			pressed = '5';
			break;
		}
		HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL2_GPIO_Port,COL2_Pin)==0){
			pressed = '8';
			break;
		}
		HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL2_GPIO_Port,COL2_Pin)==0){
			pressed = '0';
			break;
		}
		break;
	case COL3_Pin:
		HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL3_GPIO_Port, COL3_Pin)==0){
			pressed = '3';
			break;
		}
		HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL3_GPIO_Port,COL3_Pin)==0){
			pressed = '6';
			break;
		}
		HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL3_GPIO_Port,COL3_Pin)==0){
			pressed = '9';
			break;
		}
		HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL3_GPIO_Port,COL3_Pin)==0){
			pressed = '#';
			break;
		}
		break;
	case COL4_Pin:
		HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL4_GPIO_Port, COL4_Pin)==0){
			pressed = 'A';
			break;
		}
		HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL4_GPIO_Port,COL4_Pin)==0){
			pressed = 'B';
			break;
		}
		HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL4_GPIO_Port,COL4_Pin)==0){
			pressed = 'C';
			break;
		}
		HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_RESET);
		if(HAL_GPIO_ReadPin(COL4_GPIO_Port,COL4_Pin)==0){
			pressed = 'D';
			break;
		}
		break;
	default:
		break;
	}
	HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,GPIO_PIN_SET);
	return pressed;
}
