################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/i386/genrtl.c \
../osprey/kgccfe/gnu/i386/gtype-desc.c \
../osprey/kgccfe/gnu/i386/insn-attrtab.c \
../osprey/kgccfe/gnu/i386/insn-conditions.c \
../osprey/kgccfe/gnu/i386/insn-emit.c \
../osprey/kgccfe/gnu/i386/insn-extract.c \
../osprey/kgccfe/gnu/i386/insn-opinit.c \
../osprey/kgccfe/gnu/i386/insn-output.c \
../osprey/kgccfe/gnu/i386/insn-peep.c \
../osprey/kgccfe/gnu/i386/insn-recog.c 

OBJS += \
./osprey/kgccfe/gnu/i386/genrtl.o \
./osprey/kgccfe/gnu/i386/gtype-desc.o \
./osprey/kgccfe/gnu/i386/insn-attrtab.o \
./osprey/kgccfe/gnu/i386/insn-conditions.o \
./osprey/kgccfe/gnu/i386/insn-emit.o \
./osprey/kgccfe/gnu/i386/insn-extract.o \
./osprey/kgccfe/gnu/i386/insn-opinit.o \
./osprey/kgccfe/gnu/i386/insn-output.o \
./osprey/kgccfe/gnu/i386/insn-peep.o \
./osprey/kgccfe/gnu/i386/insn-recog.o 

C_DEPS += \
./osprey/kgccfe/gnu/i386/genrtl.d \
./osprey/kgccfe/gnu/i386/gtype-desc.d \
./osprey/kgccfe/gnu/i386/insn-attrtab.d \
./osprey/kgccfe/gnu/i386/insn-conditions.d \
./osprey/kgccfe/gnu/i386/insn-emit.d \
./osprey/kgccfe/gnu/i386/insn-extract.d \
./osprey/kgccfe/gnu/i386/insn-opinit.d \
./osprey/kgccfe/gnu/i386/insn-output.d \
./osprey/kgccfe/gnu/i386/insn-peep.d \
./osprey/kgccfe/gnu/i386/insn-recog.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/i386/%.o: ../osprey/kgccfe/gnu/i386/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


