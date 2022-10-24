from sys import stdin
m = int(stdin.readline())
BIT=0
while m > 0:
    string = list(map(str,stdin.readline().split()))
    if string[0]=="add":
        num = int(string[1])
        BIT |= (1<<num)
    elif string[0]=="remove":
        num = int(string[1])
        BIT &= ~(1<<num)
    elif string[0]=="check":
        num = int(string[1])
        if BIT & (1<<num):
            print(1)
        else:
            print(0)
    elif string[0]=="toggle":
        num = int(string[1])
        BIT ^= (1<<num)
    elif string[0]=="all":
        BIT = (1<<21)-1
    elif string[0]=="empty":
        BIT = 0
    m-=1