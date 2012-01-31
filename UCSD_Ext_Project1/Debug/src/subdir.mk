################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Coin.cpp \
../src/DeliveryChute.cpp \
../src/Product.cpp \
../src/ProductButton.cpp \
../src/ProductRack.cpp \
../src/StatusPanel.cpp \
../src/TestFramework.cpp \
../src/UnitTest.cpp \
../src/VendingMachine.cpp \
../src/main.cpp 

OBJS += \
./src/Coin.o \
./src/DeliveryChute.o \
./src/Product.o \
./src/ProductButton.o \
./src/ProductRack.o \
./src/StatusPanel.o \
./src/TestFramework.o \
./src/UnitTest.o \
./src/VendingMachine.o \
./src/main.o 

CPP_DEPS += \
./src/Coin.d \
./src/DeliveryChute.d \
./src/Product.d \
./src/ProductButton.d \
./src/ProductRack.d \
./src/StatusPanel.d \
./src/TestFramework.d \
./src/UnitTest.d \
./src/VendingMachine.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


