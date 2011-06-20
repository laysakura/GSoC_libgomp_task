################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/tblmgr/tmerr.c 

OBJS += \
./osprey/libu/tblmgr/tmerr.o 

C_DEPS += \
./osprey/libu/tblmgr/tmerr.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/tblmgr/%.o: ../osprey/libu/tblmgr/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


