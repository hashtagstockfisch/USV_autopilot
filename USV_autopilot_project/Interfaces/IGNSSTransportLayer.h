/*
 * IGNSSTransportlayer.h
 *
 *  Created on: Mar 5, 2018
 *      Author: mada
 */

#ifndef INTERFACES_IGNSSTRANSPORTLAYER_H_
#define INTERFACES_IGNSSTRANSPORTLAYER_H_


#include "../Header/Config.h"
#include <string>
#include <iostream>

using namespace std;

class IGNSSTransportLayer{
public:
	virtual void Init(class IDataLinkLayer) = 0;
	virtual void SendData(string Data) = 0;
	virtual string ReceiveData() = 0;
	virtual ~IGNSSTransportLayer(){};
};


#endif /* INTERFACES_IGNSSTRANSPORTLAYER_H_ */
