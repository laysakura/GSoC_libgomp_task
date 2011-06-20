################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/frv/cmovd.c \
../osprey-gcc/gcc/config/frv/cmovh.c \
../osprey-gcc/gcc/config/frv/cmovw.c \
../osprey-gcc/gcc/config/frv/frv.c \
../osprey-gcc/gcc/config/frv/frvbegin.c \
../osprey-gcc/gcc/config/frv/frvend.c \
../osprey-gcc/gcc/config/frv/modi.c \
../osprey-gcc/gcc/config/frv/uitod.c \
../osprey-gcc/gcc/config/frv/uitof.c \
../osprey-gcc/gcc/config/frv/ulltod.c \
../osprey-gcc/gcc/config/frv/ulltof.c \
../osprey-gcc/gcc/config/frv/umodi.c 

ASM_SRCS += \
../osprey-gcc/gcc/config/frv/lib1funcs.asm 

OBJS += \
./osprey-gcc/gcc/config/frv/cmovd.o \
./osprey-gcc/gcc/config/frv/cmovh.o \
./osprey-gcc/gcc/config/frv/cmovw.o \
./osprey-gcc/gcc/config/frv/frv.o \
./osprey-gcc/gcc/config/frv/frvbegin.o \
./osprey-gcc/gcc/config/frv/frvend.o \
./osprey-gcc/gcc/config/frv/lib1funcs.o \
./osprey-gcc/gcc/config/frv/modi.o \
./osprey-gcc/gcc/config/frv/uitod.o \
./osprey-gcc/gcc/config/frv/uitof.o \
./osprey-gcc/gcc/config/frv/ulltod.o \
./osprey-gcc/gcc/config/frv/ulltof.o \
./osprey-gcc/gcc/config/frv/umodi.o 

C_DEPS += \
./osprey-gcc/gcc/config/frv/cmovd.d \
./osprey-gcc/gcc/config/frv/cmovh.d \
./osprey-gcc/gcc/config/frv/cmovw.d \
./osprey-gcc/gcc/config/frv/frv.d \
./osprey-gcc/gcc/config/frv/frvbegin.d \
./osprey-gcc/gcc/config/frv/frvend.d \
./osprey-gcc/gcc/config/frv/modi.d \
./osprey-gcc/gcc/config/frv/uitod.d \
./osprey-gcc/gcc/config/frv/uitof.d \
./osprey-gcc/gcc/config/frv/ulltod.d \
./osprey-gcc/gcc/config/frv/ulltof.d \
./osprey-gcc/gcc/config/frv/umodi.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/frv/%.o: ../osprey-gcc/gcc/config/frv/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc/gcc/config/frv/%.o: ../osprey-gcc/gcc/config/frv/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


