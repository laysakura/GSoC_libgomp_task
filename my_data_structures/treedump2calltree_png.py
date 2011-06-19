import sys
import re
import pydot

def parse_arg():
    if len(sys.argv) != 3:
        print("Args: <Treedump_file_path.treedump> <Cutoff depth>")
        exit(1)
    return sys.argv[1], int(sys.argv[2])

def parse_line(line):
    pat = re.compile("my_id:(-?[0-9]+),parent:(-?[0-9]+),i_am_nth_child:(-?[0-9]+),cpuid:(-?[0-9]+),extra_id:(-?[0-9]+)")
    mat = pat.match(line)
    return int(mat.group(1)), int(mat.group(2)), int(mat.group(3)), int(mat.group(4)), int(mat.group(5))

def write_graph(nodes, pngpath):
    graph = pydot.Dot(graph_type='digraph')

    # Prepare for coloring
    max_thread_num = max (map( (lambda d : d['thread_id'] + 1), nodes))

    # Create all nodes first
    print("Creating nodes...")
    for node in nodes:
        red = "%2x" % int(float(0xff) * (float(node["thread_id"]) / float(max_thread_num)))
        green = "%2x" % int(float(0xff) * (float(node["thread_id"]) / float(max_thread_num)) * 2.0 % float(0xff))
        blue = "%2x" % int(float(0xff) * (float(node["thread_id"]) / float(max_thread_num)) * 3.0 % float(0xff))
        graph.add_node(pydot.Node(node["my_id"], fontsize=8, style="filled", fillcolor="#"+red+green+blue,
                                  label="fib(" + str(node["n"]) + ") ThreadID:" + str(node["thread_id"])))

    # Set edges
    print("Setting edges...")
    for node in nodes:
        graph.add_edge(pydot.Edge(node["parent_id"], node["my_id"]))

    # sys.stderr.write(graph.to_string())
    graph.write_png(pngpath)

if __name__ == '__main__':
    path, cutoff_depth = parse_arg()
    nodes = []
    f = open(path, 'r')
    lines = f.readlines()

    print("Parsing file...")
    for line in lines:
        (my_id, parent_id, nth_child, thread_id, n) = parse_line(line)
        if n >= cutoff_depth:
            nodes.append({"my_id": my_id, "parent_id": parent_id, "nth_child": nth_child,
                          "n": n, "thread_id": thread_id})
    f.close()
    print("Parsed")

    write_graph(nodes, path.replace(".treedump", ".png"))

