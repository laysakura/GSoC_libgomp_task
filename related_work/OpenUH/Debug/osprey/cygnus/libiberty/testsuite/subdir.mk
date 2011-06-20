################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/cygnus/libiberty/testsuite/test-demangle.c 

OBJS += \
./osprey/cygnus/libiberty/testsuite/test-demangle.o 

C_DEPS += \
./osprey/cygnus/libiberty/testsuite/test-demangle.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/cygnus/libiberty/testsuite/%.o: ../osprey/cygnus/libiberty/testsuite/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


