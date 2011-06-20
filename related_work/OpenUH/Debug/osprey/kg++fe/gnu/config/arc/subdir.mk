################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/arc/arc.c \
../osprey/kg++fe/gnu/config/arc/initfini.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/arc/lib1funcs.asm 

OBJS += \
./osprey/kg++fe/gnu/config/arc/arc.o \
./osprey/kg++fe/gnu/config/arc/initfini.o \
./osprey/kg++fe/gnu/config/arc/lib1funcs.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/arc/arc.d \
./osprey/kg++fe/gnu/config/arc/initfini.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/arc/%.o: ../osprey/kg++fe/gnu/config/arc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/arc/%.o: ../osprey/kg++fe/gnu/config/arc/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


