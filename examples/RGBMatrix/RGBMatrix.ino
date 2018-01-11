#include "RGBMatrix.h"
/****************************************************
Main Functions zone
****************************************************/
void setup()
{
  RGBMatrixInit();
}
void loop()
{
  unsigned int i = 1000;
  char j = 0;
  DispShowChar('A',255,233,56,0);
  delay(i);
  DispShowChar('B',0,255,0,0);
  delay(i);
  DispShowChar('C',0,0,255,0);
  delay(i);
  DispShowChar('D',255,255,255,0);
  delay(i);
  DispShowChar('E',0,255,255,0);
  delay(i);
  DispShowChar('F',255,255,0,0);
  delay(i);
  DispShowChar('G',255,0,255,0);
  delay(i);
  DispShowChar('H',255,127,0,0);
  delay(i);
  DispShowChar('I',127,255,0,0);
  delay(i);
  DispShowChar('J',127,0,255,0);
  delay(i);
  DispShowChar('K',255,127,127,0);
  delay(i);
  DispShowChar('L',127,127,255,0);
  delay(i);
  DispShowChar('M',127,255,127,0);
  delay(i);
  DispShowChar('N',255,127,255,0);
  delay(i);
  DispShowChar('O',200,120,120,0);
  delay(i);
    DispShowChar('P',120,200,120,0);
  delay(i);
  DispShowChar('Q',200,120,120,0);
  delay(i);
  DispShowChar('R',120,120,200,0);
  delay(i);
  DispShowChar('S',120,120,120,0);
  delay(i);
  DispShowChar('T',127,0,100,0);
  delay(i);
  DispShowChar('U',255,0,200,0);
  delay(i);
   DispShowChar('V',200,255,120,0);
  delay(i);
  DispShowChar('W',120,200,200,0);
  delay(i);
  DispShowChar('X',200,200,120,0);
  delay(i);
  DispShowChar('Y',127,0,180,0);
  delay(i);
  DispShowChar('Z',0,1800,200,0);
  delay(i);
  DispShowChar('a',255,0,0,0);
  delay(i);
  DispShowChar('b',0,255,0,0);
  delay(i);
  DispShowChar('c',0,0,255,0);
  delay(i);
  DispShowChar('d',255,255,255,0);
  delay(i);
  DispShowChar('e',0,255,255,0);
  delay(i);
  DispShowChar('f',255,255,0,0);
  delay(i);
  DispShowChar('g',255,0,255,0);
  delay(i);
  DispShowChar('h',255,127,0,0);
  delay(i);
  DispShowChar('i',127,255,0,0);
  delay(i);
  DispShowChar('j',127,0,255,0);
  delay(i);
  DispShowChar('k',255,127,127,0);
  delay(i);
  DispShowChar('l',127,127,255,0);
  delay(i);
  DispShowChar('m',127,255,127,0);
  delay(i);
  DispShowChar('n',255,127,255,0);
  delay(i);
  DispShowChar('0',200,120,120,0);
  delay(i);
  DispShowChar('p',120,200,120,0);
  delay(i);
  DispShowChar('q',200,120,120,0);
  delay(i);
  DispShowChar('r',120,120,200,0);
  delay(i);
  DispShowChar('s',120,120,120,0);
  delay(i);
  DispShowChar('t',127,0,100,0);
  delay(i);
  DispShowChar('u',255,0,200,0);
  delay(i);
   DispShowChar('v',200,255,120,0);
  delay(i);
  DispShowChar('w',120,200,200,0);
  delay(i);
  DispShowChar('x',200,200,120,0);
  delay(i);
  DispShowChar('y',127,0,180,0);
  delay(i);
  DispShowChar('z',0,180,200,0);
  delay(i);
  DispShowChar('0',200,120,120,0);
  delay(i);
  DispShowChar('1',120,120,200,0);
  delay(i);
  DispShowChar('2',120,120,120,0);
  delay(i);
  DispShowChar('3',127,0,100,0);
  delay(i);
  DispShowChar('4',255,0,200,0);
  delay(i);
   DispShowChar('5',200,255,120,0);
  delay(i);
  DispShowChar('6',120,200,200,0);
  delay(i);
  DispShowChar('7',200,200,120,0);
  delay(i);
  DispShowChar('8',127,0,180,0);
  delay(i);
  DispShowChar('9',0,180,200,0);
  delay(i);


  DispShowPic(0);
  delay(i);
  DispShowPic(1);
  delay(i);
  DispShowPic(2);
  delay(i);
  DispShowPic(3);
  delay(i);


  for(j = -7;j < 7;j++)
  {
    DispShowChar('I',255,255,0,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('t',0,255,255,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('e',255,0,255,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('a',255,255,255,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('d',255,255,255,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('s',255,255,255,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('t',255,255,255,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('u',255,255,255,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('d',255,255,255,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('i',255,255,255,j);
    delay(i);
  }
  for(j = -7;j < 7;j++)
  {
    DispShowChar('o',205,186,145,j);
    delay(i);
  }

  DispShowPic(0);
  delay(i);
  DispShowPic(1);
  delay(i);
  DispShowPic(2);
  delay(i);
  DispShowPic(3);
  delay(i);
  DispShowPic(3);
  delay(i);
  DispShowPic(4);
  delay(i);
  DispShowPic(5);
  delay(i);

}





