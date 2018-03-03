#ifndef _IMotorTrasnportlayer_H
#define _IMotorTrasnportlayer_H
class IMotorTransportlayer {
public:
	virtual void SetVelocityAndAngle(int percentage, int degrees) = 0;
	virtual void SetVelocity(int percentage) = 0;
	virtual void SetAnlge(int degrees ) = 0;
	virtual ~IMotorTransportlayer() = 0;
};
#endif
