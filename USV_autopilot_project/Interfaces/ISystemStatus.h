#ifndef _ISYSTEMSTATUS_H
#define _ISYSTEMSTATUS_H

class ISystemStatus {
public:
	virtual bool SelfTest() = 0;
	virtual ~ISystemStatus() {};
};

#endif
