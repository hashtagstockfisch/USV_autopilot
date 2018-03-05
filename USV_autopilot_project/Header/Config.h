#ifndef _CONFIG_H
#define _CONFIG_H
#include "USVMotorProtocol.h"
#include <iostream>
#include <string.h>

using namespace std;
struct ConfigParameters{
	string _motorTransportLayer;
	string _motorDataLinklayer;
	string _GNSSDataLinklayer;
};


#endif
