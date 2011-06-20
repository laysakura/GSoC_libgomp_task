################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/config/darwin-c.c \
../osprey-gcc/gcc/config/darwin-crt2.c \
../osprey-gcc/gcc/config/darwin.c \
../osprey-gcc/gcc/config/divmod.c \
../osprey-gcc/gcc/config/fp-bit.c \
../osprey-gcc/gcc/config/host-linux.c \
../osprey-gcc/gcc/config/host-solaris.c \
../osprey-gcc/gcc/config/memcmp.c \
../osprey-gcc/gcc/config/memcpy.c \
../osprey-gcc/gcc/config/memmove.c \
../osprey-gcc/gcc/config/memset.c \
../osprey-gcc/gcc/config/sol2-c.c \
../osprey-gcc/gcc/config/sol2.c \
../osprey-gcc/gcc/config/udivmod.c \
../osprey-gcc/gcc/config/udivmodsi4.c \
../osprey-gcc/gcc/config/vxlib.c 

OBJS += \
./osprey-gcc/gcc/config/darwin-c.o \
./osprey-gcc/gcc/config/darwin-crt2.o \
./osprey-gcc/gcc/config/darwin.o \
./osprey-gcc/gcc/config/divmod.o \
./osprey-gcc/gcc/config/fp-bit.o \
./osprey-gcc/gcc/config/host-linux.o \
./osprey-gcc/gcc/config/host-solaris.o \
./osprey-gcc/gcc/config/memcmp.o \
./osprey-gcc/gcc/config/memcpy.o \
./osprey-gcc/gcc/config/memmove.o \
./osprey-gcc/gcc/config/memset.o \
./osprey-gcc/gcc/config/sol2-c.o \
./osprey-gcc/gcc/config/sol2.o \
./osprey-gcc/gcc/config/udivmod.o \
./osprey-gcc/gcc/config/udivmodsi4.o \
./osprey-gcc/gcc/config/vxlib.o 

C_DEPS += \
./osprey-gcc/gcc/config/darwin-c.d \
./osprey-gcc/gcc/config/darwin-crt2.d \
./osprey-gcc/gcc/config/darwin.d \
./osprey-gcc/gcc/config/divmod.d \
./osprey-gcc/gcc/config/fp-bit.d \
./osprey-gcc/gcc/config/host-linux.d \
./osprey-gcc/gcc/config/host-solaris.d \
./osprey-gcc/gcc/config/memcmp.d \
./osprey-gcc/gcc/config/memcpy.d \
./osprey-gcc/gcc/config/memmove.d \
./osprey-gcc/gcc/config/memset.d \
./osprey-gcc/gcc/config/sol2-c.d \
./osprey-gcc/gcc/config/sol2.d \
./osprey-gcc/gcc/config/udivmod.d \
./osprey-gcc/gcc/config/udivmodsi4.d \
./osprey-gcc/gcc/config/vxlib.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/config/%.o: ../osprey-gcc/gcc/config/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


