#ifndef _WIRELESSCONTROL_H
#define _WIRELESSCONTROL_H

class IWirelessControl {
public:
	virtual void SetVelocity() = 0;
	virtual void SetAngle() = 0;
	virtual int* GetVelocityAndAngle() = 0;
	virtual ~IWirelessControl() {};
};
#endif
