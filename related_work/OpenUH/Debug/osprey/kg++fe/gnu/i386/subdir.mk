################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/i386/genrtl.c \
../osprey/kg++fe/gnu/i386/gtype-desc.c \
../osprey/kg++fe/gnu/i386/insn-attrtab.c \
../osprey/kg++fe/gnu/i386/insn-conditions.c \
../osprey/kg++fe/gnu/i386/insn-emit.c \
../osprey/kg++fe/gnu/i386/insn-extract.c \
../osprey/kg++fe/gnu/i386/insn-opinit.c \
../osprey/kg++fe/gnu/i386/insn-output.c \
../osprey/kg++fe/gnu/i386/insn-peep.c \
../osprey/kg++fe/gnu/i386/insn-recog.c 

OBJS += \
./osprey/kg++fe/gnu/i386/genrtl.o \
./osprey/kg++fe/gnu/i386/gtype-desc.o \
./osprey/kg++fe/gnu/i386/insn-attrtab.o \
./osprey/kg++fe/gnu/i386/insn-conditions.o \
./osprey/kg++fe/gnu/i386/insn-emit.o \
./osprey/kg++fe/gnu/i386/insn-extract.o \
./osprey/kg++fe/gnu/i386/insn-opinit.o \
./osprey/kg++fe/gnu/i386/insn-output.o \
./osprey/kg++fe/gnu/i386/insn-peep.o \
./osprey/kg++fe/gnu/i386/insn-recog.o 

C_DEPS += \
./osprey/kg++fe/gnu/i386/genrtl.d \
./osprey/kg++fe/gnu/i386/gtype-desc.d \
./osprey/kg++fe/gnu/i386/insn-attrtab.d \
./osprey/kg++fe/gnu/i386/insn-conditions.d \
./osprey/kg++fe/gnu/i386/insn-emit.d \
./osprey/kg++fe/gnu/i386/insn-extract.d \
./osprey/kg++fe/gnu/i386/insn-opinit.d \
./osprey/kg++fe/gnu/i386/insn-output.d \
./osprey/kg++fe/gnu/i386/insn-peep.d \
./osprey/kg++fe/gnu/i386/insn-recog.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/i386/%.o: ../osprey/kg++fe/gnu/i386/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


