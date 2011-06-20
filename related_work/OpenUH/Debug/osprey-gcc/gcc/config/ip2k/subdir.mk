################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/ip2k/ip2k.c 

S_UPPER_SRCS += \
../osprey-gcc/gcc/config/ip2k/crt0.S \
../osprey-gcc/gcc/config/ip2k/libgcc.S 

OBJS += \
./osprey-gcc/gcc/config/ip2k/crt0.o \
./osprey-gcc/gcc/config/ip2k/ip2k.o \
./osprey-gcc/gcc/config/ip2k/libgcc.o 

C_DEPS += \
./osprey-gcc/gcc/config/ip2k/ip2k.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/ip2k/%.o: ../osprey-gcc/gcc/config/ip2k/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/ip2k/%.o: ../osprey-gcc/gcc/config/ip2k/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


