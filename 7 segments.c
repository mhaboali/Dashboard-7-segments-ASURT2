#include "DashBoard.h"

void init_segments()
{
	//initialize 7 segment pins as output and off:
	Segment_DDR=0xff;
	Segment_Port=0x00;
	//initialize switches as output and off:
	sbi(DDRB,S1);	cbi(PORTB,S1);
	sbi(DDRB,S2);	cbi(PORTB,S2);
	sbi(DDRB,S3);	cbi(PORTB,S3);
	sbi(DDRB,S4);	cbi(PORTB,S4);
	sbi(DDRB,S5);	cbi(PORTB,S5);
	sbi(DDRB,S6);	cbi(PORTB,S6);
	
}
void Display_Digit(uint8_t NumberValue,uint8_t DecimalPoint)
{
	 if(n<10)
	 {
		 switch (n)
		 {
			 case 0:
			 sbi(Segment_Port,A);	sbi(Segment_Port,B);
			 sbi(Segment_Port,C);	sbi(Segment_Port,D);
			 sbi(Segment_Port,E);	sbi(Segment_Port,F);
			 break;

			 case 1:
			 sbi(Segment_Port,B);	sbi(Segment_Port,C);
			 break;

			 case 2:
			 sbi(Segment_Port,A);	sbi(Segment_Port,B);
			 sbi(Segment_Port,E);	sbi(Segment_Port,G);
			 sbi(Segment_Port,D);
			 break;

			 case 3:
			 sbi(Segment_Port,A);	sbi(Segment_Port,B);
			 sbi(Segment_Port,C);	sbi(Segment_Port,G);
			 sbi(Segment_Port,D);
			 break;

			 case 4:
			 sbi(Segment_Port,F);	sbi(Segment_Port,G);
			 sbi(Segment_Port,C);	sbi(Segment_Port,B);
			 break;

			 case 5:
			 sbi(Segment_Port,A);	sbi(Segment_Port,F);
			 sbi(Segment_Port,G);	sbi(Segment_Port,C);
			 sbi(Segment_Port,D);
			 break;

			 case 6:
			 sbi(Segment_Port,A);	sbi(Segment_Port,F);
			 sbi(Segment_Port,D);	sbi(Segment_Port,G);
			 sbi(Segment_Port,C);	sbi(Segment_Port,E);
			 break;

			 case 7:
			 sbi(Segment_Port,A);	sbi(Segment_Port,B);	
			 sbi(Segment_Port,C);
			 break;

			 case 8:
			 sbi(Segment_Port,A);	sbi(Segment_Port,B);
			 sbi(Segment_Port,C);	sbi(Segment_Port,D);
			 sbi(Segment_Port,E);	sbi(Segment_Port,F);
			 sbi(Segment_Port,G);
			 break;

			 case 9:
			 sbi(Segment_Port,A);	sbi(Segment_Port,B);
			 sbi(Segment_Port,C);	sbi(Segment_Port,D);
			 sbi(Segment_Port,F);	sbi(Segment_Port,G);
			 break;
		 }
		 if(dp)
		 {
			 //if decimal point should be displayed

			 sbi(Segment_Port,DP);
		 }
	 }
	 else
	 {
		 //This symbol on display tells that n was greater than 9
		 //so display can't handle it

		 sbi(Segment_Port,A);	sbi(Segment_Port,B);
		 sbi(Segment_Port,C);	sbi(Segment_Port,E);
		 sbi(Segment_Port,F);	sbi(Segment_Port,DP);
	 }
}
