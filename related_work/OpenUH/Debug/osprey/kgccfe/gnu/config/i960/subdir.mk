################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/i960/i960-c.c \
../osprey/kgccfe/gnu/config/i960/i960.c 

OBJS += \
./osprey/kgccfe/gnu/config/i960/i960-c.o \
./osprey/kgccfe/gnu/config/i960/i960.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/i960/i960-c.d \
./osprey/kgccfe/gnu/config/i960/i960.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/i960/%.o: ../osprey/kgccfe/gnu/config/i960/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


