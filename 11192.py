import textwrap

if __name__ == "__main__":
    while True:
        data = input()
        if data[0] is '0':
            break
        n, str = [x for x in data.split()]
        n = int(n)
        if n is 0:
            break
        word_len = len(str)//n
        word_list = textwrap.wrap(str,word_len)

        for word in word_list:
            print(word[::-1], end='')
        print("")
