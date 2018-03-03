#include "../Header/MotorCom.h"
MotorCom::MotorCom(IMotorTransportlayer* MotorDriverProtocol) {
	_motorDriverProtocol = new USVMotorProtocol();
}


bool MotorCom::SelfTest() {
	return 0;
}
