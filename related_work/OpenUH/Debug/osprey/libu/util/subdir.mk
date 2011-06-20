################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libu/util/_string_cmp.c \
../osprey/libu/util/abort.c \
../osprey/libu/util/asnenv.c \
../osprey/libu/util/asnlib.c \
../osprey/libu/util/asnparse.c \
../osprey/libu/util/asnquery.c \
../osprey/libu/util/asntools.c \
../osprey/libu/util/btd.c \
../osprey/libu/util/bto.c \
../osprey/libu/util/c2fcpy.c \
../osprey/libu/util/cliblevel.c \
../osprey/libu/util/dtb.c \
../osprey/libu/util/errexit.c \
../osprey/libu/util/f2ccpy.c \
../osprey/libu/util/fsztab.c \
../osprey/libu/util/getarg.c \
../osprey/libu/util/getcallerinfo.c \
../osprey/libu/util/gethmc.c \
../osprey/libu/util/gtstdptr.c \
../osprey/libu/util/ihost.c \
../osprey/libu/util/ishell.c \
../osprey/libu/util/mtcpu.c \
../osprey/libu/util/otb.c \
../osprey/libu/util/pack_c.c \
../osprey/libu/util/prealloc.c \
../osprey/libu/util/rbn.c \
../osprey/libu/util/remark.c \
../osprey/libu/util/rnb.c \
../osprey/libu/util/rtc.c \
../osprey/libu/util/samefile.c \
../osprey/libu/util/second.c \
../osprey/libu/util/secondr.c \
../osprey/libu/util/segrstuf.c \
../osprey/libu/util/sup.c \
../osprey/libu/util/target.c \
../osprey/libu/util/timef.c \
../osprey/libu/util/tremain.c \
../osprey/libu/util/tsecnd.c \
../osprey/libu/util/unpack_c.c 

OBJS += \
./osprey/libu/util/_string_cmp.o \
./osprey/libu/util/abort.o \
./osprey/libu/util/asnenv.o \
./osprey/libu/util/asnlib.o \
./osprey/libu/util/asnparse.o \
./osprey/libu/util/asnquery.o \
./osprey/libu/util/asntools.o \
./osprey/libu/util/btd.o \
./osprey/libu/util/bto.o \
./osprey/libu/util/c2fcpy.o \
./osprey/libu/util/cliblevel.o \
./osprey/libu/util/dtb.o \
./osprey/libu/util/errexit.o \
./osprey/libu/util/f2ccpy.o \
./osprey/libu/util/fsztab.o \
./osprey/libu/util/getarg.o \
./osprey/libu/util/getcallerinfo.o \
./osprey/libu/util/gethmc.o \
./osprey/libu/util/gtstdptr.o \
./osprey/libu/util/ihost.o \
./osprey/libu/util/ishell.o \
./osprey/libu/util/mtcpu.o \
./osprey/libu/util/otb.o \
./osprey/libu/util/pack_c.o \
./osprey/libu/util/prealloc.o \
./osprey/libu/util/rbn.o \
./osprey/libu/util/remark.o \
./osprey/libu/util/rnb.o \
./osprey/libu/util/rtc.o \
./osprey/libu/util/samefile.o \
./osprey/libu/util/second.o \
./osprey/libu/util/secondr.o \
./osprey/libu/util/segrstuf.o \
./osprey/libu/util/sup.o \
./osprey/libu/util/target.o \
./osprey/libu/util/timef.o \
./osprey/libu/util/tremain.o \
./osprey/libu/util/tsecnd.o \
./osprey/libu/util/unpack_c.o 

C_DEPS += \
./osprey/libu/util/_string_cmp.d \
./osprey/libu/util/abort.d \
./osprey/libu/util/asnenv.d \
./osprey/libu/util/asnlib.d \
./osprey/libu/util/asnparse.d \
./osprey/libu/util/asnquery.d \
./osprey/libu/util/asntools.d \
./osprey/libu/util/btd.d \
./osprey/libu/util/bto.d \
./osprey/libu/util/c2fcpy.d \
./osprey/libu/util/cliblevel.d \
./osprey/libu/util/dtb.d \
./osprey/libu/util/errexit.d \
./osprey/libu/util/f2ccpy.d \
./osprey/libu/util/fsztab.d \
./osprey/libu/util/getarg.d \
./osprey/libu/util/getcallerinfo.d \
./osprey/libu/util/gethmc.d \
./osprey/libu/util/gtstdptr.d \
./osprey/libu/util/ihost.d \
./osprey/libu/util/ishell.d \
./osprey/libu/util/mtcpu.d \
./osprey/libu/util/otb.d \
./osprey/libu/util/pack_c.d \
./osprey/libu/util/prealloc.d \
./osprey/libu/util/rbn.d \
./osprey/libu/util/remark.d \
./osprey/libu/util/rnb.d \
./osprey/libu/util/rtc.d \
./osprey/libu/util/samefile.d \
./osprey/libu/util/second.d \
./osprey/libu/util/secondr.d \
./osprey/libu/util/segrstuf.d \
./osprey/libu/util/sup.d \
./osprey/libu/util/target.d \
./osprey/libu/util/timef.d \
./osprey/libu/util/tremain.d \
./osprey/libu/util/tsecnd.d \
./osprey/libu/util/unpack_c.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libu/util/%.o: ../osprey/libu/util/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


