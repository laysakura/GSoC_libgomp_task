################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/cp/call.c \
../osprey/kgccfe/gnu/cp/class.c \
../osprey/kgccfe/gnu/cp/cp-lang.c \
../osprey/kgccfe/gnu/cp/cvt.c \
../osprey/kgccfe/gnu/cp/decl.c \
../osprey/kgccfe/gnu/cp/decl2.c \
../osprey/kgccfe/gnu/cp/dump.c \
../osprey/kgccfe/gnu/cp/error.c \
../osprey/kgccfe/gnu/cp/except.c \
../osprey/kgccfe/gnu/cp/expr.c \
../osprey/kgccfe/gnu/cp/friend.c \
../osprey/kgccfe/gnu/cp/g++spec.c \
../osprey/kgccfe/gnu/cp/init.c \
../osprey/kgccfe/gnu/cp/lex.c \
../osprey/kgccfe/gnu/cp/mangle.c \
../osprey/kgccfe/gnu/cp/method.c \
../osprey/kgccfe/gnu/cp/optimize.c \
../osprey/kgccfe/gnu/cp/pt.c \
../osprey/kgccfe/gnu/cp/ptree.c \
../osprey/kgccfe/gnu/cp/repo.c \
../osprey/kgccfe/gnu/cp/rtti.c \
../osprey/kgccfe/gnu/cp/search.c \
../osprey/kgccfe/gnu/cp/semantics.c \
../osprey/kgccfe/gnu/cp/spew.c \
../osprey/kgccfe/gnu/cp/tree.c \
../osprey/kgccfe/gnu/cp/typeck.c \
../osprey/kgccfe/gnu/cp/typeck2.c 

OBJS += \
./osprey/kgccfe/gnu/cp/call.o \
./osprey/kgccfe/gnu/cp/class.o \
./osprey/kgccfe/gnu/cp/cp-lang.o \
./osprey/kgccfe/gnu/cp/cvt.o \
./osprey/kgccfe/gnu/cp/decl.o \
./osprey/kgccfe/gnu/cp/decl2.o \
./osprey/kgccfe/gnu/cp/dump.o \
./osprey/kgccfe/gnu/cp/error.o \
./osprey/kgccfe/gnu/cp/except.o \
./osprey/kgccfe/gnu/cp/expr.o \
./osprey/kgccfe/gnu/cp/friend.o \
./osprey/kgccfe/gnu/cp/g++spec.o \
./osprey/kgccfe/gnu/cp/init.o \
./osprey/kgccfe/gnu/cp/lex.o \
./osprey/kgccfe/gnu/cp/mangle.o \
./osprey/kgccfe/gnu/cp/method.o \
./osprey/kgccfe/gnu/cp/optimize.o \
./osprey/kgccfe/gnu/cp/pt.o \
./osprey/kgccfe/gnu/cp/ptree.o \
./osprey/kgccfe/gnu/cp/repo.o \
./osprey/kgccfe/gnu/cp/rtti.o \
./osprey/kgccfe/gnu/cp/search.o \
./osprey/kgccfe/gnu/cp/semantics.o \
./osprey/kgccfe/gnu/cp/spew.o \
./osprey/kgccfe/gnu/cp/tree.o \
./osprey/kgccfe/gnu/cp/typeck.o \
./osprey/kgccfe/gnu/cp/typeck2.o 

C_DEPS += \
./osprey/kgccfe/gnu/cp/call.d \
./osprey/kgccfe/gnu/cp/class.d \
./osprey/kgccfe/gnu/cp/cp-lang.d \
./osprey/kgccfe/gnu/cp/cvt.d \
./osprey/kgccfe/gnu/cp/decl.d \
./osprey/kgccfe/gnu/cp/decl2.d \
./osprey/kgccfe/gnu/cp/dump.d \
./osprey/kgccfe/gnu/cp/error.d \
./osprey/kgccfe/gnu/cp/except.d \
./osprey/kgccfe/gnu/cp/expr.d \
./osprey/kgccfe/gnu/cp/friend.d \
./osprey/kgccfe/gnu/cp/g++spec.d \
./osprey/kgccfe/gnu/cp/init.d \
./osprey/kgccfe/gnu/cp/lex.d \
./osprey/kgccfe/gnu/cp/mangle.d \
./osprey/kgccfe/gnu/cp/method.d \
./osprey/kgccfe/gnu/cp/optimize.d \
./osprey/kgccfe/gnu/cp/pt.d \
./osprey/kgccfe/gnu/cp/ptree.d \
./osprey/kgccfe/gnu/cp/repo.d \
./osprey/kgccfe/gnu/cp/rtti.d \
./osprey/kgccfe/gnu/cp/search.d \
./osprey/kgccfe/gnu/cp/semantics.d \
./osprey/kgccfe/gnu/cp/spew.d \
./osprey/kgccfe/gnu/cp/tree.d \
./osprey/kgccfe/gnu/cp/typeck.d \
./osprey/kgccfe/gnu/cp/typeck2.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/cp/%.o: ../osprey/kgccfe/gnu/cp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


