#ifndef _RGBMATRIX_H_
#define _RGBMATRIX_H_

#include "Arduino.h"

/********************************************************
Name:RGBMatrixInit
Function:initialize RGBMatrixInit
Parameter:none
********************************************************/
void RGBMatrixInit();

/********************************************************
Name:DispShowChar
Function:Display a English latter in LED matrix
Parameter:chr :the latter want to show
          R: the value of RED.   Range:RED 0~255
          G: the value of GREEN. Range:RED 0~255
          B: the value of BLUE.  Range:RED 0~255
          bias: the bias of a letter in LED Matrix.Range -7~7
********************************************************/
void DispShowChar(char chr,unsigned char R,unsigned char G,unsigned char B,char bias);


/********************************************************
Name:DispShowColor
Function:Fill a color in LED matrix
Parameter:R: the value of RED.   Range:RED 0~255
          G: the value of GREEN. Range:RED 0~255
          B: the value of BLUE.  Range:RED 0~255
********************************************************/
void DispShowColor(unsigned char R,unsigned char G,unsigned char B);

/********************************************************
Name:DispShowColor
Function:Fill a color in LED matrix
Parameter:R: the value of RED.   Range:RED 0~255
          G: the value of GREEN. Range:RED 0~255
          B: the value of BLUE.  Range:RED 0~255
********************************************************/
void DispShowColor(unsigned char R,unsigned char G,unsigned char B);

/********************************************************
Name:DispShowPic
Function:Fill a picture in LED matrix from FLASH
Parameter:Index:the index of picture in Flash.
********************************************************/
void DispShowPic(unsigned char Index);



/*The base Function*/
void _IO_Init();
void _LED_Init();
void _TC2_Init();
/****************************************************
the timer2 operate functions zone
****************************************************/
ISR(TIMER2_OVF_vect);          //Timer2  Service 

/****************************************************
the LED Hardware operate functions zone
****************************************************/
void LED_SDA(unsigned char temp);
void LED_SCL(unsigned char temp);
void LED_RST(unsigned char temp);
void LED_LAT(unsigned char temp);
void LED_SLB(unsigned char temp);
/***************************************************
the LED datas operate functions zone
***************************************************/
void SetGamma();
void run(unsigned char k);
void open_line(unsigned char x);
void LED_Delay(unsigned char i);
#endif
