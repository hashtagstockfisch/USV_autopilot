#ifndef _PWM_H
#define _PWM_H
#include "../Interfaces/IMotorTransportlayer.h"
class USVMotorProtocol : public IMotorTransportlayer {
public:
	USVMotorProtocol();
	void SetVelocityAndAngle(int percentage, int angle);
	void SetVelocity(int percentage);
	void SetAngle(int angle);
};

#endif
