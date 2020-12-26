################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Getters\ and\ Setters.cpp \
../src/Person.cpp 

OBJS += \
./src/Getters\ and\ Setters.o \
./src/Person.o 

CPP_DEPS += \
./src/Getters\ and\ Setters.d \
./src/Person.d 


# Each subdirectory must supply rules for building sources it contributes
src/Getters\ and\ Setters.o: ../src/Getters\ and\ Setters.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Getters and Setters.d" -MT"src/Getters\ and\ Setters.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


