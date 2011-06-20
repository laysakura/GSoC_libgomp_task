################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libcsup/math/floorl.c 

OBJS += \
./osprey/libcsup/math/floorl.o 

C_DEPS += \
./osprey/libcsup/math/floorl.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libcsup/math/%.o: ../osprey/libcsup/math/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


