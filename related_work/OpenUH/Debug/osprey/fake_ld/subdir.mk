################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/fake_ld/ipa_ld.c \
../osprey/fake_ld/process.c 

OBJS += \
./osprey/fake_ld/ipa_ld.o \
./osprey/fake_ld/process.o 

C_DEPS += \
./osprey/fake_ld/ipa_ld.d \
./osprey/fake_ld/process.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/fake_ld/%.o: ../osprey/fake_ld/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


