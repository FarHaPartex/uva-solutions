import sys

if __name__ == "__main__":
    data = {'B':1,'C':2,'D':3,'F':1,'G':2,'J':2,'K':2,'L':4,'M':5,'N':5,'P':1,'Q':2,'R':6,'S':2,'T':3,'V':1,'X':2,'Z':2}

    for str in sys.stdin:
        #str = sys.stdin()
        prev = 0
        for index in range(0,len(str)):
            s = str[index]
            if s in data:
                value = data[s]
                if value == prev:
                    continue
                print(value,end='')
                prev = value
            else:
                prev = 0
        print("")
                


