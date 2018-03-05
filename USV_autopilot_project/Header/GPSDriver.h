/*
 * GPSDriver.h
 *
 *  Created on: Mar 5, 2018
 *      Author: mada
 */

#ifndef HEADER_GPSDRIVER_H_
#define HEADER_GPSDRIVER_H_

#include "../Interfaces/IGNSSDriver.h"
#include "../Interfaces/ISystemStatus.h"
#include "../Interfaces/IGNSSTransportLayer.h"

class GPSDriver : public IGNSSDriver, public ISystemStatus {
public:
	GPSDriver();
	void SetANTOffset(int OffsetCM);
	void SetKalmanFilterSTS(char STS);
	string GetPOS();
	char GetHeading();
	double GetLatestFixTime();
	bool SelfTest();
private:
	IGNSSTransportLayer* _GNSSTransportLayer;
};

#endif /* HEADER_GPSDRIVER_H_ */
