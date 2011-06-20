################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libfi/array/all.c \
../osprey/libfi/array/all_gen.c \
../osprey/libfi/array/allocated.c \
../osprey/libfi/array/any.c \
../osprey/libfi/array/any_gen.c \
../osprey/libfi/array/copyinout.c \
../osprey/libfi/array/count.c \
../osprey/libfi/array/count_gen.c \
../osprey/libfi/array/cshift.c \
../osprey/libfi/array/cshift_gen.c \
../osprey/libfi/array/eoshift.c \
../osprey/libfi/array/eoshift_gen.c \
../osprey/libfi/array/lbound.c \
../osprey/libfi/array/maxloc.c \
../osprey/libfi/array/maxloc_gen.c \
../osprey/libfi/array/maxval.c \
../osprey/libfi/array/maxval0_gen.c \
../osprey/libfi/array/maxval_gen.c \
../osprey/libfi/array/minloc.c \
../osprey/libfi/array/minloc_gen.c \
../osprey/libfi/array/minval.c \
../osprey/libfi/array/minval0_gen.c \
../osprey/libfi/array/minval_gen.c \
../osprey/libfi/array/pack.c \
../osprey/libfi/array/pack_gen.c \
../osprey/libfi/array/reshape.c \
../osprey/libfi/array/reshape_gen.c \
../osprey/libfi/array/shape.c \
../osprey/libfi/array/size.c \
../osprey/libfi/array/spread.c \
../osprey/libfi/array/spread_gen.c \
../osprey/libfi/array/trans@.c \
../osprey/libfi/array/trans_gen.c \
../osprey/libfi/array/transfer.c \
../osprey/libfi/array/transfer_gen.c \
../osprey/libfi/array/ubound.c \
../osprey/libfi/array/unpack.c \
../osprey/libfi/array/unpack_gen.c 

OBJS += \
./osprey/libfi/array/all.o \
./osprey/libfi/array/all_gen.o \
./osprey/libfi/array/allocated.o \
./osprey/libfi/array/any.o \
./osprey/libfi/array/any_gen.o \
./osprey/libfi/array/copyinout.o \
./osprey/libfi/array/count.o \
./osprey/libfi/array/count_gen.o \
./osprey/libfi/array/cshift.o \
./osprey/libfi/array/cshift_gen.o \
./osprey/libfi/array/eoshift.o \
./osprey/libfi/array/eoshift_gen.o \
./osprey/libfi/array/lbound.o \
./osprey/libfi/array/maxloc.o \
./osprey/libfi/array/maxloc_gen.o \
./osprey/libfi/array/maxval.o \
./osprey/libfi/array/maxval0_gen.o \
./osprey/libfi/array/maxval_gen.o \
./osprey/libfi/array/minloc.o \
./osprey/libfi/array/minloc_gen.o \
./osprey/libfi/array/minval.o \
./osprey/libfi/array/minval0_gen.o \
./osprey/libfi/array/minval_gen.o \
./osprey/libfi/array/pack.o \
./osprey/libfi/array/pack_gen.o \
./osprey/libfi/array/reshape.o \
./osprey/libfi/array/reshape_gen.o \
./osprey/libfi/array/shape.o \
./osprey/libfi/array/size.o \
./osprey/libfi/array/spread.o \
./osprey/libfi/array/spread_gen.o \
./osprey/libfi/array/trans@.o \
./osprey/libfi/array/trans_gen.o \
./osprey/libfi/array/transfer.o \
./osprey/libfi/array/transfer_gen.o \
./osprey/libfi/array/ubound.o \
./osprey/libfi/array/unpack.o \
./osprey/libfi/array/unpack_gen.o 

C_DEPS += \
./osprey/libfi/array/all.d \
./osprey/libfi/array/all_gen.d \
./osprey/libfi/array/allocated.d \
./osprey/libfi/array/any.d \
./osprey/libfi/array/any_gen.d \
./osprey/libfi/array/copyinout.d \
./osprey/libfi/array/count.d \
./osprey/libfi/array/count_gen.d \
./osprey/libfi/array/cshift.d \
./osprey/libfi/array/cshift_gen.d \
./osprey/libfi/array/eoshift.d \
./osprey/libfi/array/eoshift_gen.d \
./osprey/libfi/array/lbound.d \
./osprey/libfi/array/maxloc.d \
./osprey/libfi/array/maxloc_gen.d \
./osprey/libfi/array/maxval.d \
./osprey/libfi/array/maxval0_gen.d \
./osprey/libfi/array/maxval_gen.d \
./osprey/libfi/array/minloc.d \
./osprey/libfi/array/minloc_gen.d \
./osprey/libfi/array/minval.d \
./osprey/libfi/array/minval0_gen.d \
./osprey/libfi/array/minval_gen.d \
./osprey/libfi/array/pack.d \
./osprey/libfi/array/pack_gen.d \
./osprey/libfi/array/reshape.d \
./osprey/libfi/array/reshape_gen.d \
./osprey/libfi/array/shape.d \
./osprey/libfi/array/size.d \
./osprey/libfi/array/spread.d \
./osprey/libfi/array/spread_gen.d \
./osprey/libfi/array/trans@.d \
./osprey/libfi/array/trans_gen.d \
./osprey/libfi/array/transfer.d \
./osprey/libfi/array/transfer_gen.d \
./osprey/libfi/array/ubound.d \
./osprey/libfi/array/unpack.d \
./osprey/libfi/array/unpack_gen.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libfi/array/%.o: ../osprey/libfi/array/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libfi/array/trans@.o: ../osprey/libfi/array/trans@.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"osprey/libfi/array/trans@.d" -MT"osprey/libfi/array/trans@.d" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


