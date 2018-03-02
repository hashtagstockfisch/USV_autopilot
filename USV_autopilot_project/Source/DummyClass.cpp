#include "../Header/DummyClass.h"
DummyClass::DummyClass() {
	PWM_driver = new USVMotorProtocol();
}

int DummyClass::ReturnThree() {
	return 3;
}

void DummyClass::setRPM(double percentage) {
}
