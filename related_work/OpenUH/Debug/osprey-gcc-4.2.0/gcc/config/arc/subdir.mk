################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/arc/arc.c \
../osprey-gcc-4.2.0/gcc/config/arc/initfini.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/arc/lib1funcs.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/arc/arc.o \
./osprey-gcc-4.2.0/gcc/config/arc/initfini.o \
./osprey-gcc-4.2.0/gcc/config/arc/lib1funcs.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/arc/arc.d \
./osprey-gcc-4.2.0/gcc/config/arc/initfini.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/arc/%.o: ../osprey-gcc-4.2.0/gcc/config/arc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/arc/%.o: ../osprey-gcc-4.2.0/gcc/config/arc/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


