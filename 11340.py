if __name__ == "__main__":
    n = int(input())
    while n:
        k = int(input())
        paid_char = {}
        for x in range(0,k):
            ch, m = [s for s in input().split()]
            m = int(m)
            paid_char[ch] = m
        M = int(input())
        total_cent=0
        for x in range(0,M):
            str = input()
            total_cent += sum(paid_char[d] for d in str if d in paid_char.keys())
        
        bill = total_cent / 100
        print("{0:.2f}$".format(bill))
        n -= 1


