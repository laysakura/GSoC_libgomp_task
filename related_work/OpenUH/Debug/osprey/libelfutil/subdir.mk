################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../osprey/libelfutil/con_decode.c \
../osprey/libelfutil/con_table.c \
../osprey/libelfutil/disassembler.c \
../osprey/libelfutil/lebdecodes32.c \
../osprey/libelfutil/lebdecodes64.c \
../osprey/libelfutil/lebdecodeu32.c \
../osprey/libelfutil/lebdecodeu64.c \
../osprey/libelfutil/lebencodes32.c \
../osprey/libelfutil/lebencodes64.c \
../osprey/libelfutil/lebencodeu32.c \
../osprey/libelfutil/lebencodeu64.c \
../osprey/libelfutil/pro_encode.c \
../osprey/libelfutil/pro_table.c \
../osprey/libelfutil/xlate_address.c \
../osprey/libelfutil/xlate_block_index.c \
../osprey/libelfutil/xlate_block_search.c \
../osprey/libelfutil/xlate_expand_reg.c \
../osprey/libelfutil/xlate_expand_reg2.c \
../osprey/libelfutil/xlate_get_all_reg.c \
../osprey/libelfutil/xlate_get_info.c \
../osprey/libelfutil/xlate_get_range.c \
../osprey/libelfutil/xlate_get_reg.c \
../osprey/libelfutil/xlate_get_reg_internal.c \
../osprey/libelfutil/xlate_init_elf.c \
../osprey/libelfutil/xlate_init_fd.c \
../osprey/libelfutil/xlate_named_init_elf.c \
../osprey/libelfutil/xlate_named_init_fd.c \
../osprey/libelfutil/xlate_pro_add_info.c \
../osprey/libelfutil/xlate_pro_add_range.c \
../osprey/libelfutil/xlate_pro_add_range_internal.c \
../osprey/libelfutil/xlate_pro_add_reg_info.c \
../osprey/libelfutil/xlate_pro_disk_header.c \
../osprey/libelfutil/xlate_pro_disk_next_block.c \
../osprey/libelfutil/xlate_pro_init.c \
../osprey/libelfutil/xlate_update_for_movement.c 

OBJS += \
./osprey/libelfutil/con_decode.o \
./osprey/libelfutil/con_table.o \
./osprey/libelfutil/disassembler.o \
./osprey/libelfutil/lebdecodes32.o \
./osprey/libelfutil/lebdecodes64.o \
./osprey/libelfutil/lebdecodeu32.o \
./osprey/libelfutil/lebdecodeu64.o \
./osprey/libelfutil/lebencodes32.o \
./osprey/libelfutil/lebencodes64.o \
./osprey/libelfutil/lebencodeu32.o \
./osprey/libelfutil/lebencodeu64.o \
./osprey/libelfutil/pro_encode.o \
./osprey/libelfutil/pro_table.o \
./osprey/libelfutil/xlate_address.o \
./osprey/libelfutil/xlate_block_index.o \
./osprey/libelfutil/xlate_block_search.o \
./osprey/libelfutil/xlate_expand_reg.o \
./osprey/libelfutil/xlate_expand_reg2.o \
./osprey/libelfutil/xlate_get_all_reg.o \
./osprey/libelfutil/xlate_get_info.o \
./osprey/libelfutil/xlate_get_range.o \
./osprey/libelfutil/xlate_get_reg.o \
./osprey/libelfutil/xlate_get_reg_internal.o \
./osprey/libelfutil/xlate_init_elf.o \
./osprey/libelfutil/xlate_init_fd.o \
./osprey/libelfutil/xlate_named_init_elf.o \
./osprey/libelfutil/xlate_named_init_fd.o \
./osprey/libelfutil/xlate_pro_add_info.o \
./osprey/libelfutil/xlate_pro_add_range.o \
./osprey/libelfutil/xlate_pro_add_range_internal.o \
./osprey/libelfutil/xlate_pro_add_reg_info.o \
./osprey/libelfutil/xlate_pro_disk_header.o \
./osprey/libelfutil/xlate_pro_disk_next_block.o \
./osprey/libelfutil/xlate_pro_init.o \
./osprey/libelfutil/xlate_update_for_movement.o 

C_DEPS += \
./osprey/libelfutil/con_decode.d \
./osprey/libelfutil/con_table.d \
./osprey/libelfutil/disassembler.d \
./osprey/libelfutil/lebdecodes32.d \
./osprey/libelfutil/lebdecodes64.d \
./osprey/libelfutil/lebdecodeu32.d \
./osprey/libelfutil/lebdecodeu64.d \
./osprey/libelfutil/lebencodes32.d \
./osprey/libelfutil/lebencodes64.d \
./osprey/libelfutil/lebencodeu32.d \
./osprey/libelfutil/lebencodeu64.d \
./osprey/libelfutil/pro_encode.d \
./osprey/libelfutil/pro_table.d \
./osprey/libelfutil/xlate_address.d \
./osprey/libelfutil/xlate_block_index.d \
./osprey/libelfutil/xlate_block_search.d \
./osprey/libelfutil/xlate_expand_reg.d \
./osprey/libelfutil/xlate_expand_reg2.d \
./osprey/libelfutil/xlate_get_all_reg.d \
./osprey/libelfutil/xlate_get_info.d \
./osprey/libelfutil/xlate_get_range.d \
./osprey/libelfutil/xlate_get_reg.d \
./osprey/libelfutil/xlate_get_reg_internal.d \
./osprey/libelfutil/xlate_init_elf.d \
./osprey/libelfutil/xlate_init_fd.d \
./osprey/libelfutil/xlate_named_init_elf.d \
./osprey/libelfutil/xlate_named_init_fd.d \
./osprey/libelfutil/xlate_pro_add_info.d \
./osprey/libelfutil/xlate_pro_add_range.d \
./osprey/libelfutil/xlate_pro_add_range_internal.d \
./osprey/libelfutil/xlate_pro_add_reg_info.d \
./osprey/libelfutil/xlate_pro_disk_header.d \
./osprey/libelfutil/xlate_pro_disk_next_block.d \
./osprey/libelfutil/xlate_pro_init.d \
./osprey/libelfutil/xlate_update_for_movement.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/libelfutil/%.o: ../osprey/libelfutil/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


