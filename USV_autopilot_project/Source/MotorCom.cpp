#include "../Header/MotorCom.h"
MotorCom::MotorCom() {
	MotorProtocol = new USVMotorProtocol();
}


bool MotorCom::SelfTest() {
}
