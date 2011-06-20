################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/kgccfe/gnu/java/boehm.c \
../osprey/kgccfe/gnu/java/buffer.c \
../osprey/kgccfe/gnu/java/builtins.c \
../osprey/kgccfe/gnu/java/check-init.c \
../osprey/kgccfe/gnu/java/class.c \
../osprey/kgccfe/gnu/java/constants.c \
../osprey/kgccfe/gnu/java/decl.c \
../osprey/kgccfe/gnu/java/except.c \
../osprey/kgccfe/gnu/java/expr.c \
../osprey/kgccfe/gnu/java/gjavah.c \
../osprey/kgccfe/gnu/java/jcf-depend.c \
../osprey/kgccfe/gnu/java/jcf-dump.c \
../osprey/kgccfe/gnu/java/jcf-io.c \
../osprey/kgccfe/gnu/java/jcf-parse.c \
../osprey/kgccfe/gnu/java/jcf-path.c \
../osprey/kgccfe/gnu/java/jcf-reader.c \
../osprey/kgccfe/gnu/java/jcf-write.c \
../osprey/kgccfe/gnu/java/jv-scan.c \
../osprey/kgccfe/gnu/java/jvgenmain.c \
../osprey/kgccfe/gnu/java/jvspec.c \
../osprey/kgccfe/gnu/java/lang.c \
../osprey/kgccfe/gnu/java/lex.c \
../osprey/kgccfe/gnu/java/mangle.c \
../osprey/kgccfe/gnu/java/mangle_name.c \
../osprey/kgccfe/gnu/java/typeck.c \
../osprey/kgccfe/gnu/java/verify.c \
../osprey/kgccfe/gnu/java/xref.c \
../osprey/kgccfe/gnu/java/zextract.c 

OBJS += \
./osprey/kgccfe/gnu/java/boehm.o \
./osprey/kgccfe/gnu/java/buffer.o \
./osprey/kgccfe/gnu/java/builtins.o \
./osprey/kgccfe/gnu/java/check-init.o \
./osprey/kgccfe/gnu/java/class.o \
./osprey/kgccfe/gnu/java/constants.o \
./osprey/kgccfe/gnu/java/decl.o \
./osprey/kgccfe/gnu/java/except.o \
./osprey/kgccfe/gnu/java/expr.o \
./osprey/kgccfe/gnu/java/gjavah.o \
./osprey/kgccfe/gnu/java/jcf-depend.o \
./osprey/kgccfe/gnu/java/jcf-dump.o \
./osprey/kgccfe/gnu/java/jcf-io.o \
./osprey/kgccfe/gnu/java/jcf-parse.o \
./osprey/kgccfe/gnu/java/jcf-path.o \
./osprey/kgccfe/gnu/java/jcf-reader.o \
./osprey/kgccfe/gnu/java/jcf-write.o \
./osprey/kgccfe/gnu/java/jv-scan.o \
./osprey/kgccfe/gnu/java/jvgenmain.o \
./osprey/kgccfe/gnu/java/jvspec.o \
./osprey/kgccfe/gnu/java/lang.o \
./osprey/kgccfe/gnu/java/lex.o \
./osprey/kgccfe/gnu/java/mangle.o \
./osprey/kgccfe/gnu/java/mangle_name.o \
./osprey/kgccfe/gnu/java/typeck.o \
./osprey/kgccfe/gnu/java/verify.o \
./osprey/kgccfe/gnu/java/xref.o \
./osprey/kgccfe/gnu/java/zextract.o 

C_DEPS += \
./osprey/kgccfe/gnu/java/boehm.d \
./osprey/kgccfe/gnu/java/buffer.d \
./osprey/kgccfe/gnu/java/builtins.d \
./osprey/kgccfe/gnu/java/check-init.d \
./osprey/kgccfe/gnu/java/class.d \
./osprey/kgccfe/gnu/java/constants.d \
./osprey/kgccfe/gnu/java/decl.d \
./osprey/kgccfe/gnu/java/except.d \
./osprey/kgccfe/gnu/java/expr.d \
./osprey/kgccfe/gnu/java/gjavah.d \
./osprey/kgccfe/gnu/java/jcf-depend.d \
./osprey/kgccfe/gnu/java/jcf-dump.d \
./osprey/kgccfe/gnu/java/jcf-io.d \
./osprey/kgccfe/gnu/java/jcf-parse.d \
./osprey/kgccfe/gnu/java/jcf-path.d \
./osprey/kgccfe/gnu/java/jcf-reader.d \
./osprey/kgccfe/gnu/java/jcf-write.d \
./osprey/kgccfe/gnu/java/jv-scan.d \
./osprey/kgccfe/gnu/java/jvgenmain.d \
./osprey/kgccfe/gnu/java/jvspec.d \
./osprey/kgccfe/gnu/java/lang.d \
./osprey/kgccfe/gnu/java/lex.d \
./osprey/kgccfe/gnu/java/mangle.d \
./osprey/kgccfe/gnu/java/mangle_name.d \
./osprey/kgccfe/gnu/java/typeck.d \
./osprey/kgccfe/gnu/java/verify.d \
./osprey/kgccfe/gnu/java/xref.d \
./osprey/kgccfe/gnu/java/zextract.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/kgccfe/gnu/java/%.o: ../osprey/kgccfe/gnu/java/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


