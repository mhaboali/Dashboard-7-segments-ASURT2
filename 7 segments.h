#pragma once
//Macros for 7 segments:
#define Segment_Port PORTD
#define Segment_DDR DDRD
#define A PD0
#define B PD1
#define C PD2
#define D PD3
#define E PD4
#define F PD5
#define G PD6
#define DP PD7
#define Switch1 PB0
#define Switch2 PB1
#define Switch3 PB2
#define Switch4 PB3
#define Switch5 PB4
#define Switch6 PB5

void Display_Digit(uint8_t NumberValue,uint8_t DecimalPoint);	//for enable pins according to number value
void init_segments();
