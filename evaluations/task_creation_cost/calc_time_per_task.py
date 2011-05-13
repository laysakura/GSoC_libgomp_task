#!/usr/bin/env python

import commands
import sys

if __name__ == '__main__':
    if len(sys.argv) != 3:
        print("ARGS: <pusedo_fib program file> <N where pusedo_fib(N)>")
        exit(1)

    prog = sys.argv[1]
    N = int(sys.argv[2])

    output = commands.getoutput("./" + prog + " " + str(N))
    runtime = float(output.split('\n')[0])
    print("%e [sec] elapsed for each task." % (runtime / (2 ** N)))
