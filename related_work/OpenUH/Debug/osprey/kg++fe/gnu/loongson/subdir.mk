################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/loongson/genrtl.c \
../osprey/kg++fe/gnu/loongson/gtype-desc.c \
../osprey/kg++fe/gnu/loongson/insn-attrtab.c \
../osprey/kg++fe/gnu/loongson/insn-conditions.c \
../osprey/kg++fe/gnu/loongson/insn-emit.c \
../osprey/kg++fe/gnu/loongson/insn-extract.c \
../osprey/kg++fe/gnu/loongson/insn-opinit.c \
../osprey/kg++fe/gnu/loongson/insn-output.c \
../osprey/kg++fe/gnu/loongson/insn-peep.c \
../osprey/kg++fe/gnu/loongson/insn-recog.c 

OBJS += \
./osprey/kg++fe/gnu/loongson/genrtl.o \
./osprey/kg++fe/gnu/loongson/gtype-desc.o \
./osprey/kg++fe/gnu/loongson/insn-attrtab.o \
./osprey/kg++fe/gnu/loongson/insn-conditions.o \
./osprey/kg++fe/gnu/loongson/insn-emit.o \
./osprey/kg++fe/gnu/loongson/insn-extract.o \
./osprey/kg++fe/gnu/loongson/insn-opinit.o \
./osprey/kg++fe/gnu/loongson/insn-output.o \
./osprey/kg++fe/gnu/loongson/insn-peep.o \
./osprey/kg++fe/gnu/loongson/insn-recog.o 

C_DEPS += \
./osprey/kg++fe/gnu/loongson/genrtl.d \
./osprey/kg++fe/gnu/loongson/gtype-desc.d \
./osprey/kg++fe/gnu/loongson/insn-attrtab.d \
./osprey/kg++fe/gnu/loongson/insn-conditions.d \
./osprey/kg++fe/gnu/loongson/insn-emit.d \
./osprey/kg++fe/gnu/loongson/insn-extract.d \
./osprey/kg++fe/gnu/loongson/insn-opinit.d \
./osprey/kg++fe/gnu/loongson/insn-output.d \
./osprey/kg++fe/gnu/loongson/insn-peep.d \
./osprey/kg++fe/gnu/loongson/insn-recog.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/loongson/%.o: ../osprey/kg++fe/gnu/loongson/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


