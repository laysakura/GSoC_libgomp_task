################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/config/ppc32/rs6000-c.c \
../osprey/kg++fe/gnu/config/ppc32/rs6000.c 

ASM_SRCS += \
../osprey/kg++fe/gnu/config/ppc32/crtsavres.asm \
../osprey/kg++fe/gnu/config/ppc32/darwin-tramp.asm \
../osprey/kg++fe/gnu/config/ppc32/eabi-ci.asm \
../osprey/kg++fe/gnu/config/ppc32/eabi-cn.asm \
../osprey/kg++fe/gnu/config/ppc32/eabi.asm \
../osprey/kg++fe/gnu/config/ppc32/sol-ci.asm \
../osprey/kg++fe/gnu/config/ppc32/sol-cn.asm \
../osprey/kg++fe/gnu/config/ppc32/tramp.asm 

OBJS += \
./osprey/kg++fe/gnu/config/ppc32/crtsavres.o \
./osprey/kg++fe/gnu/config/ppc32/darwin-tramp.o \
./osprey/kg++fe/gnu/config/ppc32/eabi-ci.o \
./osprey/kg++fe/gnu/config/ppc32/eabi-cn.o \
./osprey/kg++fe/gnu/config/ppc32/eabi.o \
./osprey/kg++fe/gnu/config/ppc32/rs6000-c.o \
./osprey/kg++fe/gnu/config/ppc32/rs6000.o \
./osprey/kg++fe/gnu/config/ppc32/sol-ci.o \
./osprey/kg++fe/gnu/config/ppc32/sol-cn.o \
./osprey/kg++fe/gnu/config/ppc32/tramp.o 

C_DEPS += \
./osprey/kg++fe/gnu/config/ppc32/rs6000-c.d \
./osprey/kg++fe/gnu/config/ppc32/rs6000.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/config/ppc32/%.o: ../osprey/kg++fe/gnu/config/ppc32/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kg++fe/gnu/config/ppc32/%.o: ../osprey/kg++fe/gnu/config/ppc32/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


