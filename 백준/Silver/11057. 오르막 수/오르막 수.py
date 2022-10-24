n = int(input())

d = [[0 for i in range(10)] for j in range(1001)]

for i in range(10):
    d[0][i] = 1
    
for i in range(1,n+1):
    for j in range(10):
        d[i][j] = sum(d[i-1][j:])
    
print(sum(d[n-1])%10007)