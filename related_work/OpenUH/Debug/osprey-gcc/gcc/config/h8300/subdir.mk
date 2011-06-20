################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/h8300/clzhi2.c \
../osprey-gcc/gcc/config/h8300/ctzhi2.c \
../osprey-gcc/gcc/config/h8300/fixunssfsi.c \
../osprey-gcc/gcc/config/h8300/h8300.c \
../osprey-gcc/gcc/config/h8300/parityhi2.c \
../osprey-gcc/gcc/config/h8300/popcounthi2.c 

ASM_SRCS += \
../osprey-gcc/gcc/config/h8300/crti.asm \
../osprey-gcc/gcc/config/h8300/crtn.asm \
../osprey-gcc/gcc/config/h8300/lib1funcs.asm 

OBJS += \
./osprey-gcc/gcc/config/h8300/clzhi2.o \
./osprey-gcc/gcc/config/h8300/crti.o \
./osprey-gcc/gcc/config/h8300/crtn.o \
./osprey-gcc/gcc/config/h8300/ctzhi2.o \
./osprey-gcc/gcc/config/h8300/fixunssfsi.o \
./osprey-gcc/gcc/config/h8300/h8300.o \
./osprey-gcc/gcc/config/h8300/lib1funcs.o \
./osprey-gcc/gcc/config/h8300/parityhi2.o \
./osprey-gcc/gcc/config/h8300/popcounthi2.o 

C_DEPS += \
./osprey-gcc/gcc/config/h8300/clzhi2.d \
./osprey-gcc/gcc/config/h8300/ctzhi2.d \
./osprey-gcc/gcc/config/h8300/fixunssfsi.d \
./osprey-gcc/gcc/config/h8300/h8300.d \
./osprey-gcc/gcc/config/h8300/parityhi2.d \
./osprey-gcc/gcc/config/h8300/popcounthi2.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/h8300/%.o: ../osprey-gcc/gcc/config/h8300/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/h8300/%.o: ../osprey-gcc/gcc/config/h8300/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


