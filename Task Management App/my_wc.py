import sys

# Check file name given or not
if len(sys.argv) < 2:
    print("Usage: python my_wc.py filename.txt")
    sys.exit()

filename = sys.argv[1]

try:
    with open(filename, 'r', encoding='utf-8') as file:
        text = file.read()

        lines = text.split('\n')
        words = text.split()
        characters = len(text)

        print("Lines:", len(lines))
        print("Words:", len(words))
        print("Characters:", characters)

except FileNotFoundError:
    print("File not found!")
