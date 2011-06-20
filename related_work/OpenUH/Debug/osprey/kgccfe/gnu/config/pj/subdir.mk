################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/pj/pj.c 

S_UPPER_SRCS += \
../osprey/kgccfe/gnu/config/pj/lib1funcs.S 

OBJS += \
./osprey/kgccfe/gnu/config/pj/lib1funcs.o \
./osprey/kgccfe/gnu/config/pj/pj.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/pj/pj.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/pj/%.o: ../osprey/kgccfe/gnu/config/pj/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/pj/%.o: ../osprey/kgccfe/gnu/config/pj/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


