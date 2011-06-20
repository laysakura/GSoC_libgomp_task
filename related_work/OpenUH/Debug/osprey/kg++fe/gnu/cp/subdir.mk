################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kg++fe/gnu/cp/call.c \
../osprey/kg++fe/gnu/cp/class.c \
../osprey/kg++fe/gnu/cp/cp-lang.c \
../osprey/kg++fe/gnu/cp/cvt.c \
../osprey/kg++fe/gnu/cp/decl.c \
../osprey/kg++fe/gnu/cp/decl2.c \
../osprey/kg++fe/gnu/cp/dump.c \
../osprey/kg++fe/gnu/cp/error.c \
../osprey/kg++fe/gnu/cp/except.c \
../osprey/kg++fe/gnu/cp/expr.c \
../osprey/kg++fe/gnu/cp/friend.c \
../osprey/kg++fe/gnu/cp/g++spec.c \
../osprey/kg++fe/gnu/cp/init.c \
../osprey/kg++fe/gnu/cp/lex.c \
../osprey/kg++fe/gnu/cp/mangle.c \
../osprey/kg++fe/gnu/cp/method.c \
../osprey/kg++fe/gnu/cp/optimize.c \
../osprey/kg++fe/gnu/cp/pt.c \
../osprey/kg++fe/gnu/cp/ptree.c \
../osprey/kg++fe/gnu/cp/repo.c \
../osprey/kg++fe/gnu/cp/rtti.c \
../osprey/kg++fe/gnu/cp/search.c \
../osprey/kg++fe/gnu/cp/semantics.c \
../osprey/kg++fe/gnu/cp/spew.c \
../osprey/kg++fe/gnu/cp/tree.c \
../osprey/kg++fe/gnu/cp/typeck.c \
../osprey/kg++fe/gnu/cp/typeck2.c 

OBJS += \
./osprey/kg++fe/gnu/cp/call.o \
./osprey/kg++fe/gnu/cp/class.o \
./osprey/kg++fe/gnu/cp/cp-lang.o \
./osprey/kg++fe/gnu/cp/cvt.o \
./osprey/kg++fe/gnu/cp/decl.o \
./osprey/kg++fe/gnu/cp/decl2.o \
./osprey/kg++fe/gnu/cp/dump.o \
./osprey/kg++fe/gnu/cp/error.o \
./osprey/kg++fe/gnu/cp/except.o \
./osprey/kg++fe/gnu/cp/expr.o \
./osprey/kg++fe/gnu/cp/friend.o \
./osprey/kg++fe/gnu/cp/g++spec.o \
./osprey/kg++fe/gnu/cp/init.o \
./osprey/kg++fe/gnu/cp/lex.o \
./osprey/kg++fe/gnu/cp/mangle.o \
./osprey/kg++fe/gnu/cp/method.o \
./osprey/kg++fe/gnu/cp/optimize.o \
./osprey/kg++fe/gnu/cp/pt.o \
./osprey/kg++fe/gnu/cp/ptree.o \
./osprey/kg++fe/gnu/cp/repo.o \
./osprey/kg++fe/gnu/cp/rtti.o \
./osprey/kg++fe/gnu/cp/search.o \
./osprey/kg++fe/gnu/cp/semantics.o \
./osprey/kg++fe/gnu/cp/spew.o \
./osprey/kg++fe/gnu/cp/tree.o \
./osprey/kg++fe/gnu/cp/typeck.o \
./osprey/kg++fe/gnu/cp/typeck2.o 

C_DEPS += \
./osprey/kg++fe/gnu/cp/call.d \
./osprey/kg++fe/gnu/cp/class.d \
./osprey/kg++fe/gnu/cp/cp-lang.d \
./osprey/kg++fe/gnu/cp/cvt.d \
./osprey/kg++fe/gnu/cp/decl.d \
./osprey/kg++fe/gnu/cp/decl2.d \
./osprey/kg++fe/gnu/cp/dump.d \
./osprey/kg++fe/gnu/cp/error.d \
./osprey/kg++fe/gnu/cp/except.d \
./osprey/kg++fe/gnu/cp/expr.d \
./osprey/kg++fe/gnu/cp/friend.d \
./osprey/kg++fe/gnu/cp/g++spec.d \
./osprey/kg++fe/gnu/cp/init.d \
./osprey/kg++fe/gnu/cp/lex.d \
./osprey/kg++fe/gnu/cp/mangle.d \
./osprey/kg++fe/gnu/cp/method.d \
./osprey/kg++fe/gnu/cp/optimize.d \
./osprey/kg++fe/gnu/cp/pt.d \
./osprey/kg++fe/gnu/cp/ptree.d \
./osprey/kg++fe/gnu/cp/repo.d \
./osprey/kg++fe/gnu/cp/rtti.d \
./osprey/kg++fe/gnu/cp/search.d \
./osprey/kg++fe/gnu/cp/semantics.d \
./osprey/kg++fe/gnu/cp/spew.d \
./osprey/kg++fe/gnu/cp/tree.d \
./osprey/kg++fe/gnu/cp/typeck.d \
./osprey/kg++fe/gnu/cp/typeck2.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kg++fe/gnu/cp/%.o: ../osprey/kg++fe/gnu/cp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


