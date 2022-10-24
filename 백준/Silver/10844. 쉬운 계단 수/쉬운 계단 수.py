n = int(input())
list = [[0 for i in range(10)] for j in range(101)]
for i in range(1, 10):
    list[1][i] = 1
for i in range(2, n + 1):
    for j in range(10):
        if j == 0:
            list[i][j] = list[i - 1][1]
        elif j == 9:
            list[i][j] = list[i - 1][8]
        else:
            list[i][j] = list[i - 1][j - 1] + list[i - 1][j + 1]
print(sum(list[n]) % 1000000000)