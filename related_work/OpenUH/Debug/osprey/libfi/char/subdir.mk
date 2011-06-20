################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libfi/char/adjustl.c \
../osprey/libfi/char/adjustr.c \
../osprey/libfi/char/char.c \
../osprey/libfi/char/f90_adjustl.c \
../osprey/libfi/char/f90_adjustr.c \
../osprey/libfi/char/f90_char.c \
../osprey/libfi/char/f90_fcd_blank.c \
../osprey/libfi/char/f90_fcd_cmp_eq.c \
../osprey/libfi/char/f90_fcd_cmp_gt.c \
../osprey/libfi/char/f90_fcd_cmp_lt.c \
../osprey/libfi/char/f90_fcd_copy.c \
../osprey/libfi/char/f90_ichar.c \
../osprey/libfi/char/f90_index.c \
../osprey/libfi/char/f90_len.c \
../osprey/libfi/char/f90_len_trim.c \
../osprey/libfi/char/f90_pause.c \
../osprey/libfi/char/f90_repeat.c \
../osprey/libfi/char/f90_scan.c \
../osprey/libfi/char/f90_stop.c \
../osprey/libfi/char/f90_trim.c \
../osprey/libfi/char/f90_verify.c \
../osprey/libfi/char/ichar.c \
../osprey/libfi/char/index.c \
../osprey/libfi/char/len.c \
../osprey/libfi/char/len_trim.c \
../osprey/libfi/char/repeat.c \
../osprey/libfi/char/scan.c \
../osprey/libfi/char/trim.c \
../osprey/libfi/char/verify.c 

OBJS += \
./osprey/libfi/char/adjustl.o \
./osprey/libfi/char/adjustr.o \
./osprey/libfi/char/char.o \
./osprey/libfi/char/f90_adjustl.o \
./osprey/libfi/char/f90_adjustr.o \
./osprey/libfi/char/f90_char.o \
./osprey/libfi/char/f90_fcd_blank.o \
./osprey/libfi/char/f90_fcd_cmp_eq.o \
./osprey/libfi/char/f90_fcd_cmp_gt.o \
./osprey/libfi/char/f90_fcd_cmp_lt.o \
./osprey/libfi/char/f90_fcd_copy.o \
./osprey/libfi/char/f90_ichar.o \
./osprey/libfi/char/f90_index.o \
./osprey/libfi/char/f90_len.o \
./osprey/libfi/char/f90_len_trim.o \
./osprey/libfi/char/f90_pause.o \
./osprey/libfi/char/f90_repeat.o \
./osprey/libfi/char/f90_scan.o \
./osprey/libfi/char/f90_stop.o \
./osprey/libfi/char/f90_trim.o \
./osprey/libfi/char/f90_verify.o \
./osprey/libfi/char/ichar.o \
./osprey/libfi/char/index.o \
./osprey/libfi/char/len.o \
./osprey/libfi/char/len_trim.o \
./osprey/libfi/char/repeat.o \
./osprey/libfi/char/scan.o \
./osprey/libfi/char/trim.o \
./osprey/libfi/char/verify.o 

C_DEPS += \
./osprey/libfi/char/adjustl.d \
./osprey/libfi/char/adjustr.d \
./osprey/libfi/char/char.d \
./osprey/libfi/char/f90_adjustl.d \
./osprey/libfi/char/f90_adjustr.d \
./osprey/libfi/char/f90_char.d \
./osprey/libfi/char/f90_fcd_blank.d \
./osprey/libfi/char/f90_fcd_cmp_eq.d \
./osprey/libfi/char/f90_fcd_cmp_gt.d \
./osprey/libfi/char/f90_fcd_cmp_lt.d \
./osprey/libfi/char/f90_fcd_copy.d \
./osprey/libfi/char/f90_ichar.d \
./osprey/libfi/char/f90_index.d \
./osprey/libfi/char/f90_len.d \
./osprey/libfi/char/f90_len_trim.d \
./osprey/libfi/char/f90_pause.d \
./osprey/libfi/char/f90_repeat.d \
./osprey/libfi/char/f90_scan.d \
./osprey/libfi/char/f90_stop.d \
./osprey/libfi/char/f90_trim.d \
./osprey/libfi/char/f90_verify.d \
./osprey/libfi/char/ichar.d \
./osprey/libfi/char/index.d \
./osprey/libfi/char/len.d \
./osprey/libfi/char/len_trim.d \
./osprey/libfi/char/repeat.d \
./osprey/libfi/char/scan.d \
./osprey/libfi/char/trim.d \
./osprey/libfi/char/verify.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libfi/char/%.o: ../osprey/libfi/char/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


