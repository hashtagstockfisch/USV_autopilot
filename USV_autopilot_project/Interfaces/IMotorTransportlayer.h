#ifndef _IMotorTrasnportlayer_H
#define _IMotorTrasnportlayer_H
class IMotorTransportlayer {
public:
	virtual void SetVelocityAndAngle(int percentage, int degrees);
	virtual void SetVelocity(int percentage);
	virtual void SetAnlge(int degrees );
	virtual ~IMotorTransportlayer();
};
#endif
