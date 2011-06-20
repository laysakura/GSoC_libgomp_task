################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../osprey/cygnus/ld/eelf_i386.o \
../osprey/cygnus/ld/eelf_x86_64.o \
../osprey/cygnus/ld/ei386linux.o \
../osprey/cygnus/ld/ldcref.o \
../osprey/cygnus/ld/ldctor.o \
../osprey/cygnus/ld/ldemul.o \
../osprey/cygnus/ld/ldexp.o \
../osprey/cygnus/ld/ldfile.o \
../osprey/cygnus/ld/ldgram.o \
../osprey/cygnus/ld/ldlang.o \
../osprey/cygnus/ld/ldlex.o \
../osprey/cygnus/ld/ldmain.o \
../osprey/cygnus/ld/ldmisc.o \
../osprey/cygnus/ld/ldver.o \
../osprey/cygnus/ld/ldwrite.o \
../osprey/cygnus/ld/lexsup.o \
../osprey/cygnus/ld/mri.o 

C_SRCS += \
../osprey/cygnus/ld/eelf_i386.c \
../osprey/cygnus/ld/eelf_x86_64.c \
../osprey/cygnus/ld/ei386linux.c \
../osprey/cygnus/ld/ldcref.c \
../osprey/cygnus/ld/ldctor.c \
../osprey/cygnus/ld/ldemul.c \
../osprey/cygnus/ld/ldexp.c \
../osprey/cygnus/ld/ldfile.c \
../osprey/cygnus/ld/ldgram.c \
../osprey/cygnus/ld/ldlang.c \
../osprey/cygnus/ld/ldlex.c \
../osprey/cygnus/ld/ldmain.c \
../osprey/cygnus/ld/ldmisc.c \
../osprey/cygnus/ld/ldver.c \
../osprey/cygnus/ld/ldwrite.c \
../osprey/cygnus/ld/lexsup.c \
../osprey/cygnus/ld/mri.c \
../osprey/cygnus/ld/pe-dll.c 

OBJS += \
./osprey/cygnus/ld/eelf_i386.o \
./osprey/cygnus/ld/eelf_x86_64.o \
./osprey/cygnus/ld/ei386linux.o \
./osprey/cygnus/ld/ldcref.o \
./osprey/cygnus/ld/ldctor.o \
./osprey/cygnus/ld/ldemul.o \
./osprey/cygnus/ld/ldexp.o \
./osprey/cygnus/ld/ldfile.o \
./osprey/cygnus/ld/ldgram.o \
./osprey/cygnus/ld/ldlang.o \
./osprey/cygnus/ld/ldlex.o \
./osprey/cygnus/ld/ldmain.o \
./osprey/cygnus/ld/ldmisc.o \
./osprey/cygnus/ld/ldver.o \
./osprey/cygnus/ld/ldwrite.o \
./osprey/cygnus/ld/lexsup.o \
./osprey/cygnus/ld/mri.o \
./osprey/cygnus/ld/pe-dll.o 

C_DEPS += \
./osprey/cygnus/ld/eelf_i386.d \
./osprey/cygnus/ld/eelf_x86_64.d \
./osprey/cygnus/ld/ei386linux.d \
./osprey/cygnus/ld/ldcref.d \
./osprey/cygnus/ld/ldctor.d \
./osprey/cygnus/ld/ldemul.d \
./osprey/cygnus/ld/ldexp.d \
./osprey/cygnus/ld/ldfile.d \
./osprey/cygnus/ld/ldgram.d \
./osprey/cygnus/ld/ldlang.d \
./osprey/cygnus/ld/ldlex.d \
./osprey/cygnus/ld/ldmain.d \
./osprey/cygnus/ld/ldmisc.d \
./osprey/cygnus/ld/ldver.d \
./osprey/cygnus/ld/ldwrite.d \
./osprey/cygnus/ld/lexsup.d \
./osprey/cygnus/ld/mri.d \
./osprey/cygnus/ld/pe-dll.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/cygnus/ld/%.o: ../osprey/cygnus/ld/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


