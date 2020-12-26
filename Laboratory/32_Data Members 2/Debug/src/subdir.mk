################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cat.cpp \
../src/Data\ Members\ 2.cpp 

OBJS += \
./src/Cat.o \
./src/Data\ Members\ 2.o 

CPP_DEPS += \
./src/Cat.d \
./src/Data\ Members\ 2.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Data\ Members\ 2.o: ../src/Data\ Members\ 2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Data Members 2.d" -MT"src/Data\ Members\ 2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


