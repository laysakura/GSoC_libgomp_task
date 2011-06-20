################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/MIPS/dp-bit.c \
../osprey/kg++fe/gnu/MIPS/fp-bit.c \
../osprey/kg++fe/gnu/MIPS/genrtl.c \
../osprey/kg++fe/gnu/MIPS/gtype-desc.c \
../osprey/kg++fe/gnu/MIPS/insn-attrtab.c \
../osprey/kg++fe/gnu/MIPS/insn-conditions.c \
../osprey/kg++fe/gnu/MIPS/insn-emit.c \
../osprey/kg++fe/gnu/MIPS/insn-extract.c \
../osprey/kg++fe/gnu/MIPS/insn-opinit.c \
../osprey/kg++fe/gnu/MIPS/insn-output.c \
../osprey/kg++fe/gnu/MIPS/insn-peep.c \
../osprey/kg++fe/gnu/MIPS/insn-recog.c \
../osprey/kg++fe/gnu/MIPS/obstack.c \
../osprey/kg++fe/gnu/MIPS/print-rtl1.c 

OBJS += \
./osprey/kg++fe/gnu/MIPS/dp-bit.o \
./osprey/kg++fe/gnu/MIPS/fp-bit.o \
./osprey/kg++fe/gnu/MIPS/genrtl.o \
./osprey/kg++fe/gnu/MIPS/gtype-desc.o \
./osprey/kg++fe/gnu/MIPS/insn-attrtab.o \
./osprey/kg++fe/gnu/MIPS/insn-conditions.o \
./osprey/kg++fe/gnu/MIPS/insn-emit.o \
./osprey/kg++fe/gnu/MIPS/insn-extract.o \
./osprey/kg++fe/gnu/MIPS/insn-opinit.o \
./osprey/kg++fe/gnu/MIPS/insn-output.o \
./osprey/kg++fe/gnu/MIPS/insn-peep.o \
./osprey/kg++fe/gnu/MIPS/insn-recog.o \
./osprey/kg++fe/gnu/MIPS/obstack.o \
./osprey/kg++fe/gnu/MIPS/print-rtl1.o 

C_DEPS += \
./osprey/kg++fe/gnu/MIPS/dp-bit.d \
./osprey/kg++fe/gnu/MIPS/fp-bit.d \
./osprey/kg++fe/gnu/MIPS/genrtl.d \
./osprey/kg++fe/gnu/MIPS/gtype-desc.d \
./osprey/kg++fe/gnu/MIPS/insn-attrtab.d \
./osprey/kg++fe/gnu/MIPS/insn-conditions.d \
./osprey/kg++fe/gnu/MIPS/insn-emit.d \
./osprey/kg++fe/gnu/MIPS/insn-extract.d \
./osprey/kg++fe/gnu/MIPS/insn-opinit.d \
./osprey/kg++fe/gnu/MIPS/insn-output.d \
./osprey/kg++fe/gnu/MIPS/insn-peep.d \
./osprey/kg++fe/gnu/MIPS/insn-recog.d \
./osprey/kg++fe/gnu/MIPS/obstack.d \
./osprey/kg++fe/gnu/MIPS/print-rtl1.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/MIPS/%.o: ../osprey/kg++fe/gnu/MIPS/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


