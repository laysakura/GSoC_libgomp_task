################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../osprey/libacml_mv/src/gas/cbrt.S \
../osprey/libacml_mv/src/gas/cbrtf.S \
../osprey/libacml_mv/src/gas/copysign.S \
../osprey/libacml_mv/src/gas/copysignf.S \
../osprey/libacml_mv/src/gas/cos.S \
../osprey/libacml_mv/src/gas/cosf.S \
../osprey/libacml_mv/src/gas/exp.S \
../osprey/libacml_mv/src/gas/exp10.S \
../osprey/libacml_mv/src/gas/exp10f.S \
../osprey/libacml_mv/src/gas/exp2.S \
../osprey/libacml_mv/src/gas/exp2f.S \
../osprey/libacml_mv/src/gas/expf.S \
../osprey/libacml_mv/src/gas/expm1.S \
../osprey/libacml_mv/src/gas/expm1f.S \
../osprey/libacml_mv/src/gas/fabs.S \
../osprey/libacml_mv/src/gas/fabsf.S \
../osprey/libacml_mv/src/gas/fdim.S \
../osprey/libacml_mv/src/gas/fdimf.S \
../osprey/libacml_mv/src/gas/fmax.S \
../osprey/libacml_mv/src/gas/fmaxf.S \
../osprey/libacml_mv/src/gas/fmin.S \
../osprey/libacml_mv/src/gas/fminf.S \
../osprey/libacml_mv/src/gas/fmod.S \
../osprey/libacml_mv/src/gas/fmodf.S \
../osprey/libacml_mv/src/gas/log.S \
../osprey/libacml_mv/src/gas/log10.S \
../osprey/libacml_mv/src/gas/log10f.S \
../osprey/libacml_mv/src/gas/log2.S \
../osprey/libacml_mv/src/gas/log2f.S \
../osprey/libacml_mv/src/gas/logf.S \
../osprey/libacml_mv/src/gas/nearbyint.S \
../osprey/libacml_mv/src/gas/pow.S \
../osprey/libacml_mv/src/gas/powf.S \
../osprey/libacml_mv/src/gas/remainder.S \
../osprey/libacml_mv/src/gas/remainderf.S \
../osprey/libacml_mv/src/gas/round.S \
../osprey/libacml_mv/src/gas/sin.S \
../osprey/libacml_mv/src/gas/sincos.S \
../osprey/libacml_mv/src/gas/sincosf.S \
../osprey/libacml_mv/src/gas/sinf.S \
../osprey/libacml_mv/src/gas/trunc.S \
../osprey/libacml_mv/src/gas/truncf.S \
../osprey/libacml_mv/src/gas/v4hcosl.S \
../osprey/libacml_mv/src/gas/v4helpl.S \
../osprey/libacml_mv/src/gas/v4hfrcpal.S \
../osprey/libacml_mv/src/gas/v4hlog10l.S \
../osprey/libacml_mv/src/gas/v4hlog2l.S \
../osprey/libacml_mv/src/gas/v4hlogl.S \
../osprey/libacml_mv/src/gas/v4hsinl.S \
../osprey/libacml_mv/src/gas/vrd2cos.S \
../osprey/libacml_mv/src/gas/vrd2exp.S \
../osprey/libacml_mv/src/gas/vrd2log.S \
../osprey/libacml_mv/src/gas/vrd2log10.S \
../osprey/libacml_mv/src/gas/vrd2log2.S \
../osprey/libacml_mv/src/gas/vrd2sin.S \
../osprey/libacml_mv/src/gas/vrd2sincos.S \
../osprey/libacml_mv/src/gas/vrd4cos.S \
../osprey/libacml_mv/src/gas/vrd4exp.S \
../osprey/libacml_mv/src/gas/vrd4frcpa.S \
../osprey/libacml_mv/src/gas/vrd4log.S \
../osprey/libacml_mv/src/gas/vrd4log10.S \
../osprey/libacml_mv/src/gas/vrd4log2.S \
../osprey/libacml_mv/src/gas/vrd4sin.S \
../osprey/libacml_mv/src/gas/vrda_scaled_logr.S \
../osprey/libacml_mv/src/gas/vrda_scaledshifted_logr.S \
../osprey/libacml_mv/src/gas/vrdacos.S \
../osprey/libacml_mv/src/gas/vrdaexp.S \
../osprey/libacml_mv/src/gas/vrdalog.S \
../osprey/libacml_mv/src/gas/vrdalog10.S \
../osprey/libacml_mv/src/gas/vrdalog2.S \
../osprey/libacml_mv/src/gas/vrdalogr.S \
../osprey/libacml_mv/src/gas/vrdasin.S \
../osprey/libacml_mv/src/gas/vrdasincos.S \
../osprey/libacml_mv/src/gas/vrs4cosf.S \
../osprey/libacml_mv/src/gas/vrs4expf.S \
../osprey/libacml_mv/src/gas/vrs4log10f.S \
../osprey/libacml_mv/src/gas/vrs4log2f.S \
../osprey/libacml_mv/src/gas/vrs4logf.S \
../osprey/libacml_mv/src/gas/vrs4powf.S \
../osprey/libacml_mv/src/gas/vrs4powxf.S \
../osprey/libacml_mv/src/gas/vrs4sincosf.S \
../osprey/libacml_mv/src/gas/vrs4sinf.S \
../osprey/libacml_mv/src/gas/vrs8expf.S \
../osprey/libacml_mv/src/gas/vrs8log10f.S \
../osprey/libacml_mv/src/gas/vrs8log2f.S \
../osprey/libacml_mv/src/gas/vrs8logf.S \
../osprey/libacml_mv/src/gas/vrsacosf.S \
../osprey/libacml_mv/src/gas/vrsaexpf.S \
../osprey/libacml_mv/src/gas/vrsalog10f.S \
../osprey/libacml_mv/src/gas/vrsalog2f.S \
../osprey/libacml_mv/src/gas/vrsalogf.S \
../osprey/libacml_mv/src/gas/vrsapowf.S \
../osprey/libacml_mv/src/gas/vrsapowxf.S \
../osprey/libacml_mv/src/gas/vrsasincosf.S \
../osprey/libacml_mv/src/gas/vrsasinf.S 

