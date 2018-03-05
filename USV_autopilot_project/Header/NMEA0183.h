/*
 * NMEA0183.h
 *
 *  Created on: Mar 5, 2018
 *      Author: mada
 */

#ifndef HEADER_NMEA0183_H_
#define HEADER_NMEA0183_H_


#include "../Interfaces/IGNSSTransportLayer.h"

class NMEA0183 : public IGNSSTransportLayer{
public:
	NMEA0183();
	void SendData(string Data);
	string ReceiveData();
};


#endif /* HEADER_NMEA0183_H_ */
