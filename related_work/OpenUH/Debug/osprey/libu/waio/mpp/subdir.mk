################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/waio/mpp/ixmm.c 

OBJS += \
./osprey/libu/waio/mpp/ixmm.o 

C_DEPS += \
./osprey/libu/waio/mpp/ixmm.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/waio/mpp/%.o: ../osprey/libu/waio/mpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


