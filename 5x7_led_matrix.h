#include <Arduino.h>

//#define debug

/*
    This function make all the LEDs to glow.
*/
void glow_all();

/*
    This function make all the LEDs to off.
*/
void off_all();

/*
    Pass the index no of the corresponding led from led matrix to make it glow. 
    The function takes integer no as an argument and will make that Led to glow.
 */
void glow_led(int ledNumber);

/*
    Pass the index no of the corresponding led from led matrix to make it off. 
    The function takes integer no as an argument and will make that Led off.
*/
void off_led(int ledNumber);

/*

*/
void disp_char(char c);

/*

*/
void disp_custom_char(int *arr, int size);

/*

*/
void print_pattern(int *arr, int size);

void glow_led_scroll(int);
void off_led_scroll(int);

//void glow_matrix_scroll(int x[7][5]);
void glow_matrix_scroll(char);
void disp_char_scroll(char c);
