################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/ibm/ebcdic.c \
../osprey/libu/ibm/ibmconv.c 

OBJS += \
./osprey/libu/ibm/ebcdic.o \
./osprey/libu/ibm/ibmconv.o 

C_DEPS += \
./osprey/libu/ibm/ebcdic.d \
./osprey/libu/ibm/ibmconv.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/ibm/%.o: ../osprey/libu/ibm/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


