#include "../Header/MotorComTest.h"
MotorComTest::MotorComTest() {
	_motorDriverProtocol = new USVMotorProtocol();
}


bool MotorComTest::SelfTest() {
	return 0;
}
