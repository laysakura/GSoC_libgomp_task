################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libI77/backspace.c \
../osprey/libI77/backward.c \
../osprey/libI77/bcompat.c \
../osprey/libI77/close.c \
../osprey/libI77/dfe.c \
../osprey/libI77/due.c \
../osprey/libI77/ecvt_mp.c \
../osprey/libI77/endfile.c \
../osprey/libI77/err.c \
../osprey/libI77/f_back.c \
../osprey/libI77/fio_direct_io.c \
../osprey/libI77/fmt.c \
../osprey/libI77/fmtlib.c \
../osprey/libI77/globals.c \
../osprey/libI77/idxio.c \
../osprey/libI77/iio.c \
../osprey/libI77/inquire.c \
../osprey/libI77/ioutil.c \
../osprey/libI77/lib.c \
../osprey/libI77/lio.c \
../osprey/libI77/lread.c \
../osprey/libI77/ltostr.c \
../osprey/libI77/mp_stub.c \
../osprey/libI77/nio.c \
../osprey/libI77/open.c \
../osprey/libI77/rdfmt.c \
../osprey/libI77/rewind.c \
../osprey/libI77/rsfe.c \
../osprey/libI77/sfe.c \
../osprey/libI77/sue.c \
../osprey/libI77/tools.c \
../osprey/libI77/uio.c \
../osprey/libI77/util.c \
../osprey/libI77/wrtfmt.c \
../osprey/libI77/wsfe.c 

OBJS += \
./osprey/libI77/backspace.o \
./osprey/libI77/backward.o \
./osprey/libI77/bcompat.o \
./osprey/libI77/close.o \
./osprey/libI77/dfe.o \
./osprey/libI77/due.o \
./osprey/libI77/ecvt_mp.o \
./osprey/libI77/endfile.o \
./osprey/libI77/err.o \
./osprey/libI77/f_back.o \
./osprey/libI77/fio_direct_io.o \
./osprey/libI77/fmt.o \
./osprey/libI77/fmtlib.o \
./osprey/libI77/globals.o \
./osprey/libI77/idxio.o \
./osprey/libI77/iio.o \
./osprey/libI77/inquire.o \
./osprey/libI77/ioutil.o \
./osprey/libI77/lib.o \
./osprey/libI77/lio.o \
./osprey/libI77/lread.o \
./osprey/libI77/ltostr.o \
./osprey/libI77/mp_stub.o \
./osprey/libI77/nio.o \
./osprey/libI77/open.o \
./osprey/libI77/rdfmt.o \
./osprey/libI77/rewind.o \
./osprey/libI77/rsfe.o \
./osprey/libI77/sfe.o \
./osprey/libI77/sue.o \
./osprey/libI77/tools.o \
./osprey/libI77/uio.o \
./osprey/libI77/util.o \
./osprey/libI77/wrtfmt.o \
./osprey/libI77/wsfe.o 

C_DEPS += \
./osprey/libI77/backspace.d \
./osprey/libI77/backward.d \
./osprey/libI77/bcompat.d \
./osprey/libI77/close.d \
./osprey/libI77/dfe.d \
./osprey/libI77/due.d \
./osprey/libI77/ecvt_mp.d \
./osprey/libI77/endfile.d \
./osprey/libI77/err.d \
./osprey/libI77/f_back.d \
./osprey/libI77/fio_direct_io.d \
./osprey/libI77/fmt.d \
./osprey/libI77/fmtlib.d \
./osprey/libI77/globals.d \
./osprey/libI77/idxio.d \
./osprey/libI77/iio.d \
./osprey/libI77/inquire.d \
./osprey/libI77/ioutil.d \
./osprey/libI77/lib.d \
./osprey/libI77/lio.d \
./osprey/libI77/lread.d \
./osprey/libI77/ltostr.d \
./osprey/libI77/mp_stub.d \
./osprey/libI77/nio.d \
./osprey/libI77/open.d \
./osprey/libI77/rdfmt.d \
./osprey/libI77/rewind.d \
./osprey/libI77/rsfe.d \
./osprey/libI77/sfe.d \
./osprey/libI77/sue.d \
./osprey/libI77/tools.d \
./osprey/libI77/uio.d \
./osprey/libI77/util.d \
./osprey/libI77/wrtfmt.d \
./osprey/libI77/wsfe.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libI77/%.o: ../osprey/libI77/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


