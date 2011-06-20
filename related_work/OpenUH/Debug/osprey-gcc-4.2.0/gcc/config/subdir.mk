################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/darwin-64.c \
../osprey-gcc-4.2.0/gcc/config/darwin-c.c \
../osprey-gcc-4.2.0/gcc/config/darwin-crt2.c \
../osprey-gcc-4.2.0/gcc/config/darwin-crt3.c \
../osprey-gcc-4.2.0/gcc/config/darwin.c \
../osprey-gcc-4.2.0/gcc/config/dfp-bit.c \
../osprey-gcc-4.2.0/gcc/config/divmod.c \
../osprey-gcc-4.2.0/gcc/config/floatunsidf.c \
../osprey-gcc-4.2.0/gcc/config/floatunsisf.c \
../osprey-gcc-4.2.0/gcc/config/floatunsitf.c \
../osprey-gcc-4.2.0/gcc/config/floatunsixf.c \
../osprey-gcc-4.2.0/gcc/config/fp-bit.c \
../osprey-gcc-4.2.0/gcc/config/host-darwin.c \
../osprey-gcc-4.2.0/gcc/config/host-hpux.c \
../osprey-gcc-4.2.0/gcc/config/host-linux.c \
../osprey-gcc-4.2.0/gcc/config/host-solaris.c \
../osprey-gcc-4.2.0/gcc/config/memcmp.c \
../osprey-gcc-4.2.0/gcc/config/memcpy.c \
../osprey-gcc-4.2.0/gcc/config/memmove.c \
../osprey-gcc-4.2.0/gcc/config/memset.c \
../osprey-gcc-4.2.0/gcc/config/sol2-c.c \
../osprey-gcc-4.2.0/gcc/config/sol2.c \
../osprey-gcc-4.2.0/gcc/config/udivmod.c \
../osprey-gcc-4.2.0/gcc/config/udivmodsi4.c \
../osprey-gcc-4.2.0/gcc/config/vxlib.c 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/darwin-64.o \
./osprey-gcc-4.2.0/gcc/config/darwin-c.o \
./osprey-gcc-4.2.0/gcc/config/darwin-crt2.o \
./osprey-gcc-4.2.0/gcc/config/darwin-crt3.o \
./osprey-gcc-4.2.0/gcc/config/darwin.o \
./osprey-gcc-4.2.0/gcc/config/dfp-bit.o \
./osprey-gcc-4.2.0/gcc/config/divmod.o \
./osprey-gcc-4.2.0/gcc/config/floatunsidf.o \
./osprey-gcc-4.2.0/gcc/config/floatunsisf.o \
./osprey-gcc-4.2.0/gcc/config/floatunsitf.o \
./osprey-gcc-4.2.0/gcc/config/floatunsixf.o \
./osprey-gcc-4.2.0/gcc/config/fp-bit.o \
./osprey-gcc-4.2.0/gcc/config/host-darwin.o \
./osprey-gcc-4.2.0/gcc/config/host-hpux.o \
./osprey-gcc-4.2.0/gcc/config/host-linux.o \
./osprey-gcc-4.2.0/gcc/config/host-solaris.o \
./osprey-gcc-4.2.0/gcc/config/memcmp.o \
./osprey-gcc-4.2.0/gcc/config/memcpy.o \
./osprey-gcc-4.2.0/gcc/config/memmove.o \
./osprey-gcc-4.2.0/gcc/config/memset.o \
./osprey-gcc-4.2.0/gcc/config/sol2-c.o \
./osprey-gcc-4.2.0/gcc/config/sol2.o \
./osprey-gcc-4.2.0/gcc/config/udivmod.o \
./osprey-gcc-4.2.0/gcc/config/udivmodsi4.o \
./osprey-gcc-4.2.0/gcc/config/vxlib.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/darwin-64.d \
./osprey-gcc-4.2.0/gcc/config/darwin-c.d \
./osprey-gcc-4.2.0/gcc/config/darwin-crt2.d \
./osprey-gcc-4.2.0/gcc/config/darwin-crt3.d \
./osprey-gcc-4.2.0/gcc/config/darwin.d \
./osprey-gcc-4.2.0/gcc/config/dfp-bit.d \
./osprey-gcc-4.2.0/gcc/config/divmod.d \
./osprey-gcc-4.2.0/gcc/config/floatunsidf.d \
./osprey-gcc-4.2.0/gcc/config/floatunsisf.d \
./osprey-gcc-4.2.0/gcc/config/floatunsitf.d \
./osprey-gcc-4.2.0/gcc/config/floatunsixf.d \
./osprey-gcc-4.2.0/gcc/config/fp-bit.d \
./osprey-gcc-4.2.0/gcc/config/host-darwin.d \
./osprey-gcc-4.2.0/gcc/config/host-hpux.d \
./osprey-gcc-4.2.0/gcc/config/host-linux.d \
./osprey-gcc-4.2.0/gcc/config/host-solaris.d \
./osprey-gcc-4.2.0/gcc/config/memcmp.d \
./osprey-gcc-4.2.0/gcc/config/memcpy.d \
./osprey-gcc-4.2.0/gcc/config/memmove.d \
./osprey-gcc-4.2.0/gcc/config/memset.d \
./osprey-gcc-4.2.0/gcc/config/sol2-c.d \
./osprey-gcc-4.2.0/gcc/config/sol2.d \
./osprey-gcc-4.2.0/gcc/config/udivmod.d \
./osprey-gcc-4.2.0/gcc/config/udivmodsi4.d \
./osprey-gcc-4.2.0/gcc/config/vxlib.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/%.o: ../osprey-gcc-4.2.0/gcc/config/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


