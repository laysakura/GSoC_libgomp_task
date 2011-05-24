 set term postscript eps enhanced color
set output "step.eps"

# set style data boxes
# set style fill solid 1.0
# set boxwidth 0.2

# set xrange [0:]
set xlabel "Time [s]"
set ylabel "CPU ID"
 set yrange [-0.1:1.1]
# set title "Runtime of Protein"

plot "step.dat" index 1 title "Waiting for lock to team taskqueue to be released" with step, \
     "step.dat" index 0 title "Start calculation" with point, \
     "step.dat" index 2 title "End calculation" with point
