import argparse
from pathlib import Path


VECTOR_LINES = 39
REPO_ROOT = Path(__file__).absolute().parents[0]

def main(infile, outfile) -> None:

    inputfile = Path(infile)
    if inputfile.is_file():
        inf = open(infile, "r")
    else:
        print("Input hex file not exist: " + str(infile))
    
    print("input hex file: " + str(infile))
    print("output hex file: " + str(outfile))
    
    with open(outfile, "w") as outf:
        outf.write(":020000040000FA\n")
        line_num = 0
        line = inf.readline()
        
        while line_num < VECTOR_LINES:
            line = inf.readline()
            outf.write(line)
            line_num += 1
        
        inf.seek(0)
        
        for line in inf:
            outf.write(line)
    
    inf.close()
    outf.close() 
        




if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-i",
        "--infile",
        default=REPO_ROOT / "build" / "zephyr" / "zephyr.hex",
        help="The original Hex file",
    )
    parser.add_argument(
        "-o",
        "--outfile",
        default=REPO_ROOT / "build" / "zephyr" / "zephyr_mod.hex",
        help="The output modified Hex file",
    )
    args = parser.parse_args()

    main(args.infile, args.outfile)