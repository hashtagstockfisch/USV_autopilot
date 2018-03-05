#include "../Header/RCDriver.h"
#include "../Header/Config.h"
extern struct Parameters Config;
RCDriver::RCDriver() {
	_motorCom = Config.MotorTransportlayer;
}

void RCDriver::SetVelocity() {
}

void RCDriver::SetAngle() {
}

bool RCDriver::SelfTest() {
	return 0;
}

int* RCDriver::GetVelocityAndAngle() {
	return 0;
}
