dist_check_DATA = check.sh

check_PROGRAMS = \
	sample \
	hello \
	arguments \
	get_num_threads \
	get_max_threads \
	master_thread \
	barrier \
	matinc_nth \
	matadd_nth \
	matmul_nth \
	matinc_pth \
	matadd_pth \
	task01_seq \
	task01_par \
	atm_add \
	tas

sample_SOURCES = sample.c
sample_LDADD = ../src/libnthreads.la

hello_SOURCES = hello.c
hello_LDADD = ../src/libnthreads.la

arguments_SOURCES = arguments.c
arguments_LDADD = ../src/libnthreads.la

get_num_threads_SOURCES = get_num_threads.c
get_num_threads_LDADD = ../src/libnthreads.la

get_max_threads_SOURCES = get_max_threads.c
get_max_threads_LDADD = ../src/libnthreads.la

master_thread_SOURCES = master_thread.c
master_thread_LDADD = ../src/libnthreads.la

barrier_SOURCES = barrier.c
barrier_LDADD = ../src/libnthreads.la

matinc_nth_SOURCES = matinc_nth.c
matinc_nth_LDADD = ../src/libnthreads.la

matadd_nth_SOURCES = matadd_nth.c
matadd_nth_LDADD = ../src/libnthreads.la

matmul_nth_SOURCES = matmul_nth.c
matmul_nth_LDADD = ../src/libnthreads.la

matinc_pth_SOURCES = matinc_pth.c
matinc_pth_LDADD = ../src/libnthreads.la
	
matadd_pth_SOURCES = matadd_pth.c
matadd_pth_LDADD = ../src/libnthreads.la

task01_seq_SOURCES = task01_seq.c

task01_par_SOURCES = task01_par.c
task01_par_LDADD = ../src/libnthreads.la


atm_add_SOURCES = atm_add.c
atm_add_LDADD = ../src/libnthreads.la

tas_SOURCES = tas.c
tas_LDADD = ../src/libnthreads.la

INCLUDES = -I $(srcdir)/../src -I $(srcdir)/../src/machine/@hostcode@
