/*
 * IDataLinkLayer.h
 *
 *  Created on: Mar 5, 2018
 *      Author: mada
 */

#ifndef INTERFACES_IDATALINKLAYER_H_
#define INTERFACES_IDATALINKLAYER_H_


#include "../Header/Config.h"
#include <string>
#include <iostream>

using namespace std;

class IDataLinkLayer {
public:
	virtual void SendData(string Data) = 0;
	virtual string ReceiveData() = 0;
	virtual ~IDataLinkLayer(){};
};


#endif /* INTERFACES_IDATALINKLAYER_H_ */
