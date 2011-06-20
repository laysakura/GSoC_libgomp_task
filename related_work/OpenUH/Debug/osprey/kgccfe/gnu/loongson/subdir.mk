################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/loongson/genrtl.c \
../osprey/kgccfe/gnu/loongson/gtype-desc.c \
../osprey/kgccfe/gnu/loongson/insn-attrtab.c \
../osprey/kgccfe/gnu/loongson/insn-conditions.c \
../osprey/kgccfe/gnu/loongson/insn-emit.c \
../osprey/kgccfe/gnu/loongson/insn-extract.c \
../osprey/kgccfe/gnu/loongson/insn-opinit.c \
../osprey/kgccfe/gnu/loongson/insn-output.c \
../osprey/kgccfe/gnu/loongson/insn-peep.c \
../osprey/kgccfe/gnu/loongson/insn-recog.c 

OBJS += \
./osprey/kgccfe/gnu/loongson/genrtl.o \
./osprey/kgccfe/gnu/loongson/gtype-desc.o \
./osprey/kgccfe/gnu/loongson/insn-attrtab.o \
./osprey/kgccfe/gnu/loongson/insn-conditions.o \
./osprey/kgccfe/gnu/loongson/insn-emit.o \
./osprey/kgccfe/gnu/loongson/insn-extract.o \
./osprey/kgccfe/gnu/loongson/insn-opinit.o \
./osprey/kgccfe/gnu/loongson/insn-output.o \
./osprey/kgccfe/gnu/loongson/insn-peep.o \
./osprey/kgccfe/gnu/loongson/insn-recog.o 

C_DEPS += \
./osprey/kgccfe/gnu/loongson/genrtl.d \
./osprey/kgccfe/gnu/loongson/gtype-desc.d \
./osprey/kgccfe/gnu/loongson/insn-attrtab.d \
./osprey/kgccfe/gnu/loongson/insn-conditions.d \
./osprey/kgccfe/gnu/loongson/insn-emit.d \
./osprey/kgccfe/gnu/loongson/insn-extract.d \
./osprey/kgccfe/gnu/loongson/insn-opinit.d \
./osprey/kgccfe/gnu/loongson/insn-output.d \
./osprey/kgccfe/gnu/loongson/insn-peep.d \
./osprey/kgccfe/gnu/loongson/insn-recog.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/loongson/%.o: ../osprey/kgccfe/gnu/loongson/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


