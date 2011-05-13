#!/bin/bash
echo ========================================================================
echo === BASIC ==============================================================
echo ========================================================================
./hello
./arguments
./arguments 0
./arguments 0 -nth 1 2 3 4 5
./arguments 5 1 2 3 4 5
./arguments 5 1 2 3 4 5 -nth 1 2 3 4 5
echo ========================================================================
echo === GENERAL VERIFICATION ===============================================
echo ========================================================================
./atm_add -nth -t 2
echo - Skiping atm_add with 3 cpus................................ not runed.
#./atm_add -nth -t 3
./tas  -nth -t 2
echo - Skiping tas with 3 cpus.................................... not runed.
#./tas -nth -t 3
./task01_par 25 12 -nth -t 2
./task01_par 25 12 -nth -t 3
echo ========================================================================
echo === OMP VERIFICATION ===================================================
echo ========================================================================
./get_num_threads -nth -t 2
./get_num_threads -nth -t 5
./get_max_threads -nth -t 2
./get_max_threads -nth -t 5
./master_thread -nth -t 2
./master_thread -nth -t 3
./barrier -nth -t 2
echo - Skiping barrier with 3 cpus................................ not runed.
#./barrier -nth -t 3
echo ========================================================================
echo === APP VERIFICATION ===================================================
echo ========================================================================
./matinc_nth 10 -nth -t 1
./matinc_nth 10 -nth -t 2
./matadd_nth 10 -nth -t 1
./matadd_nth 10 -nth -t 2
./matmul_nth 1 -nth -t 1
./matmul_nth 1 -nth -t 2
echo ========================================================================
echo === APP PERFORMANCE ====================================================
echo ========================================================================
time ./matinc_nth 25 -nth -t 1
time ./matinc_nth 25 -nth -t 2
time ./matinc_pth 25 1
time ./matinc_pth 25 2
time ./matadd_nth 25 -nth -t 1
time ./matadd_nth 25 -nth -t 2
time ./matadd_pth 25 1
time ./matadd_pth 25 2
time ./matmul_nth 2 -nth -t 1
time ./matmul_nth 2 -nth -t 2
