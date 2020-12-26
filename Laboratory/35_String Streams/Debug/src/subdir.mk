################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/String\ Streams.cpp 

OBJS += \
./src/String\ Streams.o 

CPP_DEPS += \
./src/String\ Streams.d 


# Each subdirectory must supply rules for building sources it contributes
src/String\ Streams.o: ../src/String\ Streams.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/String Streams.d" -MT"src/String\ Streams.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


