/*
 * NMEA0183.h
 *
 *  Created on: Mar 5, 2018
 *      Author: mada
 */

#ifndef HEADER_NMEA0183_H_
#define HEADER_NMEA0183_H_


#include "../Interfaces/IGNSSTransportLayer.h"
#include "../Interfaces/IDataLinkLayer.h"

class NMEA0183 : public IGNSSTransportLayer {
public:
	NMEA0183();
	string RequestData(string DataName);
	string ReadBus();
private:
	IDataLinkLayer* _GNSSDataLinkLayer;
};


#endif /* HEADER_NMEA0183_H_ */
