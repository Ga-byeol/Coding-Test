n = int(input())
a = list(map(int, input().split()))
dp = [0 for i in range(n)]
pd = [0 for i in range(n)]
dpp = [0 for i in range(n)]
for i in range(n):
    for j in range(i):
        if a[i] > a[j] and dp[i] < dp[j]:
            dp[i] = dp[j]
    dp[i] += 1
    
for i in range(n-1,-1,-1):
    for j in range(n-1,i,-1):
        if a[i] > a[j] and pd[i] < pd[j]:
            pd[i] = pd[j]
    pd[i] += 1
for i in range(n):
    dpp[i] = dp[i] + pd[i] -1 
print(max(dpp))