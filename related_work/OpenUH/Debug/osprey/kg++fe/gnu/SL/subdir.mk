################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/SL/dp-bit.c \
../osprey/kg++fe/gnu/SL/fp-bit.c \
../osprey/kg++fe/gnu/SL/genrtl.c \
../osprey/kg++fe/gnu/SL/gtype-desc.c \
../osprey/kg++fe/gnu/SL/insn-attrtab.c \
../osprey/kg++fe/gnu/SL/insn-conditions.c \
../osprey/kg++fe/gnu/SL/insn-emit.c \
../osprey/kg++fe/gnu/SL/insn-extract.c \
../osprey/kg++fe/gnu/SL/insn-opinit.c \
../osprey/kg++fe/gnu/SL/insn-output.c \
../osprey/kg++fe/gnu/SL/insn-peep.c \
../osprey/kg++fe/gnu/SL/insn-recog.c \
../osprey/kg++fe/gnu/SL/obstack.c \
../osprey/kg++fe/gnu/SL/print-rtl1.c 

OBJS += \
./osprey/kg++fe/gnu/SL/dp-bit.o \
./osprey/kg++fe/gnu/SL/fp-bit.o \
./osprey/kg++fe/gnu/SL/genrtl.o \
./osprey/kg++fe/gnu/SL/gtype-desc.o \
./osprey/kg++fe/gnu/SL/insn-attrtab.o \
./osprey/kg++fe/gnu/SL/insn-conditions.o \
./osprey/kg++fe/gnu/SL/insn-emit.o \
./osprey/kg++fe/gnu/SL/insn-extract.o \
./osprey/kg++fe/gnu/SL/insn-opinit.o \
./osprey/kg++fe/gnu/SL/insn-output.o \
./osprey/kg++fe/gnu/SL/insn-peep.o \
./osprey/kg++fe/gnu/SL/insn-recog.o \
./osprey/kg++fe/gnu/SL/obstack.o \
./osprey/kg++fe/gnu/SL/print-rtl1.o 

C_DEPS += \
./osprey/kg++fe/gnu/SL/dp-bit.d \
./osprey/kg++fe/gnu/SL/fp-bit.d \
./osprey/kg++fe/gnu/SL/genrtl.d \
./osprey/kg++fe/gnu/SL/gtype-desc.d \
./osprey/kg++fe/gnu/SL/insn-attrtab.d \
./osprey/kg++fe/gnu/SL/insn-conditions.d \
./osprey/kg++fe/gnu/SL/insn-emit.d \
./osprey/kg++fe/gnu/SL/insn-extract.d \
./osprey/kg++fe/gnu/SL/insn-opinit.d \
./osprey/kg++fe/gnu/SL/insn-output.d \
./osprey/kg++fe/gnu/SL/insn-peep.d \
./osprey/kg++fe/gnu/SL/insn-recog.d \
./osprey/kg++fe/gnu/SL/obstack.d \
./osprey/kg++fe/gnu/SL/print-rtl1.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/SL/%.o: ../osprey/kg++fe/gnu/SL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


