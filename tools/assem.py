import sys

if len(sys.argv) < 3:
    print("Usage: python assem.py <input_file> <output_file>")
    sys.exit(1)
input_file = sys.argv[1]
output_file = sys.argv[2]

from riscv_assembler.convert import AssemblyConverter as AC
# instantiate object, by default outputs to a file in nibbles, not in hexademicals
convert = AC(output_mode = 'f', nibble_mode = False, hex_mode = False)

# code = open(input_file, 'r').read()
# code = code.replace(',', ' ')

# print(code)

# Convert a whole .s file to text file
convert(input_file, output_file)