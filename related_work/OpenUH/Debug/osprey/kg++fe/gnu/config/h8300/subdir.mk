################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/h8300/fixunssfsi.c \
../osprey/kg++fe/gnu/config/h8300/h8300.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/h8300/crti.asm \
../osprey/kg++fe/gnu/config/h8300/crtn.asm \
../osprey/kg++fe/gnu/config/h8300/lib1funcs.asm 

OBJS += \
./osprey/kg++fe/gnu/config/h8300/crti.o \
./osprey/kg++fe/gnu/config/h8300/crtn.o \
./osprey/kg++fe/gnu/config/h8300/fixunssfsi.o \
./osprey/kg++fe/gnu/config/h8300/h8300.o \
./osprey/kg++fe/gnu/config/h8300/lib1funcs.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/h8300/fixunssfsi.d \
./osprey/kg++fe/gnu/config/h8300/h8300.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/h8300/%.o: ../osprey/kg++fe/gnu/config/h8300/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/h8300/%.o: ../osprey/kg++fe/gnu/config/h8300/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


