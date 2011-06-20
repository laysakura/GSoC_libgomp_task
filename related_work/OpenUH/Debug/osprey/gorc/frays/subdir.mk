################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../osprey/gorc/frays/fray.S 

OBJS += \
./osprey/gorc/frays/fray.o 


# Each subdirectory must supply rules for building sources it contributes
osprey/gorc/frays/%.o: ../osprey/gorc/frays/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


