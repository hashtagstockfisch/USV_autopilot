################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/emil/git/USV_autopilot/USV_autopilot_project/Source/DummyClass.cpp \
/home/emil/git/USV_autopilot/USV_autopilot_project/Source/MotorCom.cpp \
/home/emil/git/USV_autopilot/USV_autopilot_project/Source/RCDriver.cpp \
/home/emil/git/USV_autopilot/USV_autopilot_project/Source/USVMotorProtocol.cpp 

OBJS += \
./Source/DummyClass.o \
./Source/MotorCom.o \
./Source/RCDriver.o \
./Source/USVMotorProtocol.o 

CPP_DEPS += \
./Source/DummyClass.d \
./Source/MotorCom.d \
./Source/RCDriver.d \
./Source/USVMotorProtocol.d 


# Each subdirectory must supply rules for building sources it contributes
Source/DummyClass.o: /home/emil/git/USV_autopilot/USV_autopilot_project/Source/DummyClass.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Source/MotorCom.o: /home/emil/git/USV_autopilot/USV_autopilot_project/Source/MotorCom.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Source/RCDriver.o: /home/emil/git/USV_autopilot/USV_autopilot_project/Source/RCDriver.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Source/USVMotorProtocol.o: /home/emil/git/USV_autopilot/USV_autopilot_project/Source/USVMotorProtocol.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


