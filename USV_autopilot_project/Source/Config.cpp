/*
 * Config.cpp
 *
 *  Created on: Mar 5, 2018
 *      Author: emil
 */
#include "../Header/Config.h"
#include "../Header/AllHeaders.h"


Parameters Config;
void InitConfig () {
	Config.MotorTransportlayer = new USVMotorProtocol();

}



