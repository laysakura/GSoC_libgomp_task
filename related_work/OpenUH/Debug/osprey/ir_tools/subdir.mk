################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/ir_tools/ir_gdar.c \
../osprey/ir_tools/ir_graph.c \
../osprey/ir_tools/ir_graph_util.c \
../osprey/ir_tools/ir_prof.c \
../osprey/ir_tools/ir_prof_digest.c \
../osprey/ir_tools/ir_walker.c 

OBJS += \
./osprey/ir_tools/ir_gdar.o \
./osprey/ir_tools/ir_graph.o \
./osprey/ir_tools/ir_graph_util.o \
./osprey/ir_tools/ir_prof.o \
./osprey/ir_tools/ir_prof_digest.o \
./osprey/ir_tools/ir_walker.o 

C_DEPS += \
./osprey/ir_tools/ir_gdar.d \
./osprey/ir_tools/ir_graph.d \
./osprey/ir_tools/ir_graph_util.d \
./osprey/ir_tools/ir_prof.d \
./osprey/ir_tools/ir_prof_digest.d \
./osprey/ir_tools/ir_walker.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/ir_tools/%.o: ../osprey/ir_tools/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


