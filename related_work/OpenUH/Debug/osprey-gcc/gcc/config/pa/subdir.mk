################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/pa/fptr.c \
../osprey-gcc/gcc/config/pa/pa-host.c \
../osprey-gcc/gcc/config/pa/pa.c \
../osprey-gcc/gcc/config/pa/quadlib.c 

S_UPPER_SRCS += \
../osprey-gcc/gcc/config/pa/milli64.S 

ASM_SRCS += \
../osprey-gcc/gcc/config/pa/lib2funcs.asm 

OBJS += \
./osprey-gcc/gcc/config/pa/fptr.o \
./osprey-gcc/gcc/config/pa/lib2funcs.o \
./osprey-gcc/gcc/config/pa/milli64.o \
./osprey-gcc/gcc/config/pa/pa-host.o \
./osprey-gcc/gcc/config/pa/pa.o \
./osprey-gcc/gcc/config/pa/quadlib.o 

C_DEPS += \
./osprey-gcc/gcc/config/pa/fptr.d \
./osprey-gcc/gcc/config/pa/pa-host.d \
./osprey-gcc/gcc/config/pa/pa.d \
./osprey-gcc/gcc/config/pa/quadlib.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/pa/%.o: ../osprey-gcc/gcc/config/pa/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/pa/%.o: ../osprey-gcc/gcc/config/pa/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/pa/%.o: ../osprey-gcc/gcc/config/pa/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


