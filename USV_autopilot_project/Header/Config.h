#ifndef _CONFIG_H
#define _CONFIG_H
#include "USVMotorProtocol.h"
#include "../Header/AllHeaders.h"
#include "../Interfaces/AllInterfaces.h"
#include <iostream>
#include <string.h>

using namespace std;
struct TxtConfigParameters{
	string _motorTransportLayer;
	string _motorDataLinklayer;
	string _GNSSDataLinklayer;
};

struct Parameters {
	IMotorTransportlayer* MotorTransportlayer;
	IDataLinkLayer* MotorDataLinklayer;
};

void InitConfig ();



#endif
