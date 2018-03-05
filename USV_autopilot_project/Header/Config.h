#ifndef _CONFIG_H
#define _CONFIG_H
#include "USVMotorProtocol.h"
#include "../Interfaces/AllInterfaces.h"
#include <iostream>
#include <string.h>

using namespace std;

void InitConfig();
struct ConfigParameters{
	string _motorTransportLayer;
	string _motorDataLinklayer;
	string _GNSSDriver;
	string _GNSSTransportlayer;
	string _GNSSDataLinklayer;
};



#endif
