################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../config/posix95/lock.c 

OBJS += \
./config/posix95/lock.o 

C_DEPS += \
./config/posix95/lock.d 


# Each subdirectory must supply rules for building sources it contributes
config/posix95/%.o: ../config/posix95/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


