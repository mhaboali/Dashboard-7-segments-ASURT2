#include "DashBoard.h"

void Print_ActualSpeed(uint16_t IRsensor_Val)
{
	uint16_t temp,counter;
	//IRsensor_Val=IRsensor_Val/100;		//3ashan nt3aml m3 raqmain bs bdl 4 arqam
	//display khant el 3asharat:
	
	if(IRsensor_Val>9)
	{
		temp=IRsensor_Val/10;			//to have khant el 3asharat
		IRsensor_Val=IRsensor_Val%10;		//3ashan nakhod el reminder
		sbi(PORTB,Switch1);		//to open segment's switch
		Display_Digit(temp,0);	//display el raqm elly f khant el 3asharat
		_delay_ms(1);			//for smoothing processing
	}
	//display khant el a7aad:

	sbi(PORTB,Switch2);		//to open segment's switch
	Display_Digit(IRsensor_Val,0);	//display el raqm elly f khant el a7aad
	_delay_ms(1);			//for smoothing processing
}
void Print_AverageSpeed(uint16_t AvgSpeed_Val)
{
	uint16_t temp,counter;
	//AvgSpeed_Val=AvgSpeed_Val/100;		//3ashan nt3aml m3 raqmain bs bdl 4 arqam
	//display khant el 3asharat:
	
	if(AvgSpeed_Val>9)
	{
		temp=AvgSpeed_Val/10;			//to have khant el 3asharat
		AvgSpeed_Val=AvgSpeed_Val%10;		//3ashan nakhod el reminder
		sbi(PORTB,Switch3);		//to open segment's switch
		Display_Digit(temp,0);	//display el raqm elly f khant el 3asharat
		_delay_ms(1);			//for smoothing processing
	}
	//display khant el a7aad:

	sbi(PORTB,Switch4);		//to open segment's switch
	Display_Digit(AvgSpeed_Val,0);	//display el raqm elly f khant el a7aad
	_delay_ms(1);			//for smoothing processing
}