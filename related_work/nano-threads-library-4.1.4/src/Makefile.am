SUBDIRS = machine

lib_LTLIBRARIES =

if PERFORMANCE
lib_LTLIBRARIES += libnthreads-pfm.la
endif

if DEVELOPMENT 
lib_LTLIBRARIES += libnthreads-dev.la
endif

if DEBUG
lib_LTLIBRARIES += libnthreads-dbg.la
endif

if PARAVER
lib_LTLIBRARIES += libnthreads-prv.la
endif

if OMP_STUBS
lib_LTLIBRARIES += libnthreads-stb.la
endif

include_HEADERS = \
	nth_config.h \
	nthreads.h  \
	intone.h \
	omp.h \
	nth_qt.h \
	nth_main.h \
	nth_data.h \
	nth_desc.h \
	nth_queue.h \
	nth_stack.h \
	nth_spin.h \
	nth_support.h \
	nth_sched.h \
	nth_list.h\
	nth_gv.h\
	nth_profiling.h\
	nth_version.h\
	nth_instrument.h\
	nth_mcc.h\
	nth_alloc.h\
	nth_taskdeps.h\
	./machine/@hostcode@/nthmd_config.h \
	./machine/@hostcode@/nthmd_clock.h
	
libnthreads_pfm_la_SOURCES = \
	nth_config.h \
	nthreads.h nthreads.c \
	intone.h intone.c \
	omp.h omp.c \
	nth_qt.h nth_qt.c \
	nth_main.h nth_main.c \
	nth_data.h nth_data.c \
	nth_desc.h nth_desc.c \
	nth_queue.h nth_queue.c \
	nth_stack.h nth_stack.c \
	nth_spin.h nth_spin.c \
	nth_support.h \
	nth_sched.h nth_sched.c \
	nth_wf_sched.c nth_cilk_sched.c nth_dwf_sched.c\
	nth_bf_sched.c nth_lb_sched.c \
	nth_cutoffs.c\
	nth_list.h nth_list.c\
	nth_gv.h\
	nth_profiling.h nth_profiling.c\
	nth_instrument.h\
	nth_taskdeps.c nth_taskdeps.h\
	nth_alloc.h nth_alloc.c\
	./machine/@hostcode@/nthmd_config.h \
	./machine/@hostcode@/nthmd_support_c.c \
	./machine/@hostcode@/nthmd_support_s.s \
	./machine/@hostcode@/nthmd_clock.h

libnthreads_dev_la_SOURCES = \
	nth_config.h \
	nthreads.h nthreads.c \
	intone.h intone.c \
	omp.h omp.c \
	nth_qt.h nth_qt.c \
	nth_main.h nth_main.c \
	nth_data.h nth_data.c \
	nth_desc.h nth_desc.c \
	nth_queue.h nth_queue.c \
	nth_stack.h nth_stack.c \
	nth_spin.h nth_spin.c \
	nth_support.h \
	nth_sched.h nth_sched.c \
	nth_wf_sched.c nth_cilk_sched.c nth_dwf_sched.c\
	nth_bf_sched.c nth_lb_sched.c \
	nth_cutoffs.c\
	nth_list.h nth_list.c\
	nth_gv.h nth_gv.c\
	nth_profiling.h nth_profiling.c\
	nth_instrument.h\
	nth_taskdeps.c nth_taskdeps.h\
	nth_alloc.h nth_alloc.c\
	./machine/@hostcode@/nthmd_config.h \
	./machine/@hostcode@/nthmd_support_c.c \
	./machine/@hostcode@/nthmd_support_s.s \
	./machine/@hostcode@/nthmd_clock.h

libnthreads_dbg_la_SOURCES = \
	nth_config.h \
	nthreads.h nthreads.c \
	intone.h intone.c \
	omp.h omp.c \
	nth_qt.h nth_qt.c \
	nth_main.h nth_main.c \
	nth_data.h nth_data.c \
	nth_desc.h nth_desc.c \
	nth_queue.h nth_queue.c \
	nth_stack.h nth_stack.c \
	nth_spin.h nth_spin.c \
	nth_support.h \
	nth_sched.h nth_sched.c \
	nth_wf_sched.c nth_cilk_sched.c nth_dwf_sched.c\
	nth_bf_sched.c nth_lb_sched.c \
	nth_cutoffs.c\
	nth_list.h nth_list.c\
	nth_gv.h nth_gv.c\
	nth_profiling.h nth_profiling.c\
	nth_instrument.h\
	nth_taskdeps.c nth_taskdeps.h\
	nth_alloc.h nth_alloc.c\
	./machine/@hostcode@/nthmd_config.h \
	./machine/@hostcode@/nthmd_support_c.c \
	./machine/@hostcode@/nthmd_support_s.s \
	./machine/@hostcode@/nthmd_clock.h

libnthreads_prv_la_SOURCES = \
	nth_config.h \
	nthreads.h nthreads.c \
	intone.h intone.c \
	omp.h omp.c \
	nth_qt.h nth_qt.c \
	nth_main.h nth_main.c \
	nth_data.h nth_data.c \
	nth_desc.h nth_desc.c \
	nth_queue.h nth_queue.c \
	nth_stack.h nth_stack.c \
	nth_spin.h nth_spin.c \
	nth_support.h \
	nth_sched.h nth_sched.c \
	nth_wf_sched.c nth_cilk_sched.c nth_dwf_sched.c\
	nth_bf_sched.c nth_lb_sched.c \
	nth_cutoffs.c\
	nth_list.h nth_list.c\
	nth_gv.h nth_gv.c\
	nth_profiling.h nth_profiling.c\
	nth_instrument.h nth_instrument.c\
	nth_taskdeps.c nth_taskdeps.h\
	nth_alloc.h nth_alloc.c\
	./machine/@hostcode@/nthmd_config.h \
	./machine/@hostcode@/nthmd_support_c.c \
	./machine/@hostcode@/nthmd_support_s.s \
	./machine/@hostcode@/nthmd_clock.h

libnthreads_stb_la_SOURCES = omp.h omp_stubs.c

libnthreads_pfm_la_LIBADD = -lpthread -lrt
libnthreads_pfm_la_LDFLAGS = -release 4.2.0
libnthreads_pfm_la_CFLAGS = -O3 -DNTH_INTERNALS -DNTH_PERFORMANCE -I $(srcdir)/machine/@hostcode@

libnthreads_dev_la_LIBADD = -lpthread -lrt
libnthreads_dev_la_LDFLAGS = -release 4.2.0
libnthreads_dev_la_CFLAGS = -g -O2 -DNTH_INTERNALS -DNTH_DEVELOPMENT -I $(srcdir)/machine/@hostcode@

libnthreads_dbg_la_LIBADD = -lpthread -lrt
libnthreads_dbg_la_LDFLAGS = -release 4.2.0
libnthreads_dbg_la_CFLAGS = -g -O1 -DNTH_INTERNALS -DNTH_DEVELOPMENT -DNTH_DEBUG -I $(srcdir)/machine/@hostcode@

libnthreads_prv_la_LIBADD = -lpthread -lmintaka -lrt
libnthreads_prv_la_LDFLAGS = -release 4.2.0
libnthreads_prv_la_CFLAGS = -O3 -DNTH_INTERNALS -DNTH_PARAVER -I $(srcdir)/machine/@hostcode@

libnthreads_stb_la_LDFLAGS = -release 4.2.0
libnthreads_stb_la_CFLAGS = -O3 -I $(srcdir)/machine/@hostcode@

AM_CFLAGS = -Wall


