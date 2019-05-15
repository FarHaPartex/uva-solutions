if __name__ == "__main__":
    cs = 1
    while True:
        s = int(input())
        if s < 0:
            break
        problems = [int(x) for x in input().split()]
        contest = [int(x) for x in input().split()]

        prev = s
        print("Case {0}:".format(cs))
        cs += 1

        for x in range(0,12):
            if (prev-contest[x]) < 0:
                print("No problem. :(")
                prev += problems[x]
            else:
                print("No problem! :D")
                prev -= contest[x]
                prev += problems[x]