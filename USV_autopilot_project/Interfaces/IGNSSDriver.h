/*
 * IGNSSDriver.h
 *
 *  Created on: Mar 5, 2018
 *      Author: mada
 */

#ifndef INTERFACES_IGNSSDRIVER_H_
#define INTERFACES_IGNSSDRIVER_H_

#include "../Header/Config.h"
#include <string.h>
#include <iostream>

using namespace std;

class IGNSSDriver {
public:
	virtual void SetANTOffset(int OffsetCM) = 0;
	virtual void SetKalmanFilterSTS(char STS) = 0;
	virtual string GetPOS() = 0;
	virtual char GetHeading() = 0;
	virtual	double GetLatestFixTime() = 0;
	virtual ~IGNSSDriver(){};
};

#endif /* INTERFACES_IGNSSDRIVER_H_ */
