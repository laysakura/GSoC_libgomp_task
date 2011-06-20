################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/vms/vaxconv.c \
../osprey/libu/vms/vxmove00.c 

OBJS += \
./osprey/libu/vms/vaxconv.o \
./osprey/libu/vms/vxmove00.o 

C_DEPS += \
./osprey/libu/vms/vaxconv.d \
./osprey/libu/vms/vxmove00.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/vms/%.o: ../osprey/libu/vms/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


