################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/ppc32/dp-bit.c \
../osprey/kg++fe/gnu/ppc32/fp-bit.c \
../osprey/kg++fe/gnu/ppc32/genrtl.c \
../osprey/kg++fe/gnu/ppc32/gtype-desc.c \
../osprey/kg++fe/gnu/ppc32/insn-attrtab.c \
../osprey/kg++fe/gnu/ppc32/insn-conditions.c \
../osprey/kg++fe/gnu/ppc32/insn-emit.c \
../osprey/kg++fe/gnu/ppc32/insn-extract.c \
../osprey/kg++fe/gnu/ppc32/insn-opinit.c \
../osprey/kg++fe/gnu/ppc32/insn-output.c \
../osprey/kg++fe/gnu/ppc32/insn-peep.c \
../osprey/kg++fe/gnu/ppc32/insn-recog.c \
../osprey/kg++fe/gnu/ppc32/print-rtl1.c 

OBJS += \
./osprey/kg++fe/gnu/ppc32/dp-bit.o \
./osprey/kg++fe/gnu/ppc32/fp-bit.o \
./osprey/kg++fe/gnu/ppc32/genrtl.o \
./osprey/kg++fe/gnu/ppc32/gtype-desc.o \
./osprey/kg++fe/gnu/ppc32/insn-attrtab.o \
./osprey/kg++fe/gnu/ppc32/insn-conditions.o \
./osprey/kg++fe/gnu/ppc32/insn-emit.o \
./osprey/kg++fe/gnu/ppc32/insn-extract.o \
./osprey/kg++fe/gnu/ppc32/insn-opinit.o \
./osprey/kg++fe/gnu/ppc32/insn-output.o \
./osprey/kg++fe/gnu/ppc32/insn-peep.o \
./osprey/kg++fe/gnu/ppc32/insn-recog.o \
./osprey/kg++fe/gnu/ppc32/print-rtl1.o 

C_DEPS += \
./osprey/kg++fe/gnu/ppc32/dp-bit.d \
./osprey/kg++fe/gnu/ppc32/fp-bit.d \
./osprey/kg++fe/gnu/ppc32/genrtl.d \
./osprey/kg++fe/gnu/ppc32/gtype-desc.d \
./osprey/kg++fe/gnu/ppc32/insn-attrtab.d \
./osprey/kg++fe/gnu/ppc32/insn-conditions.d \
./osprey/kg++fe/gnu/ppc32/insn-emit.d \
./osprey/kg++fe/gnu/ppc32/insn-extract.d \
./osprey/kg++fe/gnu/ppc32/insn-opinit.d \
./osprey/kg++fe/gnu/ppc32/insn-output.d \
./osprey/kg++fe/gnu/ppc32/insn-peep.d \
./osprey/kg++fe/gnu/ppc32/insn-recog.d \
./osprey/kg++fe/gnu/ppc32/print-rtl1.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/ppc32/%.o: ../osprey/kg++fe/gnu/ppc32/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


