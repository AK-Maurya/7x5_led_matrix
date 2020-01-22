/*
* Author: Jitender Kumar
*/
/************************** 5x7 LED Dot Matrix **********************/
/*
             14 13 12 11 10  9  8
              |  |  |  |  |  |  |
            |---------------------|
            |                     |
            |                     |
            |                     |
            |                     |
            |                     |
            |                     |
            |                     |
            |                     |
            |                     |
            |---------------------|
                  HB55701ASR
              |  |  |  |  |  |  |
              1  2  3  4  5  6  7

  Note : Pin no 4 and 11 shorted
       Pin no 5 and 12 shorted
*/

#include <5x7_led_matrix.h>

/*
                {1,2,3,4,5},
                {6,7,8,9,10},
                {11,12,13,14,15},
                {16,17,18,19,20},
                {21,22,23,24,25},
                {26,27,28,29,30},
                {31,32,33,34,35}
*/

int x[7][5] = { 
  {1, 1, 1, 1, 1},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {1, 0, 1, 0, 0},
  {1, 0, 1, 0, 0},
  {0, 1, 1, 0, 0}
};

int y[7][5] = { 
  {1, 1, 1, 1, 1},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0},
  {0, 0, 1, 0, 0}
};

int row[7] = {9, 11, 8, 5, 12, 7, 2};
int col[5] = {13, 3, 4, 10, 6};

char msg[] = {'J','I','T','U'};

void setup()
{
  Serial.begin(9600);
  for (int i = 2; i < 14; i++)
  {
    pinMode(i, OUTPUT);
  }
  Serial.println("Setup Completed");
  glow_all();
  Serial.println("glow all");
  delay(1000);
  off_all();
  Serial.println("off all");
  delay(2000);
}

void loop()
{
  for(int i=0; i<4; i++)
  {
    disp_char_scroll(msg[i]);
  }
}
