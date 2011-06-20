################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libcif/cif_conv.c \
../osprey/libcif/cif_lines.c \
../osprey/libcif/cifbinread.c \
../osprey/libcif/cifclose.c \
../osprey/libcif/cifdata.c \
../osprey/libcif/cifdup.c \
../osprey/libcif/ciferrstr.c \
../osprey/libcif/ciffiledir.c \
../osprey/libcif/ciffree.c \
../osprey/libcif/cifgetpos.c \
../osprey/libcif/cifgetrec.c \
../osprey/libcif/cifmode.c \
../osprey/libcif/cifmsg.c \
../osprey/libcif/cifopen.c \
../osprey/libcif/cifprint.c \
../osprey/libcif/cifputrec.c \
../osprey/libcif/cifrecgroup.c \
../osprey/libcif/cifrel.c \
../osprey/libcif/cifsetpos.c \
../osprey/libcif/cifspace.c \
../osprey/libcif/cifunitdir.c 

OBJS += \
./osprey/libcif/cif_conv.o \
./osprey/libcif/cif_lines.o \
./osprey/libcif/cifbinread.o \
./osprey/libcif/cifclose.o \
./osprey/libcif/cifdata.o \
./osprey/libcif/cifdup.o \
./osprey/libcif/ciferrstr.o \
./osprey/libcif/ciffiledir.o \
./osprey/libcif/ciffree.o \
./osprey/libcif/cifgetpos.o \
./osprey/libcif/cifgetrec.o \
./osprey/libcif/cifmode.o \
./osprey/libcif/cifmsg.o \
./osprey/libcif/cifopen.o \
./osprey/libcif/cifprint.o \
./osprey/libcif/cifputrec.o \
./osprey/libcif/cifrecgroup.o \
./osprey/libcif/cifrel.o \
./osprey/libcif/cifsetpos.o \
./osprey/libcif/cifspace.o \
./osprey/libcif/cifunitdir.o 

C_DEPS += \
./osprey/libcif/cif_conv.d \
./osprey/libcif/cif_lines.d \
./osprey/libcif/cifbinread.d \
./osprey/libcif/cifclose.d \
./osprey/libcif/cifdata.d \
./osprey/libcif/cifdup.d \
./osprey/libcif/ciferrstr.d \
./osprey/libcif/ciffiledir.d \
./osprey/libcif/ciffree.d \
./osprey/libcif/cifgetpos.d \
./osprey/libcif/cifgetrec.d \
./osprey/libcif/cifmode.d \
./osprey/libcif/cifmsg.d \
./osprey/libcif/cifopen.d \
./osprey/libcif/cifprint.d \
./osprey/libcif/cifputrec.d \
./osprey/libcif/cifrecgroup.d \
./osprey/libcif/cifrel.d \
./osprey/libcif/cifsetpos.d \
./osprey/libcif/cifspace.d \
./osprey/libcif/cifunitdir.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libcif/%.o: ../osprey/libcif/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