OBJS += \
./osprey/libacml_mv/src/gas/cbrt.o \
./osprey/libacml_mv/src/gas/cbrtf.o \
./osprey/libacml_mv/src/gas/copysign.o \
./osprey/libacml_mv/src/gas/copysignf.o \
./osprey/libacml_mv/src/gas/cos.o \
./osprey/libacml_mv/src/gas/cosf.o \
./osprey/libacml_mv/src/gas/exp.o \
./osprey/libacml_mv/src/gas/exp10.o \
./osprey/libacml_mv/src/gas/exp10f.o \
./osprey/libacml_mv/src/gas/exp2.o \
./osprey/libacml_mv/src/gas/exp2f.o \
./osprey/libacml_mv/src/gas/expf.o \
./osprey/libacml_mv/src/gas/expm1.o \
./osprey/libacml_mv/src/gas/expm1f.o \
./osprey/libacml_mv/src/gas/fabs.o \
./osprey/libacml_mv/src/gas/fabsf.o \
./osprey/libacml_mv/src/gas/fdim.o \
./osprey/libacml_mv/src/gas/fdimf.o \
./osprey/libacml_mv/src/gas/fmax.o \
./osprey/libacml_mv/src/gas/fmaxf.o \
./osprey/libacml_mv/src/gas/fmin.o \
./osprey/libacml_mv/src/gas/fminf.o \
./osprey/libacml_mv/src/gas/fmod.o \
./osprey/libacml_mv/src/gas/fmodf.o \
./osprey/libacml_mv/src/gas/log.o \
./osprey/libacml_mv/src/gas/log10.o \
./osprey/libacml_mv/src/gas/log10f.o \
./osprey/libacml_mv/src/gas/log2.o \
./osprey/libacml_mv/src/gas/log2f.o \
./osprey/libacml_mv/src/gas/logf.o \
./osprey/libacml_mv/src/gas/nearbyint.o \
./osprey/libacml_mv/src/gas/pow.o \
./osprey/libacml_mv/src/gas/powf.o \
./osprey/libacml_mv/src/gas/remainder.o \
./osprey/libacml_mv/src/gas/remainderf.o \
./osprey/libacml_mv/src/gas/round.o \
./osprey/libacml_mv/src/gas/sin.o \
./osprey/libacml_mv/src/gas/sincos.o \
./osprey/libacml_mv/src/gas/sincosf.o \
./osprey/libacml_mv/src/gas/sinf.o \
./osprey/libacml_mv/src/gas/trunc.o \
./osprey/libacml_mv/src/gas/truncf.o \
./osprey/libacml_mv/src/gas/v4hcosl.o \
./osprey/libacml_mv/src/gas/v4helpl.o \
./osprey/libacml_mv/src/gas/v4hfrcpal.o \
./osprey/libacml_mv/src/gas/v4hlog10l.o \
./osprey/libacml_mv/src/gas/v4hlog2l.o \
./osprey/libacml_mv/src/gas/v4hlogl.o \
./osprey/libacml_mv/src/gas/v4hsinl.o \
./osprey/libacml_mv/src/gas/vrd2cos.o \
./osprey/libacml_mv/src/gas/vrd2exp.o \
./osprey/libacml_mv/src/gas/vrd2log.o \
./osprey/libacml_mv/src/gas/vrd2log10.o \
./osprey/libacml_mv/src/gas/vrd2log2.o \
./osprey/libacml_mv/src/gas/vrd2sin.o \
./osprey/libacml_mv/src/gas/vrd2sincos.o \
./osprey/libacml_mv/src/gas/vrd4cos.o \
./osprey/libacml_mv/src/gas/vrd4exp.o \
./osprey/libacml_mv/src/gas/vrd4frcpa.o \
./osprey/libacml_mv/src/gas/vrd4log.o \
./osprey/libacml_mv/src/gas/vrd4log10.o \
./osprey/libacml_mv/src/gas/vrd4log2.o \
./osprey/libacml_mv/src/gas/vrd4sin.o \
./osprey/libacml_mv/src/gas/vrda_scaled_logr.o \
./osprey/libacml_mv/src/gas/vrda_scaledshifted_logr.o \
./osprey/libacml_mv/src/gas/vrdacos.o \
./osprey/libacml_mv/src/gas/vrdaexp.o \
./osprey/libacml_mv/src/gas/vrdalog.o \
./osprey/libacml_mv/src/gas/vrdalog10.o \
./osprey/libacml_mv/src/gas/vrdalog2.o \
./osprey/libacml_mv/src/gas/vrdalogr.o \
./osprey/libacml_mv/src/gas/vrdasin.o \
./osprey/libacml_mv/src/gas/vrdasincos.o \
./osprey/libacml_mv/src/gas/vrs4cosf.o \
./osprey/libacml_mv/src/gas/vrs4expf.o \
./osprey/libacml_mv/src/gas/vrs4log10f.o \
./osprey/libacml_mv/src/gas/vrs4log2f.o \
./osprey/libacml_mv/src/gas/vrs4logf.o \
./osprey/libacml_mv/src/gas/vrs4powf.o \
./osprey/libacml_mv/src/gas/vrs4powxf.o \
./osprey/libacml_mv/src/gas/vrs4sincosf.o \
./osprey/libacml_mv/src/gas/vrs4sinf.o \
./osprey/libacml_mv/src/gas/vrs8expf.o \
./osprey/libacml_mv/src/gas/vrs8log10f.o \
./osprey/libacml_mv/src/gas/vrs8log2f.o \
./osprey/libacml_mv/src/gas/vrs8logf.o \
./osprey/libacml_mv/src/gas/vrsacosf.o \
./osprey/libacml_mv/src/gas/vrsaexpf.o \
./osprey/libacml_mv/src/gas/vrsalog10f.o \
./osprey/libacml_mv/src/gas/vrsalog2f.o \
./osprey/libacml_mv/src/gas/vrsalogf.o \
./osprey/libacml_mv/src/gas/vrsapowf.o \
./osprey/libacml_mv/src/gas/vrsapowxf.o \
./osprey/libacml_mv/src/gas/vrsasincosf.o \
./osprey/libacml_mv/src/gas/vrsasinf.o 


# Each subdirectory must supply rules for building sources it contributes
osprey/libacml_mv/src/gas/%.o: ../osprey/libacml_mv/src/gas/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Assembler'
	as  -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


