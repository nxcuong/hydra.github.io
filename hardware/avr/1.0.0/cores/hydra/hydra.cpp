#include "hydra.h"
//==========================================initiation of Hydra board =========================
void hydraInitDefault() {
#if defined(HYDRA50) 
	pinMode(stAuxRelay, INPUT); //status of axiliary relay
	pinMode(CAN1INT, INPUT); //CAN1 interrupt
	pinMode(CAN2INT, INPUT); //CAN2 interrupt
	//status of digital output channels from 0 -15
	pinMode(stDO0, INPUT);
	pinMode(stDO2, INPUT);
	pinMode(stDO4, INPUT);
	pinMode(stDO6, INPUT);
	pinMode(stDO8, INPUT);
	pinMode(stD10, INPUT);
	pinMode(stD12, INPUT);
	pinMode(stD14, INPUT);
	//status of PWM channels 0 - 9
	pinMode(stPWM0, INPUT);
	pinMode(stPWM1, INPUT);
	pinMode(stPWM2, INPUT);
	pinMode(stPWM3, INPUT);
	pinMode(stPWM4, INPUT);
	pinMode(stPWM5, INPUT);
	pinMode(stPWM6, INPUT);
	pinMode(stPWM7, INPUT);
	pinMode(stPWM8, INPUT);
	pinMode(stPWM9, INPUT);
	//current sense of 8DO channels from 16 to 23, analog input to A0-A7
	pinMode(iSenseDO16, INPUT);
	pinMode(iSenseDO17, INPUT);
	pinMode(iSenseDO18, INPUT);
	pinMode(iSenseDO19, INPUT);
	pinMode(iSenseDO20, INPUT);
	pinMode(iSenseDO21, INPUT);
	pinMode(iSenseDO22, INPUT);
	pinMode(iSenseDO23, INPUT);
	//===================================================================
	//digital output config
	pinMode(mainSwitch, OUTPUT);//main switch mosfet
	pinMode(IOCS0, OUTPUT);
	pinMode(IOCS1, OUTPUT);
	pinMode(IOCS2, OUTPUT);
	pinMode(ADCCS1, OUTPUT);
	pinMode(ADCCS2, OUTPUT);
	pinMode(CANCS1, OUTPUT);
	pinMode(CANCS2, OUTPUT);
	//gate control of 10 channels pwm fet
	pinMode(gatePWM0, OUTPUT);
	pinMode(gatePWM1, OUTPUT);
	pinMode(gatePWM2, OUTPUT);
	pinMode(gatePWM3, OUTPUT);
	pinMode(gatePWM4, OUTPUT);
	pinMode(gatePWM5, OUTPUT);
	pinMode(gatePWM6, OUTPUT);
	pinMode(gatePWM7, OUTPUT);
	pinMode(gatePWM8, OUTPUT);
	pinMode(gatePWM9, OUTPUT);

#endif

}
