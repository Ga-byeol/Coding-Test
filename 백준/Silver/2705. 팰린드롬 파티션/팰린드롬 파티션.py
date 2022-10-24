dp = [1 for _ in range(1001)]

for i in range(1001):
    for j in range(i):
        if (i-j)&1: continue
        dp[i] += dp[int((i-j)/2)]

t = int(input())
while t != 0:
    n = int(input())
    print(dp[n])
    t-=1