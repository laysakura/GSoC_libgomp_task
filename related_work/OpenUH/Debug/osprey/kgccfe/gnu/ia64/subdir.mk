################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/ia64/genrtl.c \
../osprey/kgccfe/gnu/ia64/gtype-desc.c \
../osprey/kgccfe/gnu/ia64/insn-attrtab.c \
../osprey/kgccfe/gnu/ia64/insn-conditions.c \
../osprey/kgccfe/gnu/ia64/insn-emit.c \
../osprey/kgccfe/gnu/ia64/insn-extract.c \
../osprey/kgccfe/gnu/ia64/insn-opinit.c \
../osprey/kgccfe/gnu/ia64/insn-output.c \
../osprey/kgccfe/gnu/ia64/insn-peep.c \
../osprey/kgccfe/gnu/ia64/insn-recog.c \
../osprey/kgccfe/gnu/ia64/print-rtl1.c 

OBJS += \
./osprey/kgccfe/gnu/ia64/genrtl.o \
./osprey/kgccfe/gnu/ia64/gtype-desc.o \
./osprey/kgccfe/gnu/ia64/insn-attrtab.o \
./osprey/kgccfe/gnu/ia64/insn-conditions.o \
./osprey/kgccfe/gnu/ia64/insn-emit.o \
./osprey/kgccfe/gnu/ia64/insn-extract.o \
./osprey/kgccfe/gnu/ia64/insn-opinit.o \
./osprey/kgccfe/gnu/ia64/insn-output.o \
./osprey/kgccfe/gnu/ia64/insn-peep.o \
./osprey/kgccfe/gnu/ia64/insn-recog.o \
./osprey/kgccfe/gnu/ia64/print-rtl1.o 

C_DEPS += \
./osprey/kgccfe/gnu/ia64/genrtl.d \
./osprey/kgccfe/gnu/ia64/gtype-desc.d \
./osprey/kgccfe/gnu/ia64/insn-attrtab.d \
./osprey/kgccfe/gnu/ia64/insn-conditions.d \
./osprey/kgccfe/gnu/ia64/insn-emit.d \
./osprey/kgccfe/gnu/ia64/insn-extract.d \
./osprey/kgccfe/gnu/ia64/insn-opinit.d \
./osprey/kgccfe/gnu/ia64/insn-output.d \
./osprey/kgccfe/gnu/ia64/insn-peep.d \
./osprey/kgccfe/gnu/ia64/insn-recog.d \
./osprey/kgccfe/gnu/ia64/print-rtl1.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/ia64/%.o: ../osprey/kgccfe/gnu/ia64/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


