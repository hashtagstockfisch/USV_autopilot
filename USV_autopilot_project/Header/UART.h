/*
 * UART.h
 *
 *  Created on: Mar 5, 2018
 *      Author: mada
 */

#ifndef HEADER_UART_H_
#define HEADER_UART_H_


#include "../Interfaces/IDataLinkLayer.h"

class UART : public IDataLinkLayer {
public:
	UART();
	void SendData(string Data);
	string ReceiveData();
};


#endif /* HEADER_UART_H_ */
