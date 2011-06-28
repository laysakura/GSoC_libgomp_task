import sys
import commands
import re

def is_valid_result(n_for_fib, result):
    if n_for_fib == 30:
        return result == 832040
    elif n_for_fib == 31:
        return result == 1346269
    elif n_for_fib == 32:
        return result == 2178309
    elif n_for_fib == 33:
        return result == 3524578
    elif n_for_fib == 34:
        return result == 5702887
    elif n_for_fib == 35:
        return result == 9227465
    elif n_for_fib == 40:
        return result == 102334155
    else:
        print("is_valid_result(): fib(" + str(n_for_fib) + ") is not supported")
        exit(1)

def parse_output(output):
    lines = output.splitlines()
    result_line = lines[0]
    exectime_line = lines[1]

    result_pattern = re.compile("fib\([0-9]+\):([0-9]+)")
    result_match = result_pattern.match(result_line)
    result = int(result_match.group(1))

    exectime_pattern = re.compile("exectime:([0-9]+\.[0-9]+)")
    exectime_match = exectime_pattern.match(exectime_line)
    exectime = float(exectime_match.group(1))

    return result, exectime

def exec_test_fib_by_hand(exec_file, n_for_fib, num_cpu, cutoff_depth):
    output = commands.getoutput(
        "export OMP_NUM_THREADS=" + str(num_cpu) +
        " ; export GSOC_CUTOFF_DEPTH=" + str(cutoff_depth) +
        " ; " + exec_file + " " + str(n_for_fib) + " 2> /dev/null")

    result, exectime = parse_output(output)
    return result, exectime

def data2log_str(num_cpu, cutoff_depth, exectime1, exectime2, exectime3, logfile_path):
    return (str(num_cpu) + "\t" + str(cutoff_depth) + "\t" +
            str((exectime1 + exectime2 + exectime3) / 3) + "\n")

def parse_args():
    if len(sys.argv) != 6:
        print("ARGS: <path_to_executable> <N_for_fib(N)> <num_cpu> <cutoff_depth> <logfile_path>")
        exit(1)
    return sys.argv[1], int(sys.argv[2]), int(sys.argv[3]), int(sys.argv[4]), sys.argv[5]

def main():
    exec_file, n_for_fib, num_cpu, cutoff_depth, logfile_path = parse_args()

    result1, exectime1 = exec_test_fib_by_hand(exec_file, n_for_fib, num_cpu, cutoff_depth)
    if is_valid_result(n_for_fib, result1) == False:
        print("Invalid result: fib(" + n_for_fib + ") = " + result1)
        exit(1)
    result2, exectime2 = exec_test_fib_by_hand(exec_file, n_for_fib, num_cpu, cutoff_depth)
    if is_valid_result(n_for_fib, result2) == False:
        print("Invalid result: fib(" + n_for_fib + ") = " + result2)
        exit(1)
    result3, exectime3 = exec_test_fib_by_hand(exec_file, n_for_fib, num_cpu, cutoff_depth)
    if is_valid_result(n_for_fib, result3) == False:
        print("Invalid result: fib(" + n_for_fib + ") = " + result3)
        exit(1)

    logfile = open(logfile_path, 'a')
    logfile.write(data2log_str(num_cpu, cutoff_depth, exectime1, exectime2, exectime3, logfile_path))
    logfile.close()

if __name__ == '__main__':
    main()
