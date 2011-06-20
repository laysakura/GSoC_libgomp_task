################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libm/mips/extra/sqrtf.c \
../osprey/libm/mips/extra/trunc.c 

OBJS += \
./osprey/libm/mips/extra/sqrtf.o \
./osprey/libm/mips/extra/trunc.o 

C_DEPS += \
./osprey/libm/mips/extra/sqrtf.d \
./osprey/libm/mips/extra/trunc.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libm/mips/extra/%.o: ../osprey/libm/mips/extra/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


