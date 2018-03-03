#ifndef _DUMMYCLASS_H
#define _DUMMYCLASS_H

#include "Config.h"
#include "../Interfaces/IMotorTransportlayer.h"
#include "../Interfaces/ISystemStatus.h"
#include "USVMotorProtocol.h"
class MotorCom : public ISystemStatus {
public:
	MotorCom(IMotorTransportlayer* MotorDriverProtocol);
	bool SelfTest();

private:
	IMotorTransportlayer* _motorDriverProtocol;
};

#endif
