/*
 * LCD.h
 *
 *  Created on: Apr 4, 2020
 *      Author: black
 */

#ifndef HAL_LCD_H_
#define HAL_LCD_H_

void LCD_init(void);
void LCD_Send_CMD(unsigned char Command);
void LCD_Send_Data(unsigned char Data);
void LCD_Clear(void);

void LCD_CursorOn(void);
void LCD_CursorOff(void);
void LCD_CursorBlink(void);

void LCD_CursorRight(void);
void LCD_CursorLeft(void);

void LCD_GotoHome(void);
void LCD_ShiftRight(void);
void LCD_ShiftLeft(void);
void LCD_Print_String(char *str);
void LCD_String_xy (char row, char pos, char *str);
#endif /* HAL_LCD_H_ */
