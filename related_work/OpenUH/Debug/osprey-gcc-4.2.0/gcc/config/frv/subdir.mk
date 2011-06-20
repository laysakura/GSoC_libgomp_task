################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/frv/cmovd.c \
../osprey-gcc-4.2.0/gcc/config/frv/cmovh.c \
../osprey-gcc-4.2.0/gcc/config/frv/cmovw.c \
../osprey-gcc-4.2.0/gcc/config/frv/frv.c \
../osprey-gcc-4.2.0/gcc/config/frv/frvbegin.c \
../osprey-gcc-4.2.0/gcc/config/frv/frvend.c \
../osprey-gcc-4.2.0/gcc/config/frv/modi.c \
../osprey-gcc-4.2.0/gcc/config/frv/uitod.c \
../osprey-gcc-4.2.0/gcc/config/frv/uitof.c \
../osprey-gcc-4.2.0/gcc/config/frv/ulltod.c \
../osprey-gcc-4.2.0/gcc/config/frv/ulltof.c \
../osprey-gcc-4.2.0/gcc/config/frv/umodi.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/frv/lib1funcs.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/frv/cmovd.o \
./osprey-gcc-4.2.0/gcc/config/frv/cmovh.o \
./osprey-gcc-4.2.0/gcc/config/frv/cmovw.o \
./osprey-gcc-4.2.0/gcc/config/frv/frv.o \
./osprey-gcc-4.2.0/gcc/config/frv/frvbegin.o \
./osprey-gcc-4.2.0/gcc/config/frv/frvend.o \
./osprey-gcc-4.2.0/gcc/config/frv/lib1funcs.o \
./osprey-gcc-4.2.0/gcc/config/frv/modi.o \
./osprey-gcc-4.2.0/gcc/config/frv/uitod.o \
./osprey-gcc-4.2.0/gcc/config/frv/uitof.o \
./osprey-gcc-4.2.0/gcc/config/frv/ulltod.o \
./osprey-gcc-4.2.0/gcc/config/frv/ulltof.o \
./osprey-gcc-4.2.0/gcc/config/frv/umodi.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/frv/cmovd.d \
./osprey-gcc-4.2.0/gcc/config/frv/cmovh.d \
./osprey-gcc-4.2.0/gcc/config/frv/cmovw.d \
./osprey-gcc-4.2.0/gcc/config/frv/frv.d \
./osprey-gcc-4.2.0/gcc/config/frv/frvbegin.d \
./osprey-gcc-4.2.0/gcc/config/frv/frvend.d \
./osprey-gcc-4.2.0/gcc/config/frv/modi.d \
./osprey-gcc-4.2.0/gcc/config/frv/uitod.d \
./osprey-gcc-4.2.0/gcc/config/frv/uitof.d \
./osprey-gcc-4.2.0/gcc/config/frv/ulltod.d \
./osprey-gcc-4.2.0/gcc/config/frv/ulltof.d \
./osprey-gcc-4.2.0/gcc/config/frv/umodi.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/frv/%.o: ../osprey-gcc-4.2.0/gcc/config/frv/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/frv/%.o: ../osprey-gcc-4.2.0/gcc/config/frv/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


