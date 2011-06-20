################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/rs6000/dp-bit.c \
../osprey/kg++fe/gnu/rs6000/fp-bit.c \
../osprey/kg++fe/gnu/rs6000/genrtl.c \
../osprey/kg++fe/gnu/rs6000/gtype-desc.c \
../osprey/kg++fe/gnu/rs6000/insn-attrtab.c \
../osprey/kg++fe/gnu/rs6000/insn-conditions.c \
../osprey/kg++fe/gnu/rs6000/insn-emit.c \
../osprey/kg++fe/gnu/rs6000/insn-extract.c \
../osprey/kg++fe/gnu/rs6000/insn-opinit.c \
../osprey/kg++fe/gnu/rs6000/insn-output.c \
../osprey/kg++fe/gnu/rs6000/insn-peep.c \
../osprey/kg++fe/gnu/rs6000/insn-recog.c \
../osprey/kg++fe/gnu/rs6000/print-rtl1.c 

OBJS += \
./osprey/kg++fe/gnu/rs6000/dp-bit.o \
./osprey/kg++fe/gnu/rs6000/fp-bit.o \
./osprey/kg++fe/gnu/rs6000/genrtl.o \
./osprey/kg++fe/gnu/rs6000/gtype-desc.o \
./osprey/kg++fe/gnu/rs6000/insn-attrtab.o \
./osprey/kg++fe/gnu/rs6000/insn-conditions.o \
./osprey/kg++fe/gnu/rs6000/insn-emit.o \
./osprey/kg++fe/gnu/rs6000/insn-extract.o \
./osprey/kg++fe/gnu/rs6000/insn-opinit.o \
./osprey/kg++fe/gnu/rs6000/insn-output.o \
./osprey/kg++fe/gnu/rs6000/insn-peep.o \
./osprey/kg++fe/gnu/rs6000/insn-recog.o \
./osprey/kg++fe/gnu/rs6000/print-rtl1.o 

C_DEPS += \
./osprey/kg++fe/gnu/rs6000/dp-bit.d \
./osprey/kg++fe/gnu/rs6000/fp-bit.d \
./osprey/kg++fe/gnu/rs6000/genrtl.d \
./osprey/kg++fe/gnu/rs6000/gtype-desc.d \
./osprey/kg++fe/gnu/rs6000/insn-attrtab.d \
./osprey/kg++fe/gnu/rs6000/insn-conditions.d \
./osprey/kg++fe/gnu/rs6000/insn-emit.d \
./osprey/kg++fe/gnu/rs6000/insn-extract.d \
./osprey/kg++fe/gnu/rs6000/insn-opinit.d \
./osprey/kg++fe/gnu/rs6000/insn-output.d \
./osprey/kg++fe/gnu/rs6000/insn-peep.d \
./osprey/kg++fe/gnu/rs6000/insn-recog.d \
./osprey/kg++fe/gnu/rs6000/print-rtl1.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/rs6000/%.o: ../osprey/kg++fe/gnu/rs6000/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


