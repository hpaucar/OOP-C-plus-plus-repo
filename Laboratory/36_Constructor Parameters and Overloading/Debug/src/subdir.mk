################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Constructor\ Parameters\ and\ Overloading.cpp \
../src/Person.cpp 

OBJS += \
./src/Constructor\ Parameters\ and\ Overloading.o \
./src/Person.o 

CPP_DEPS += \
./src/Constructor\ Parameters\ and\ Overloading.d \
./src/Person.d 


# Each subdirectory must supply rules for building sources it contributes
src/Constructor\ Parameters\ and\ Overloading.o: ../src/Constructor\ Parameters\ and\ Overloading.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Constructor Parameters and Overloading.d" -MT"src/Constructor\ Parameters\ and\ Overloading.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


