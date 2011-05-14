#!/bin/sh

MYTH_BASE_PATH=$(cd $(dirname $0)&& pwd)

OBJS="myth_io.o myth_init.o myth_misc.o myth_original_lib.o \
myth_worker.o myth_log.o myth_sched.o myth_context.o"

for f in $OBJS;do
    echo -n "${MYTH_BASE_PATH}/myth_io.o "
    echo -n "${MYTH_BASE_PATH}/myth_init.o "
done
echo
