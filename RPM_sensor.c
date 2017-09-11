#include "DashBoard.h"
void Print_RPM(uint16_t rpmVal)
{
	uint16_t temp,counter;
	//rpmVal=rpmVal/100;		//3ashan nt3aml m3 raqmain bs bdl 4 arqam
	//display khant el 3asharat:
	
	if(rpmVal>9)
	{
		temp=rpmVal/10;			//to have khant el 3asharat
		rpmVal=rpmVal%10;		//3ashan nakhod el reminder
		sbi(PORTB,Switch5);		//to open segment's switch
		Display_Digit(temp,0);	//display el raqm elly f khant el 3asharat
		_delay_ms(1);			//for smoothing processing
	}
	//display khant el a7aad:

	sbi(PORTB,Switch6);		//to open segment's switch
	Display_Digit(rpmVal,0);	//display el raqm elly f khant el a7aad
	_delay_ms(1);			//for smoothing processing
}
