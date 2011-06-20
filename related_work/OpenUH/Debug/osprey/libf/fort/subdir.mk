################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libf/fort/allocation.c \
../osprey/libf/fort/argchck.c \
../osprey/libf/fort/argshck.c \
../osprey/libf/fort/bndchk.c \
../osprey/libf/fort/bounds_chk.c \
../osprey/libf/fort/c16toc4.c \
../osprey/libf/fort/c16toc8.c \
../osprey/libf/fort/c4toc16.c \
../osprey/libf/fort/c8toc16.c \
../osprey/libf/fort/confchk.c \
../osprey/libf/fort/conform_chk.c \
../osprey/libf/fort/end.c \
../osprey/libf/fort/f16toi8.c \
../osprey/libf/fort/f4toi8.c \
../osprey/libf/fort/f8toi8.c \
../osprey/libf/fort/f90abort.c \
../osprey/libf/fort/f90memm.c \
../osprey/libf/fort/fcdstr.c \
../osprey/libf/fort/i8tof16.c \
../osprey/libf/fort/i8tof4.c \
../osprey/libf/fort/i8tof8.c \
../osprey/libf/fort/libflevel.c \
../osprey/libf/fort/pause.c \
../osprey/libf/fort/ptrchk.c \
../osprey/libf/fort/stop.c \
../osprey/libf/fort/stop_all.c \
../osprey/libf/fort/task_dv_getfirst.c 

OBJS += \
./osprey/libf/fort/allocation.o \
./osprey/libf/fort/argchck.o \
./osprey/libf/fort/argshck.o \
./osprey/libf/fort/bndchk.o \
./osprey/libf/fort/bounds_chk.o \
./osprey/libf/fort/c16toc4.o \
./osprey/libf/fort/c16toc8.o \
./osprey/libf/fort/c4toc16.o \
./osprey/libf/fort/c8toc16.o \
./osprey/libf/fort/confchk.o \
./osprey/libf/fort/conform_chk.o \
./osprey/libf/fort/end.o \
./osprey/libf/fort/f16toi8.o \
./osprey/libf/fort/f4toi8.o \
./osprey/libf/fort/f8toi8.o \
./osprey/libf/fort/f90abort.o \
./osprey/libf/fort/f90memm.o \
./osprey/libf/fort/fcdstr.o \
./osprey/libf/fort/i8tof16.o \
./osprey/libf/fort/i8tof4.o \
./osprey/libf/fort/i8tof8.o \
./osprey/libf/fort/libflevel.o \
./osprey/libf/fort/pause.o \
./osprey/libf/fort/ptrchk.o \
./osprey/libf/fort/stop.o \
./osprey/libf/fort/stop_all.o \
./osprey/libf/fort/task_dv_getfirst.o 

C_DEPS += \
./osprey/libf/fort/allocation.d \
./osprey/libf/fort/argchck.d \
./osprey/libf/fort/argshck.d \
./osprey/libf/fort/bndchk.d \
./osprey/libf/fort/bounds_chk.d \
./osprey/libf/fort/c16toc4.d \
./osprey/libf/fort/c16toc8.d \
./osprey/libf/fort/c4toc16.d \
./osprey/libf/fort/c8toc16.d \
./osprey/libf/fort/confchk.d \
./osprey/libf/fort/conform_chk.d \
./osprey/libf/fort/end.d \
./osprey/libf/fort/f16toi8.d \
./osprey/libf/fort/f4toi8.d \
./osprey/libf/fort/f8toi8.d \
./osprey/libf/fort/f90abort.d \
./osprey/libf/fort/f90memm.d \
./osprey/libf/fort/fcdstr.d \
./osprey/libf/fort/i8tof16.d \
./osprey/libf/fort/i8tof4.d \
./osprey/libf/fort/i8tof8.d \
./osprey/libf/fort/libflevel.d \
./osprey/libf/fort/pause.d \
./osprey/libf/fort/ptrchk.d \
./osprey/libf/fort/stop.d \
./osprey/libf/fort/stop_all.d \
./osprey/libf/fort/task_dv_getfirst.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libf/fort/%.o: ../osprey/libf/fort/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


