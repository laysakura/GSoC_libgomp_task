################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/SL/dp-bit.c \
../osprey/kgccfe/gnu/SL/fp-bit.c \
../osprey/kgccfe/gnu/SL/genrtl.c \
../osprey/kgccfe/gnu/SL/gtype-desc.c \
../osprey/kgccfe/gnu/SL/insn-attrtab.c \
../osprey/kgccfe/gnu/SL/insn-conditions.c \
../osprey/kgccfe/gnu/SL/insn-emit.c \
../osprey/kgccfe/gnu/SL/insn-extract.c \
../osprey/kgccfe/gnu/SL/insn-opinit.c \
../osprey/kgccfe/gnu/SL/insn-output.c \
../osprey/kgccfe/gnu/SL/insn-peep.c \
../osprey/kgccfe/gnu/SL/insn-recog.c \
../osprey/kgccfe/gnu/SL/obstack.c \
../osprey/kgccfe/gnu/SL/print-rtl1.c 

OBJS += \
./osprey/kgccfe/gnu/SL/dp-bit.o \
./osprey/kgccfe/gnu/SL/fp-bit.o \
./osprey/kgccfe/gnu/SL/genrtl.o \
./osprey/kgccfe/gnu/SL/gtype-desc.o \
./osprey/kgccfe/gnu/SL/insn-attrtab.o \
./osprey/kgccfe/gnu/SL/insn-conditions.o \
./osprey/kgccfe/gnu/SL/insn-emit.o \
./osprey/kgccfe/gnu/SL/insn-extract.o \
./osprey/kgccfe/gnu/SL/insn-opinit.o \
./osprey/kgccfe/gnu/SL/insn-output.o \
./osprey/kgccfe/gnu/SL/insn-peep.o \
./osprey/kgccfe/gnu/SL/insn-recog.o \
./osprey/kgccfe/gnu/SL/obstack.o \
./osprey/kgccfe/gnu/SL/print-rtl1.o 

C_DEPS += \
./osprey/kgccfe/gnu/SL/dp-bit.d \
./osprey/kgccfe/gnu/SL/fp-bit.d \
./osprey/kgccfe/gnu/SL/genrtl.d \
./osprey/kgccfe/gnu/SL/gtype-desc.d \
./osprey/kgccfe/gnu/SL/insn-attrtab.d \
./osprey/kgccfe/gnu/SL/insn-conditions.d \
./osprey/kgccfe/gnu/SL/insn-emit.d \
./osprey/kgccfe/gnu/SL/insn-extract.d \
./osprey/kgccfe/gnu/SL/insn-opinit.d \
./osprey/kgccfe/gnu/SL/insn-output.d \
./osprey/kgccfe/gnu/SL/insn-peep.d \
./osprey/kgccfe/gnu/SL/insn-recog.d \
./osprey/kgccfe/gnu/SL/obstack.d \
./osprey/kgccfe/gnu/SL/print-rtl1.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/SL/%.o: ../osprey/kgccfe/gnu/SL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


