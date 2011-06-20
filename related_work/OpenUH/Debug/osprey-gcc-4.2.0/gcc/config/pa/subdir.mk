################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/pa/fptr.c \
../osprey-gcc-4.2.0/gcc/config/pa/pa.c \
../osprey-gcc-4.2.0/gcc/config/pa/quadlib.c \
../osprey-gcc-4.2.0/gcc/config/pa/stublib.c 

S_UPPER_SRCS += \
../osprey-gcc-4.2.0/gcc/config/pa/milli64.S 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/pa/lib2funcs.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/pa/fptr.o \
./osprey-gcc-4.2.0/gcc/config/pa/lib2funcs.o \
./osprey-gcc-4.2.0/gcc/config/pa/milli64.o \
./osprey-gcc-4.2.0/gcc/config/pa/pa.o \
./osprey-gcc-4.2.0/gcc/config/pa/quadlib.o \
./osprey-gcc-4.2.0/gcc/config/pa/stublib.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/pa/fptr.d \
./osprey-gcc-4.2.0/gcc/config/pa/pa.d \
./osprey-gcc-4.2.0/gcc/config/pa/quadlib.d \
./osprey-gcc-4.2.0/gcc/config/pa/stublib.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/pa/%.o: ../osprey-gcc-4.2.0/gcc/config/pa/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/pa/%.o: ../osprey-gcc-4.2.0/gcc/config/pa/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/pa/%.o: ../osprey-gcc-4.2.0/gcc/config/pa/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


