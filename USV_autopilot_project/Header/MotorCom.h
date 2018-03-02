#ifndef _DUMMYCLASS_H
#define _DUMMYCLASS_H

#include "Config.h"
#include "../Interfaces/IMotorTransportlayer.h"
#include "USVMotorProtocol.h"
class MotorCom {
public:
	MotorCom();

private:
	IMotorTransportlayer* MotorProtocol;
};

#endif
