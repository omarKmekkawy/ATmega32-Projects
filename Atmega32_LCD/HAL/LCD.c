/*
 * LCD.c
 *
 *  Created on: Apr 4, 2020
 *      Author: black
 */

#include "LCD.h"
#include "../MCAL/GPIO.h"
#include <util/delay.h>

void LCD_init(void) {

	pinMode(DDRB, 0, OUTPUT); //RS
	pinMode(DDRB, 1, OUTPUT); //EN
	pinMode(DDRB, 2, OUTPUT); //RW

	pinMode(DDRD, 0, OUTPUT); //D0
	pinMode(DDRD, 1, OUTPUT); //D1
	pinMode(DDRD, 2, OUTPUT); //D2
	pinMode(DDRD, 3, OUTPUT); //D3
	pinMode(DDRD, 4, OUTPUT); //D4
	pinMode(DDRD, 5, OUTPUT); //D5
	pinMode(DDRD, 6, OUTPUT); //D6
	pinMode(DDRD, 7, OUTPUT); //D7

	_delay_ms(20);
	LCD_Send_CMD(0x0C); // Display On
	LCD_Send_CMD(0x01); // Clear Display
	LCD_Send_CMD(0x3C); // 16*2,8bit
}

void LCD_Print_String(char *str) {
	int i;
	for (i = 0; str[i] != 0; i++) /* send each char of string till the NULL */
	{
		LCD_Send_Data(str[i]); /* call LCD data write */
	}
}

void LCD_String_xy(char row, char pos, char *str) {
	if (row == 0 && pos < 16)
		LCD_Send_CMD((pos & 0x0F) | 0x80); /* Command of first row and required position<16 */
	else if (row == 1 && pos < 16)
		LCD_Send_CMD((pos & 0x0F) | 0xC0); /* Command of first row and required position<16 */
	LCD_Print_String(str);
}

void LCD_Clear(void) {
	LCD_Send_CMD(0x01);
}

void LCD_GotoHome(void) {
	LCD_Send_CMD(0x02);
}
void LCD_ShiftRight(void) {
	LCD_Send_CMD(0x1C);
}
void LCD_ShiftLeft(void) {
	LCD_Send_CMD(0x18);
}
void LCD_CursorOn(void) {
	LCD_Send_CMD(0x0E);
}
void LCD_CursorOff(void) {
	LCD_Send_CMD(0x0C);
}
void LCD_CursorBlink(void) {
	LCD_Send_CMD(0x0F);
}

void LCD_CursorRight(void) {
	LCD_Send_CMD(0x14);
}
void LCD_CursorLeft(void) {
	LCD_Send_CMD(0x10);
}

void LCD_Send_CMD(unsigned char Command) {
	digitalWrite(PORTB, 0, LOW); //RS
	digitalWrite(PORTB, 1, HIGH); //EN
	digitalWrite(PORTB, 2, LOW); //RW
	_delay_us(1);
	portWrite(PORTD, Command); // clear display
	_delay_ms(3);
	digitalWrite(PORTB, 1, LOW);
}

void LCD_Send_Data(unsigned char Data) {
	digitalWrite(PORTB, 0, HIGH); //RS
	digitalWrite(PORTB, 1, HIGH); //EN
	digitalWrite(PORTB, 2, LOW); //RW
	_delay_us(1);
	portWrite(PORTD, Data); // clear display
	_delay_ms(3);
	digitalWrite(PORTB, 1, LOW);
}
