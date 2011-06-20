################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey-gcc/gcc/cp/call.c \
../osprey-gcc/gcc/cp/class.c \
../osprey-gcc/gcc/cp/cp-gimplify.c \
../osprey-gcc/gcc/cp/cp-lang.c \
../osprey-gcc/gcc/cp/cp-objcp-common.c \
../osprey-gcc/gcc/cp/cvt.c \
../osprey-gcc/gcc/cp/cxx-pretty-print.c \
../osprey-gcc/gcc/cp/decl.c \
../osprey-gcc/gcc/cp/decl2.c \
../osprey-gcc/gcc/cp/dump.c \
../osprey-gcc/gcc/cp/error.c \
../osprey-gcc/gcc/cp/except.c \
../osprey-gcc/gcc/cp/expr.c \
../osprey-gcc/gcc/cp/friend.c \
../osprey-gcc/gcc/cp/g++spec.c \
../osprey-gcc/gcc/cp/init.c \
../osprey-gcc/gcc/cp/lex.c \
../osprey-gcc/gcc/cp/mangle.c \
../osprey-gcc/gcc/cp/method.c \
../osprey-gcc/gcc/cp/name-lookup.c \
../osprey-gcc/gcc/cp/optimize.c \
../osprey-gcc/gcc/cp/parser.c \
../osprey-gcc/gcc/cp/pt.c \
../osprey-gcc/gcc/cp/ptree.c \
../osprey-gcc/gcc/cp/repo.c \
../osprey-gcc/gcc/cp/rtti.c \
../osprey-gcc/gcc/cp/search.c \
../osprey-gcc/gcc/cp/semantics.c \
../osprey-gcc/gcc/cp/tree.c \
../osprey-gcc/gcc/cp/typeck.c \
../osprey-gcc/gcc/cp/typeck2.c 

OBJS += \
./osprey-gcc/gcc/cp/call.o \
./osprey-gcc/gcc/cp/class.o \
./osprey-gcc/gcc/cp/cp-gimplify.o \
./osprey-gcc/gcc/cp/cp-lang.o \
./osprey-gcc/gcc/cp/cp-objcp-common.o \
./osprey-gcc/gcc/cp/cvt.o \
./osprey-gcc/gcc/cp/cxx-pretty-print.o \
./osprey-gcc/gcc/cp/decl.o \
./osprey-gcc/gcc/cp/decl2.o \
./osprey-gcc/gcc/cp/dump.o \
./osprey-gcc/gcc/cp/error.o \
./osprey-gcc/gcc/cp/except.o \
./osprey-gcc/gcc/cp/expr.o \
./osprey-gcc/gcc/cp/friend.o \
./osprey-gcc/gcc/cp/g++spec.o \
./osprey-gcc/gcc/cp/init.o \
./osprey-gcc/gcc/cp/lex.o \
./osprey-gcc/gcc/cp/mangle.o \
./osprey-gcc/gcc/cp/method.o \
./osprey-gcc/gcc/cp/name-lookup.o \
./osprey-gcc/gcc/cp/optimize.o \
./osprey-gcc/gcc/cp/parser.o \
./osprey-gcc/gcc/cp/pt.o \
./osprey-gcc/gcc/cp/ptree.o \
./osprey-gcc/gcc/cp/repo.o \
./osprey-gcc/gcc/cp/rtti.o \
./osprey-gcc/gcc/cp/search.o \
./osprey-gcc/gcc/cp/semantics.o \
./osprey-gcc/gcc/cp/tree.o \
./osprey-gcc/gcc/cp/typeck.o \
./osprey-gcc/gcc/cp/typeck2.o 

C_DEPS += \
./osprey-gcc/gcc/cp/call.d \
./osprey-gcc/gcc/cp/class.d \
./osprey-gcc/gcc/cp/cp-gimplify.d \
./osprey-gcc/gcc/cp/cp-lang.d \
./osprey-gcc/gcc/cp/cp-objcp-common.d \
./osprey-gcc/gcc/cp/cvt.d \
./osprey-gcc/gcc/cp/cxx-pretty-print.d \
./osprey-gcc/gcc/cp/decl.d \
./osprey-gcc/gcc/cp/decl2.d \
./osprey-gcc/gcc/cp/dump.d \
./osprey-gcc/gcc/cp/error.d \
./osprey-gcc/gcc/cp/except.d \
./osprey-gcc/gcc/cp/expr.d \
./osprey-gcc/gcc/cp/friend.d \
./osprey-gcc/gcc/cp/g++spec.d \
./osprey-gcc/gcc/cp/init.d \
./osprey-gcc/gcc/cp/lex.d \
./osprey-gcc/gcc/cp/mangle.d \
./osprey-gcc/gcc/cp/method.d \
./osprey-gcc/gcc/cp/name-lookup.d \
./osprey-gcc/gcc/cp/optimize.d \
./osprey-gcc/gcc/cp/parser.d \
./osprey-gcc/gcc/cp/pt.d \
./osprey-gcc/gcc/cp/ptree.d \
./osprey-gcc/gcc/cp/repo.d \
./osprey-gcc/gcc/cp/rtti.d \
./osprey-gcc/gcc/cp/search.d \
./osprey-gcc/gcc/cp/semantics.d \
./osprey-gcc/gcc/cp/tree.d \
./osprey-gcc/gcc/cp/typeck.d \
./osprey-gcc/gcc/cp/typeck2.d 


# Each subdirectory must supply rules for building sources it contributes
osprey-gcc/gcc/cp/%.o: ../osprey-gcc/gcc/cp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


