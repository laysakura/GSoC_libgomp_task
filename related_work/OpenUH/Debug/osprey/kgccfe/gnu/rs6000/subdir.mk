################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/rs6000/dp-bit.c \
../osprey/kgccfe/gnu/rs6000/fp-bit.c \
../osprey/kgccfe/gnu/rs6000/genrtl.c \
../osprey/kgccfe/gnu/rs6000/gtype-desc.c \
../osprey/kgccfe/gnu/rs6000/insn-attrtab.c \
../osprey/kgccfe/gnu/rs6000/insn-conditions.c \
../osprey/kgccfe/gnu/rs6000/insn-emit.c \
../osprey/kgccfe/gnu/rs6000/insn-extract.c \
../osprey/kgccfe/gnu/rs6000/insn-opinit.c \
../osprey/kgccfe/gnu/rs6000/insn-output.c \
../osprey/kgccfe/gnu/rs6000/insn-peep.c \
../osprey/kgccfe/gnu/rs6000/insn-recog.c \
../osprey/kgccfe/gnu/rs6000/print-rtl1.c 

OBJS += \
./osprey/kgccfe/gnu/rs6000/dp-bit.o \
./osprey/kgccfe/gnu/rs6000/fp-bit.o \
./osprey/kgccfe/gnu/rs6000/genrtl.o \
./osprey/kgccfe/gnu/rs6000/gtype-desc.o \
./osprey/kgccfe/gnu/rs6000/insn-attrtab.o \
./osprey/kgccfe/gnu/rs6000/insn-conditions.o \
./osprey/kgccfe/gnu/rs6000/insn-emit.o \
./osprey/kgccfe/gnu/rs6000/insn-extract.o \
./osprey/kgccfe/gnu/rs6000/insn-opinit.o \
./osprey/kgccfe/gnu/rs6000/insn-output.o \
./osprey/kgccfe/gnu/rs6000/insn-peep.o \
./osprey/kgccfe/gnu/rs6000/insn-recog.o \
./osprey/kgccfe/gnu/rs6000/print-rtl1.o 

C_DEPS += \
./osprey/kgccfe/gnu/rs6000/dp-bit.d \
./osprey/kgccfe/gnu/rs6000/fp-bit.d \
./osprey/kgccfe/gnu/rs6000/genrtl.d \
./osprey/kgccfe/gnu/rs6000/gtype-desc.d \
./osprey/kgccfe/gnu/rs6000/insn-attrtab.d \
./osprey/kgccfe/gnu/rs6000/insn-conditions.d \
./osprey/kgccfe/gnu/rs6000/insn-emit.d \
./osprey/kgccfe/gnu/rs6000/insn-extract.d \
./osprey/kgccfe/gnu/rs6000/insn-opinit.d \
./osprey/kgccfe/gnu/rs6000/insn-output.d \
./osprey/kgccfe/gnu/rs6000/insn-peep.d \
./osprey/kgccfe/gnu/rs6000/insn-recog.d \
./osprey/kgccfe/gnu/rs6000/print-rtl1.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/rs6000/%.o: ../osprey/kgccfe/gnu/rs6000/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


