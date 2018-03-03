################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Tests/AllTests.cpp 

OBJS += \
./Tests/AllTests.o 

CPP_DEPS += \
./Tests/AllTests.d 


# Each subdirectory must supply rules for building sources it contributes
Tests/%.o: ../Tests/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/emil/git/USV_autopilot/UnitTest/GoogleTestLib" -I"/home/emil/git/USV_autopilot/USV_autopilot_project/Header" -I"/home/emil/git/USV_autopilot/USV_autopilot_project/Interfaces" -I"/home/emil/git/USV_autopilot/USV_autopilot_project/Source" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


