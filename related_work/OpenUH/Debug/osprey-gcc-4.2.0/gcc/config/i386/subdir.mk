################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc-4.2.0/gcc/config/i386/crtfastmath.c \
../osprey-gcc-4.2.0/gcc/config/i386/cygwin1.c \
../osprey-gcc-4.2.0/gcc/config/i386/cygwin2.c \
../osprey-gcc-4.2.0/gcc/config/i386/driver-i386.c \
../osprey-gcc-4.2.0/gcc/config/i386/gmon-sol2.c \
../osprey-gcc-4.2.0/gcc/config/i386/gthr-win32.c \
../osprey-gcc-4.2.0/gcc/config/i386/host-cygwin.c \
../osprey-gcc-4.2.0/gcc/config/i386/host-i386-darwin.c \
../osprey-gcc-4.2.0/gcc/config/i386/host-mingw32.c \
../osprey-gcc-4.2.0/gcc/config/i386/i386.c \
../osprey-gcc-4.2.0/gcc/config/i386/netware-crt0.c \
../osprey-gcc-4.2.0/gcc/config/i386/netware-libgcc.c \
../osprey-gcc-4.2.0/gcc/config/i386/netware.c \
../osprey-gcc-4.2.0/gcc/config/i386/nwld.c \
../osprey-gcc-4.2.0/gcc/config/i386/winnt-cxx.c \
../osprey-gcc-4.2.0/gcc/config/i386/winnt-stubs.c \
../osprey-gcc-4.2.0/gcc/config/i386/winnt.c 

ASM_SRCS += \
../osprey-gcc-4.2.0/gcc/config/i386/cygwin.asm \
../osprey-gcc-4.2.0/gcc/config/i386/sol2-c1.asm \
../osprey-gcc-4.2.0/gcc/config/i386/sol2-ci.asm \
../osprey-gcc-4.2.0/gcc/config/i386/sol2-cn.asm \
../osprey-gcc-4.2.0/gcc/config/i386/sol2-gc1.asm \
../osprey-gcc-4.2.0/gcc/config/i386/uwin.asm 

OBJS += \
./osprey-gcc-4.2.0/gcc/config/i386/crtfastmath.o \
./osprey-gcc-4.2.0/gcc/config/i386/cygwin.o \
./osprey-gcc-4.2.0/gcc/config/i386/cygwin1.o \
./osprey-gcc-4.2.0/gcc/config/i386/cygwin2.o \
./osprey-gcc-4.2.0/gcc/config/i386/driver-i386.o \
./osprey-gcc-4.2.0/gcc/config/i386/gmon-sol2.o \
./osprey-gcc-4.2.0/gcc/config/i386/gthr-win32.o \
./osprey-gcc-4.2.0/gcc/config/i386/host-cygwin.o \
./osprey-gcc-4.2.0/gcc/config/i386/host-i386-darwin.o \
./osprey-gcc-4.2.0/gcc/config/i386/host-mingw32.o \
./osprey-gcc-4.2.0/gcc/config/i386/i386.o \
./osprey-gcc-4.2.0/gcc/config/i386/netware-crt0.o \
./osprey-gcc-4.2.0/gcc/config/i386/netware-libgcc.o \
./osprey-gcc-4.2.0/gcc/config/i386/netware.o \
./osprey-gcc-4.2.0/gcc/config/i386/nwld.o \
./osprey-gcc-4.2.0/gcc/config/i386/sol2-c1.o \
./osprey-gcc-4.2.0/gcc/config/i386/sol2-ci.o \
./osprey-gcc-4.2.0/gcc/config/i386/sol2-cn.o \
./osprey-gcc-4.2.0/gcc/config/i386/sol2-gc1.o \
./osprey-gcc-4.2.0/gcc/config/i386/uwin.o \
./osprey-gcc-4.2.0/gcc/config/i386/winnt-cxx.o \
./osprey-gcc-4.2.0/gcc/config/i386/winnt-stubs.o \
./osprey-gcc-4.2.0/gcc/config/i386/winnt.o 

C_DEPS += \
./osprey-gcc-4.2.0/gcc/config/i386/crtfastmath.d \
./osprey-gcc-4.2.0/gcc/config/i386/cygwin1.d \
./osprey-gcc-4.2.0/gcc/config/i386/cygwin2.d \
./osprey-gcc-4.2.0/gcc/config/i386/driver-i386.d \
./osprey-gcc-4.2.0/gcc/config/i386/gmon-sol2.d \
./osprey-gcc-4.2.0/gcc/config/i386/gthr-win32.d \
./osprey-gcc-4.2.0/gcc/config/i386/host-cygwin.d \
./osprey-gcc-4.2.0/gcc/config/i386/host-i386-darwin.d \
./osprey-gcc-4.2.0/gcc/config/i386/host-mingw32.d \
./osprey-gcc-4.2.0/gcc/config/i386/i386.d \
./osprey-gcc-4.2.0/gcc/config/i386/netware-crt0.d \
./osprey-gcc-4.2.0/gcc/config/i386/netware-libgcc.d \
./osprey-gcc-4.2.0/gcc/config/i386/netware.d \
./osprey-gcc-4.2.0/gcc/config/i386/nwld.d \
./osprey-gcc-4.2.0/gcc/config/i386/winnt-cxx.d \
./osprey-gcc-4.2.0/gcc/config/i386/winnt-stubs.d \
./osprey-gcc-4.2.0/gcc/config/i386/winnt.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/gcc/config/i386/%.o: ../osprey-gcc-4.2.0/gcc/config/i386/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey-gcc-4.2.0/gcc/config/i386/%.o: ../osprey-gcc-4.2.0/gcc/config/i386/%.asm
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


