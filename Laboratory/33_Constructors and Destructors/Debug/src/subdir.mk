################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cat.cpp \
../src/Constructors\ and\ Destructors.cpp 

OBJS += \
./src/Cat.o \
./src/Constructors\ and\ Destructors.o 

CPP_DEPS += \
./src/Cat.d \
./src/Constructors\ and\ Destructors.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Constructors\ and\ Destructors.o: ../src/Constructors\ and\ Destructors.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Constructors and Destructors.d" -MT"src/Constructors\ and\ Destructors.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


