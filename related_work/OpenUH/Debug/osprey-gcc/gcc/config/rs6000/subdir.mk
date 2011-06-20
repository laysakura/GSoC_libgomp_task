################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/rs6000/darwin-fallback.c \
../osprey-gcc/gcc/config/rs6000/darwin-ldouble.c \
../osprey-gcc/gcc/config/rs6000/host-darwin.c \
../osprey-gcc/gcc/config/rs6000/ppc64-fp.c \
../osprey-gcc/gcc/config/rs6000/rs6000-c.c \
../osprey-gcc/gcc/config/rs6000/rs6000.c 

ASM_SRCS += \
../osprey-gcc/gcc/config/rs6000/crtsavres.asm \
../osprey-gcc/gcc/config/rs6000/darwin-fpsave.asm \
../osprey-gcc/gcc/config/rs6000/darwin-tramp.asm \
../osprey-gcc/gcc/config/rs6000/darwin-vecsave.asm \
../osprey-gcc/gcc/config/rs6000/darwin-world.asm \
../osprey-gcc/gcc/config/rs6000/eabi-ci.asm \
../osprey-gcc/gcc/config/rs6000/eabi-cn.asm \
../osprey-gcc/gcc/config/rs6000/eabi.asm \
../osprey-gcc/gcc/config/rs6000/sol-ci.asm \
../osprey-gcc/gcc/config/rs6000/sol-cn.asm \
../osprey-gcc/gcc/config/rs6000/tramp.asm 

OBJS += \
./osprey-gcc/gcc/config/rs6000/crtsavres.o \
./osprey-gcc/gcc/config/rs6000/darwin-fallback.o \
./osprey-gcc/gcc/config/rs6000/darwin-fpsave.o \
./osprey-gcc/gcc/config/rs6000/darwin-ldouble.o \
./osprey-gcc/gcc/config/rs6000/darwin-tramp.o \
./osprey-gcc/gcc/config/rs6000/darwin-vecsave.o \
./osprey-gcc/gcc/config/rs6000/darwin-world.o \
./osprey-gcc/gcc/config/rs6000/eabi-ci.o \
./osprey-gcc/gcc/config/rs6000/eabi-cn.o \
./osprey-gcc/gcc/config/rs6000/eabi.o \
./osprey-gcc/gcc/config/rs6000/host-darwin.o \
./osprey-gcc/gcc/config/rs6000/ppc64-fp.o \
./osprey-gcc/gcc/config/rs6000/rs6000-c.o \
./osprey-gcc/gcc/config/rs6000/rs6000.o \
./osprey-gcc/gcc/config/rs6000/sol-ci.o \
./osprey-gcc/gcc/config/rs6000/sol-cn.o \
./osprey-gcc/gcc/config/rs6000/tramp.o 

C_DEPS += \
./osprey-gcc/gcc/config/rs6000/darwin-fallback.d \
./osprey-gcc/gcc/config/rs6000/darwin-ldouble.d \
./osprey-gcc/gcc/config/rs6000/host-darwin.d \
./osprey-gcc/gcc/config/rs6000/ppc64-fp.d \
./osprey-gcc/gcc/config/rs6000/rs6000-c.d \
./osprey-gcc/gcc/config/rs6000/rs6000.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/rs6000/%.o: ../osprey-gcc/gcc/config/rs6000/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/rs6000/%.o: ../osprey-gcc/gcc/config/rs6000/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


