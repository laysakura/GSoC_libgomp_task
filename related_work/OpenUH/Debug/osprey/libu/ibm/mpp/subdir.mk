################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/ibm/mpp/uscctc.c \
../osprey/libu/ibm/mpp/usccti.c 

OBJS += \
./osprey/libu/ibm/mpp/uscctc.o \
./osprey/libu/ibm/mpp/usccti.o 

C_DEPS += \
./osprey/libu/ibm/mpp/uscctc.d \
./osprey/libu/ibm/mpp/usccti.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/ibm/mpp/%.o: ../osprey/libu/ibm/mpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


