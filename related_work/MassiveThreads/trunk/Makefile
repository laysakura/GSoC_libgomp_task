# Makefile

CC = gcc
CXX = g++
AR = ar

#for debug
#CFLAGS = -g -O0 -fPIC -shared -Wall -Werror
#CFLAGS_TEST = -g -O0 -Wall -Werror
#for release
CFLAGS = -g -O3 -shared -Wall -fpermissive -ftls-model=initial-exec 
CFLAGS_TEST = -g -O3 -Wall -Werror

TARGET_LIB = libmyth.so libpthread.so libmyth.a  
TARGET_TEST = myth_test
TARGET = $(TARGET_LIB) $(TARGET_TEST)

CFLAGS += -fPIC -DCOMPILED_AS_PIC -DMYTH_SCHED_LOOP_DEBUG

# Suffix rules
.SUFFIXES: .o .c
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(TARGET)

# File groups

# Configuration
H_CONFIG = myth_config.h

# Low-level Primitive
H_LL = myth_internal_lock.h myth_mem_barrier.h myth_misc.h myth_original_lib.h
O_LL = myth_misc.o myth_original_lib.o
myth_misc.o: $(H_CONFIG) $(H_LL)
myth_original_lib.o: $(H_CONFIG) $(H_LL)

# Internal data structure
H_WSQUEUE = myth_wsqueue.h myth_wsqueue_func.h myth_wsqueue_proto.h
H_CONTEXT = myth_context.h
O_CONTEXT = myth_context.o
myth_context.o: $(H_LL) myth_context.S
	gcc $(CFLAGS) -c -o myth_context.o myth_context.S
H_DESC = myth_desc.h

H_STRUCT = $(H_WSQUEUE) $(H_CONTEXT) $(H_DESC)
O_STRUCT = $(O_CONTEXT)

# Functionality
H_WORKER = myth_worker.h myth_worker_func.h myth_worker_proto.h
O_WORKER = myth_worker.o
myth_worker.o: $(H_CONFIG) $(H_LL) $(H_STRUCT) $(H_WORKER)

H_IO = myth_io.h myth_io_func.h myth_io_proto.h myth_io_struct.h myth_io_poll.h
O_IO = myth_io.o
myth_io.o: $(H_CONFIG) $(H_LL) $(H_STRUCT) $(H_WORKER) $(H_IO)
H_SYNC = myth_sync.h myth_sync_func.h myth_sync_proto.h

H_SCHED = myth_sched.h myth_sched_func.h myth_sched_proto.h
O_SCHED = myth_sched.o
myth_sched.o: $(H_CONFIG) $(H_LL) $(H_STRUCT) $(H_WORKER) $(H_SCHED) $(H_SYNC) $(H_IO)

H_LOG = myth_log.h myth_log_func.h myth_log_proto.h
O_LOG = myth_log.o
myth_log.o: $(H_CONFIG) $(H_LL) $(H_STRUCT) $(H_LOG)

H_FUNC = $(H_SCHED) $(H_SYNC) $(H_IO) $(H_WORKER) $(H_LOG)
O_FUNC = $(O_SCHED) $(O_IO) $(O_WORKER) $(O_LOG)

# Main file
H_INIT = myth_init.h myth_init_func.h myth_init_proto.h
O_INIT = myth_init.o
myth_init.o: $(H_CONFIG) $(H_LL) $(H_STRUCT) $(H_FUNC) $(H_INIT)

# Top level interfaces
myth.o: $(H_CONFIG) $(H_LL) $(H_STRUCT) $(H_FUNC) $(H_INIT) myth.h
libmyth.so: $(O_CONFIG) $(O_LL) $(O_STRUCT) $(O_FUNC) $(O_INIT) myth.o
	$(CC) $(CFLAGS) -o $@ $^ -lpthread -ldl
libmyth.a: $(O_CONFIG) $(O_LL) $(O_STRUCT) $(O_FUNC) $(O_INIT) myth.o
	$(AR) rcs $@ $^
myth_if_pthread.o: $(H_CONFIG) $(H_LL) $(H_STRUCT) $(H_FUNC) $(H_INIT) myth_if_pthread.c myth_if_pthread.c
libpthread.so: $(O_CONFIG) $(O_LL) $(O_STRUCT) $(O_FUNC) $(O_INIT) myth_if_pthread.o
	$(CC) $(CFLAGS) -o $@ $^ -ldl

# Test bench
myth_test.o: myth_test.c myth.h
	$(CC) $(CFLAGS) -I. -c $<

myth_test : libmyth.so myth_test.o
	$(CC) $(CFLAGS_TEST) -L. -o $@ myth_test.o -lmyth

#test:
#	(cd test;make test)

clean:
	rm -rf *.o
	rm -rf *~

distclean: clean
	rm -rf $(TARGET)
