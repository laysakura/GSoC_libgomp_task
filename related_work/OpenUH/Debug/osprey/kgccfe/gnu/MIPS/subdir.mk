################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/MIPS/dp-bit.c \
../osprey/kgccfe/gnu/MIPS/fp-bit.c \
../osprey/kgccfe/gnu/MIPS/genrtl.c \
../osprey/kgccfe/gnu/MIPS/gtype-desc.c \
../osprey/kgccfe/gnu/MIPS/insn-attrtab.c \
../osprey/kgccfe/gnu/MIPS/insn-conditions.c \
../osprey/kgccfe/gnu/MIPS/insn-emit.c \
../osprey/kgccfe/gnu/MIPS/insn-extract.c \
../osprey/kgccfe/gnu/MIPS/insn-opinit.c \
../osprey/kgccfe/gnu/MIPS/insn-output.c \
../osprey/kgccfe/gnu/MIPS/insn-peep.c \
../osprey/kgccfe/gnu/MIPS/insn-recog.c \
../osprey/kgccfe/gnu/MIPS/obstack.c \
../osprey/kgccfe/gnu/MIPS/print-rtl1.c 

OBJS += \
./osprey/kgccfe/gnu/MIPS/dp-bit.o \
./osprey/kgccfe/gnu/MIPS/fp-bit.o \
./osprey/kgccfe/gnu/MIPS/genrtl.o \
./osprey/kgccfe/gnu/MIPS/gtype-desc.o \
./osprey/kgccfe/gnu/MIPS/insn-attrtab.o \
./osprey/kgccfe/gnu/MIPS/insn-conditions.o \
./osprey/kgccfe/gnu/MIPS/insn-emit.o \
./osprey/kgccfe/gnu/MIPS/insn-extract.o \
./osprey/kgccfe/gnu/MIPS/insn-opinit.o \
./osprey/kgccfe/gnu/MIPS/insn-output.o \
./osprey/kgccfe/gnu/MIPS/insn-peep.o \
./osprey/kgccfe/gnu/MIPS/insn-recog.o \
./osprey/kgccfe/gnu/MIPS/obstack.o \
./osprey/kgccfe/gnu/MIPS/print-rtl1.o 

C_DEPS += \
./osprey/kgccfe/gnu/MIPS/dp-bit.d \
./osprey/kgccfe/gnu/MIPS/fp-bit.d \
./osprey/kgccfe/gnu/MIPS/genrtl.d \
./osprey/kgccfe/gnu/MIPS/gtype-desc.d \
./osprey/kgccfe/gnu/MIPS/insn-attrtab.d \
./osprey/kgccfe/gnu/MIPS/insn-conditions.d \
./osprey/kgccfe/gnu/MIPS/insn-emit.d \
./osprey/kgccfe/gnu/MIPS/insn-extract.d \
./osprey/kgccfe/gnu/MIPS/insn-opinit.d \
./osprey/kgccfe/gnu/MIPS/insn-output.d \
./osprey/kgccfe/gnu/MIPS/insn-peep.d \
./osprey/kgccfe/gnu/MIPS/insn-recog.d \
./osprey/kgccfe/gnu/MIPS/obstack.d \
./osprey/kgccfe/gnu/MIPS/print-rtl1.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/MIPS/%.o: ../osprey/kgccfe/gnu/MIPS/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


