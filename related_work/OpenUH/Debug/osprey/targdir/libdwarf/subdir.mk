################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../osprey/targdir/libdwarf/dwarf_abbrev.o \
../osprey/targdir/libdwarf/dwarf_addr_finder.o \
../osprey/targdir/libdwarf/dwarf_alloc.o \
../osprey/targdir/libdwarf/dwarf_arange.o \
../osprey/targdir/libdwarf/dwarf_die_deliv.o \
../osprey/targdir/libdwarf/dwarf_error.o \
../osprey/targdir/libdwarf/dwarf_form.o \
../osprey/targdir/libdwarf/dwarf_frame.o \
../osprey/targdir/libdwarf/dwarf_funcs.o \
../osprey/targdir/libdwarf/dwarf_global.o \
../osprey/targdir/libdwarf/dwarf_init_finish.o \
../osprey/targdir/libdwarf/dwarf_leb.o \
../osprey/targdir/libdwarf/dwarf_line.o \
../osprey/targdir/libdwarf/dwarf_loc.o \
../osprey/targdir/libdwarf/dwarf_macro.o \
../osprey/targdir/libdwarf/dwarf_names.o \
../osprey/targdir/libdwarf/dwarf_print_lines.o \
../osprey/targdir/libdwarf/dwarf_query.o \
../osprey/targdir/libdwarf/dwarf_sort_line.o \
../osprey/targdir/libdwarf/dwarf_string.o \
../osprey/targdir/libdwarf/dwarf_stubs.o \
../osprey/targdir/libdwarf/dwarf_types.o \
../osprey/targdir/libdwarf/dwarf_util.o \
../osprey/targdir/libdwarf/dwarf_vars.o \
../osprey/targdir/libdwarf/dwarf_weaks.o \
../osprey/targdir/libdwarf/dwarfdump.o \
../osprey/targdir/libdwarf/dwf_forms.o \
../osprey/targdir/libdwarf/dwf_frame.o \
../osprey/targdir/libdwarf/dwf_section.o \
../osprey/targdir/libdwarf/makename.o \
../osprey/targdir/libdwarf/print_die.o \
../osprey/targdir/libdwarf/print_reloc.o \
../osprey/targdir/libdwarf/print_sections.o \
../osprey/targdir/libdwarf/pro_alloc.o \
../osprey/targdir/libdwarf/pro_arange.o \
../osprey/targdir/libdwarf/pro_die.o \
../osprey/targdir/libdwarf/pro_encode_nm.o \
../osprey/targdir/libdwarf/pro_error.o \
../osprey/targdir/libdwarf/pro_expr.o \
../osprey/targdir/libdwarf/pro_finish.o \
../osprey/targdir/libdwarf/pro_forms.o \
../osprey/targdir/libdwarf/pro_frame.o \
../osprey/targdir/libdwarf/pro_funcs.o \
../osprey/targdir/libdwarf/pro_init.o \
../osprey/targdir/libdwarf/pro_line.o \
../osprey/targdir/libdwarf/pro_macinfo.o \
../osprey/targdir/libdwarf/pro_pubnames.o \
../osprey/targdir/libdwarf/pro_reloc.o \
../osprey/targdir/libdwarf/pro_reloc_stream.o \
../osprey/targdir/libdwarf/pro_reloc_symbolic.o \
../osprey/targdir/libdwarf/pro_section.o \
../osprey/targdir/libdwarf/pro_types.o \
../osprey/targdir/libdwarf/pro_vars.o \
../osprey/targdir/libdwarf/pro_weaks.o 

C_SRCS += \
../osprey/targdir/libdwarf/_tag_attr_table.c \
../osprey/targdir/libdwarf/_tag_tree_table.c \
../osprey/targdir/libdwarf/dwarf_names.c 

OBJS += \
./osprey/targdir/libdwarf/_tag_attr_table.o \
./osprey/targdir/libdwarf/_tag_tree_table.o \
./osprey/targdir/libdwarf/dwarf_names.o 

C_DEPS += \
./osprey/targdir/libdwarf/_tag_attr_table.d \
./osprey/targdir/libdwarf/_tag_tree_table.d \
./osprey/targdir/libdwarf/dwarf_names.d 


# Each subdirectory must supply rules for building sources it contributes
osprey/targdir/libdwarf/%.o: ../osprey/targdir/libdwarf/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


