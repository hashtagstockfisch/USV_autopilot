#ifndef _RCDRIVER_H
#define _RCDRIVER_H
#include "../Interfaces/IWirelessControl.h"
#include "../Interfaces/ISystemStatus.h"
#include "../Interfaces/IMotorTransportlayer.h"

class RCDriver : public IWirelessControl, public ISystemStatus{
public:
	RCDriver();
	bool SelfTest(); //Implemented from ISystemStatus
	void SetVelocity(); //Implemented from IWirelessControl
	void SetAngle(); //Implemented from IWirelessControl
	int* GetVelocityAndAngle();

private:
	IMotorTransportlayer* _motorCom;
	int _velocity;
	int _angle;
};

#endif
