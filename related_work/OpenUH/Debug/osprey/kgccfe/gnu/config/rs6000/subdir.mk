################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/config/rs6000/rs6000-c.c \
../osprey/kgccfe/gnu/config/rs6000/rs6000.c 

ASM_SRCS += \
../osprey/kgccfe/gnu/config/rs6000/crtsavres.asm \
../osprey/kgccfe/gnu/config/rs6000/darwin-tramp.asm \
../osprey/kgccfe/gnu/config/rs6000/eabi-ci.asm \
../osprey/kgccfe/gnu/config/rs6000/eabi-cn.asm \
../osprey/kgccfe/gnu/config/rs6000/eabi.asm \
../osprey/kgccfe/gnu/config/rs6000/sol-ci.asm \
../osprey/kgccfe/gnu/config/rs6000/sol-cn.asm \
../osprey/kgccfe/gnu/config/rs6000/tramp.asm 

OBJS += \
./osprey/kgccfe/gnu/config/rs6000/crtsavres.o \
./osprey/kgccfe/gnu/config/rs6000/darwin-tramp.o \
./osprey/kgccfe/gnu/config/rs6000/eabi-ci.o \
./osprey/kgccfe/gnu/config/rs6000/eabi-cn.o \
./osprey/kgccfe/gnu/config/rs6000/eabi.o \
./osprey/kgccfe/gnu/config/rs6000/rs6000-c.o \
./osprey/kgccfe/gnu/config/rs6000/rs6000.o \
./osprey/kgccfe/gnu/config/rs6000/sol-ci.o \
./osprey/kgccfe/gnu/config/rs6000/sol-cn.o \
./osprey/kgccfe/gnu/config/rs6000/tramp.o 

C_DEPS += \
./osprey/kgccfe/gnu/config/rs6000/rs6000-c.d \
./osprey/kgccfe/gnu/config/rs6000/rs6000.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/config/rs6000/%.o: ../osprey/kgccfe/gnu/config/rs6000/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/kgccfe/gnu/config/rs6000/%.o: ../osprey/kgccfe/gnu/config/rs6000/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


