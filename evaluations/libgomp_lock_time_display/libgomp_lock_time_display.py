#!/usr/bin/env python

import sys
import re

pat_cpuid = re.compile("CPU:([0-9]+)")

def get_args():
    if (len(sys.argv) != 2):
        print("ARGS: <lock log file path>")
        exit(1)
    return sys.argv[1]

def parse_log_info(lock_log_line):
    line_parts = lock_log_line.split()
    time = float(line_parts[0])
    cpuid = pat_cpuid.match(line_parts[1]).group(1)
    event = ' '.join(line_parts[2:])
    return (time, cpuid, event)

def lock_log2dat(lock_log_path):
    lock_log_file = open(lock_log_filepath, "r")
    lock_logs = lock_log_file.readlines()
    lock_log_file.close()

    for i in range(0, len(lock_logs)):
        time_i, cpu_i, event_i = parse_log_info(lock_logs[i])
        if (event_i == "Start"):
            time_i, cpu_i, event_i = parse_log_info(lock_logs[i])
            print(str(time_i) + " " + str(cpu_i) + "\n\n\n")
        elif (event_i == "Aquire lock on team taskqueue"):
            for j in range(i + 1, len(lock_logs)):
                time_j, cpu_j, event_j = parse_log_info(lock_logs[j])
                if (event_j == "Release lock on team taskqueue" and cpu_i == cpu_j):
                    print(str(time_i) + " " + str(cpu_i))
                    print(str(time_j) + " " + str(cpu_i))
                    print("")
                    break
        elif (event_i == "End"):
            time_i, cpu_i, event_i = parse_log_info(lock_logs[i])
            print("\n\n\n" + str(time_i) + " " + str(cpu_i))
        elif (event_i == "Release lock on team taskqueue"):
            pass
        else:
            sys.stderr.write("Unexpected log format.\n")
            exit(1)

if __name__ == '__main__':
    lock_log_filepath = get_args()
    dat_filepath = lock_log2dat(lock_log_filepath)
