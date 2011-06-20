################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libunwind/producer/body.c \
../osprey/libunwind/producer/bsp.c \
../osprey/libunwind/producer/bspstore.c \
../osprey/libunwind/producer/dumpelf.c \
../osprey/libunwind/producer/fpsr.c \
../osprey/libunwind/producer/header.c \
../osprey/libunwind/producer/lc.c \
../osprey/libunwind/producer/memstack.c \
../osprey/libunwind/producer/overall.c \
../osprey/libunwind/producer/pfs.c \
../osprey/libunwind/producer/preds.c \
../osprey/libunwind/producer/preserve.c \
../osprey/libunwind/producer/priunat.c \
../osprey/libunwind/producer/producer.c \
../osprey/libunwind/producer/rnat.c \
../osprey/libunwind/producer/rp.c \
../osprey/libunwind/producer/spill.c \
../osprey/libunwind/producer/unat.c 

OBJS += \
./osprey/libunwind/producer/body.o \
./osprey/libunwind/producer/bsp.o \
./osprey/libunwind/producer/bspstore.o \
./osprey/libunwind/producer/dumpelf.o \
./osprey/libunwind/producer/fpsr.o \
./osprey/libunwind/producer/header.o \
./osprey/libunwind/producer/lc.o \
./osprey/libunwind/producer/memstack.o \
./osprey/libunwind/producer/overall.o \
./osprey/libunwind/producer/pfs.o \
./osprey/libunwind/producer/preds.o \
./osprey/libunwind/producer/preserve.o \
./osprey/libunwind/producer/priunat.o \
./osprey/libunwind/producer/producer.o \
./osprey/libunwind/producer/rnat.o \
./osprey/libunwind/producer/rp.o \
./osprey/libunwind/producer/spill.o \
./osprey/libunwind/producer/unat.o 

C_DEPS += \
./osprey/libunwind/producer/body.d \
./osprey/libunwind/producer/bsp.d \
./osprey/libunwind/producer/bspstore.d \
./osprey/libunwind/producer/dumpelf.d \
./osprey/libunwind/producer/fpsr.d \
./osprey/libunwind/producer/header.d \
./osprey/libunwind/producer/lc.d \
./osprey/libunwind/producer/memstack.d \
./osprey/libunwind/producer/overall.d \
./osprey/libunwind/producer/pfs.d \
./osprey/libunwind/producer/preds.d \
./osprey/libunwind/producer/preserve.d \
./osprey/libunwind/producer/priunat.d \
./osprey/libunwind/producer/producer.d \
./osprey/libunwind/producer/rnat.d \
./osprey/libunwind/producer/rp.d \
./osprey/libunwind/producer/spill.d \
./osprey/libunwind/producer/unat.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libunwind/producer/%.o: ../osprey/libunwind/producer/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


