#ifndef _DUMMYCLASS_H
#define _DUMMYCLASS_H

#include "Config.h"
#include "../Interfaces/IMotorTransportlayer.h"
#include "../Interfaces/ISystemStatus.h"
#include "USVMotorProtocol.h"

class MotorComTest : public ISystemStatus
{
public:
	MotorComTest();
	bool SelfTest(); //Implemented from ISystemStatus

private:
	IMotorTransportlayer* _motorDriverProtocol;
};

#endif
