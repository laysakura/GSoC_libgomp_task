################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libhugetlbfs/debug.c \
../osprey/libhugetlbfs/elf32ppclinux.c \
../osprey/libhugetlbfs/elf64ppc.c \
../osprey/libhugetlbfs/elflink.c \
../osprey/libhugetlbfs/hugeutils.c \
../osprey/libhugetlbfs/init.c \
../osprey/libhugetlbfs/morecore.c \
../osprey/libhugetlbfs/version.c 

S_UPPER_SRCS += \
../osprey/libhugetlbfs/sys-elf32ppclinux.S \
../osprey/libhugetlbfs/sys-elf64ppc.S \
../osprey/libhugetlbfs/sys-elf_i386.S \
../osprey/libhugetlbfs/sys-elf_x86_64.S 

OBJS += \
./osprey/libhugetlbfs/debug.o \
./osprey/libhugetlbfs/elf32ppclinux.o \
./osprey/libhugetlbfs/elf64ppc.o \
./osprey/libhugetlbfs/elflink.o \
./osprey/libhugetlbfs/hugeutils.o \
./osprey/libhugetlbfs/init.o \
./osprey/libhugetlbfs/morecore.o \
./osprey/libhugetlbfs/sys-elf32ppclinux.o \
./osprey/libhugetlbfs/sys-elf64ppc.o \
./osprey/libhugetlbfs/sys-elf_i386.o \
./osprey/libhugetlbfs/sys-elf_x86_64.o \
./osprey/libhugetlbfs/version.o 

C_DEPS += \
./osprey/libhugetlbfs/debug.d \
./osprey/libhugetlbfs/elf32ppclinux.d \
./osprey/libhugetlbfs/elf64ppc.d \
./osprey/libhugetlbfs/elflink.d \
./osprey/libhugetlbfs/hugeutils.d \
./osprey/libhugetlbfs/init.d \
./osprey/libhugetlbfs/morecore.d \
./osprey/libhugetlbfs/version.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libhugetlbfs/%.o: ../osprey/libhugetlbfs/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

osprey/libhugetlbfs/%.o: ../osprey/libhugetlbfs/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


