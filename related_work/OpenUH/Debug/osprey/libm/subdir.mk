################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libm/atan2ftab.c \
../osprey/libm/atan2tab.c \
../osprey/libm/cabs.c \
../osprey/libm/cabsf.c \
../osprey/libm/drem.c \
../osprey/libm/expftab.c \
../osprey/libm/exptab.c \
../osprey/libm/fmod.c \
../osprey/libm/logftab.c \
../osprey/libm/logtab.c \
../osprey/libm/powtab.c \
../osprey/libm/vacos.c \
../osprey/libm/vacosf.c \
../osprey/libm/vasin.c \
../osprey/libm/vasinf.c \
../osprey/libm/vatan.c \
../osprey/libm/vatanf.c \
../osprey/libm/vcis.c \
../osprey/libm/vcisf.c \
../osprey/libm/vcos.c \
../osprey/libm/vcosf.c \
../osprey/libm/vexp.c \
../osprey/libm/vexpf.c \
../osprey/libm/vexpftab.c \
../osprey/libm/vexptab.c \
../osprey/libm/vlog.c \
../osprey/libm/vlog10.c \
../osprey/libm/vlog10f.c \
../osprey/libm/vlogf.c \
../osprey/libm/vlogftab.c \
../osprey/libm/vlogtab.c \
../osprey/libm/vsin.c \
../osprey/libm/vsinf.c \
../osprey/libm/vsqrt.c \
../osprey/libm/vsqrtf.c \
../osprey/libm/vtan.c \
../osprey/libm/vtanf.c 

OBJS += \
./osprey/libm/atan2ftab.o \
./osprey/libm/atan2tab.o \
./osprey/libm/cabs.o \
./osprey/libm/cabsf.o \
./osprey/libm/drem.o \
./osprey/libm/expftab.o \
./osprey/libm/exptab.o \
./osprey/libm/fmod.o \
./osprey/libm/logftab.o \
./osprey/libm/logtab.o \
./osprey/libm/powtab.o \
./osprey/libm/vacos.o \
./osprey/libm/vacosf.o \
./osprey/libm/vasin.o \
./osprey/libm/vasinf.o \
./osprey/libm/vatan.o \
./osprey/libm/vatanf.o \
./osprey/libm/vcis.o \
./osprey/libm/vcisf.o \
./osprey/libm/vcos.o \
./osprey/libm/vcosf.o \
./osprey/libm/vexp.o \
./osprey/libm/vexpf.o \
./osprey/libm/vexpftab.o \
./osprey/libm/vexptab.o \
./osprey/libm/vlog.o \
./osprey/libm/vlog10.o \
./osprey/libm/vlog10f.o \
./osprey/libm/vlogf.o \
./osprey/libm/vlogftab.o \
./osprey/libm/vlogtab.o \
./osprey/libm/vsin.o \
./osprey/libm/vsinf.o \
./osprey/libm/vsqrt.o \
./osprey/libm/vsqrtf.o \
./osprey/libm/vtan.o \
./osprey/libm/vtanf.o 

C_DEPS += \
./osprey/libm/atan2ftab.d \
./osprey/libm/atan2tab.d \
./osprey/libm/cabs.d \
./osprey/libm/cabsf.d \
./osprey/libm/drem.d \
./osprey/libm/expftab.d \
./osprey/libm/exptab.d \
./osprey/libm/fmod.d \
./osprey/libm/logftab.d \
./osprey/libm/logtab.d \
./osprey/libm/powtab.d \
./osprey/libm/vacos.d \
./osprey/libm/vacosf.d \
./osprey/libm/vasin.d \
./osprey/libm/vasinf.d \
./osprey/libm/vatan.d \
./osprey/libm/vatanf.d \
./osprey/libm/vcis.d \
./osprey/libm/vcisf.d \
./osprey/libm/vcos.d \
./osprey/libm/vcosf.d \
./osprey/libm/vexp.d \
./osprey/libm/vexpf.d \
./osprey/libm/vexpftab.d \
./osprey/libm/vexptab.d \
./osprey/libm/vlog.d \
./osprey/libm/vlog10.d \
./osprey/libm/vlog10f.d \
./osprey/libm/vlogf.d \
./osprey/libm/vlogftab.d \
./osprey/libm/vlogtab.d \
./osprey/libm/vsin.d \
./osprey/libm/vsinf.d \
./osprey/libm/vsqrt.d \
./osprey/libm/vsqrtf.d \
./osprey/libm/vtan.d \
./osprey/libm/vtanf.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libm/%.o: ../osprey/libm/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


