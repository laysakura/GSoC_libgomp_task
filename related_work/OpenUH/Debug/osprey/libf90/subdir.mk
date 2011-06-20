################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libf90/all_gen.c \
../osprey/libf90/any_gen.c \
../osprey/libf90/count_gen.c \
../osprey/libf90/cshift_gen.c \
../osprey/libf90/eoshift_gen.c \
../osprey/libf90/maxloc_gen.c \
../osprey/libf90/maxval0_gen.c \
../osprey/libf90/maxval_gen.c \
../osprey/libf90/minloc_gen.c \
../osprey/libf90/minval0_gen.c \
../osprey/libf90/minval_gen.c \
../osprey/libf90/pack_gen.c \
../osprey/libf90/prod0_gen.c \
../osprey/libf90/prod_gen.c \
../osprey/libf90/reshape_gen.c \
../osprey/libf90/spread_gen.c \
../osprey/libf90/sum0_gen.c \
../osprey/libf90/sum_gen.c \
../osprey/libf90/trans_gen.c \
../osprey/libf90/transfer_gen.c \
../osprey/libf90/unpack_gen.c 

OBJS += \
./osprey/libf90/all_gen.o \
./osprey/libf90/any_gen.o \
./osprey/libf90/count_gen.o \
./osprey/libf90/cshift_gen.o \
./osprey/libf90/eoshift_gen.o \
./osprey/libf90/maxloc_gen.o \
./osprey/libf90/maxval0_gen.o \
./osprey/libf90/maxval_gen.o \
./osprey/libf90/minloc_gen.o \
./osprey/libf90/minval0_gen.o \
./osprey/libf90/minval_gen.o \
./osprey/libf90/pack_gen.o \
./osprey/libf90/prod0_gen.o \
./osprey/libf90/prod_gen.o \
./osprey/libf90/reshape_gen.o \
./osprey/libf90/spread_gen.o \
./osprey/libf90/sum0_gen.o \
./osprey/libf90/sum_gen.o \
./osprey/libf90/trans_gen.o \
./osprey/libf90/transfer_gen.o \
./osprey/libf90/unpack_gen.o 

C_DEPS += \
./osprey/libf90/all_gen.d \
./osprey/libf90/any_gen.d \
./osprey/libf90/count_gen.d \
./osprey/libf90/cshift_gen.d \
./osprey/libf90/eoshift_gen.d \
./osprey/libf90/maxloc_gen.d \
./osprey/libf90/maxval0_gen.d \
./osprey/libf90/maxval_gen.d \
./osprey/libf90/minloc_gen.d \
./osprey/libf90/minval0_gen.d \
./osprey/libf90/minval_gen.d \
./osprey/libf90/pack_gen.d \
./osprey/libf90/prod0_gen.d \
./osprey/libf90/prod_gen.d \
./osprey/libf90/reshape_gen.d \
./osprey/libf90/spread_gen.d \
./osprey/libf90/sum0_gen.d \
./osprey/libf90/sum_gen.d \
./osprey/libf90/trans_gen.d \
./osprey/libf90/transfer_gen.d \
./osprey/libf90/unpack_gen.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libf90/%.o: ../osprey/libf90/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


