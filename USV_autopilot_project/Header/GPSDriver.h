/*
 * GPSDriver.h
 *
 *  Created on: Mar 5, 2018
 *      Author: mada
 */

#ifndef HEADER_GPSDRIVER_H_
#define HEADER_GPSDRIVER_H_

#include "../Interfaces/IGNSSDriver.h"

class GPSDriver : public IGNSSDriver {
public:
	GPSDriver();
	void SetANTOffset(int OffsetCM);
	void SetKalmanFilterSTS(char STS);
	string GetPOS();
	char GetHeading();
	double GetLatestFixTime();
};

#endif /* HEADER_GPSDRIVER_H_ */
