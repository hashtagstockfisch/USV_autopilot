#ifndef _DUMMYCLASS_H
#define _DUMMYCLASS_H

#include "Config.h"
#include "../Interfaces/IMotorTransportlayer.h"
#include "USVMotorProtocol.h"
class DummyClass {
public:
	DummyClass();
	int ReturnThree();
	void setRPM(double percentage);

private:
	IMotorTransportlayer* PWM_driver;
};

#endif
