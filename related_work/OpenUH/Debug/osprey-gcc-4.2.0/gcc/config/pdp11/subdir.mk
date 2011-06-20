################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/pdp11/pdp11.c 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/pdp11/pdp11.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/pdp11/pdp11.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/pdp11/%.o: ../osprey-gcc-4.2.0/gcc/config/pdp11/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


