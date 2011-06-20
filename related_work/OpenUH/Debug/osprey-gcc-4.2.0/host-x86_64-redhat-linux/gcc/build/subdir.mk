################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/errors.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gcov-iov.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genattr.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genattrtab.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genautomata.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gencheck.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gencodes.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genconditions.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gencondmd.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genconfig.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genconstants.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genemit.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genextract.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genflags.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gengenrtl.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gengtype-lex.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gengtype-yacc.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gengtype.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genmddeps.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genmodes.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genopinit.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genoutput.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genpeep.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genpreds.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/genrecog.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gensupport.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/ggc-none.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/min-insn-modes.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/print-rtl.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/read-rtl.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/rtl.o \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/vec.o 

C_SRCS += \
../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gencondmd.c 

OBJS += \
./osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gencondmd.o 

C_DEPS += \
./osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/gencondmd.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/%.o: ../osprey-gcc-4.2.0/host-x86_64-redhat-linux/gcc/build/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


