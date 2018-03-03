################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Source/DummyClass.cpp \
../Source/MotorCom.cpp \
../Source/RCDriver.cpp \
../Source/USVMotorProtocol.cpp 

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
Source/%.o: ../Source/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-linux-gnueabihf-g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


