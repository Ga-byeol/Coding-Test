n = int(input())
a = [0] * 301
for i in range(n):a[i] = int(input())
dp = [0] * 301
dp[0] = a[0]
dp[1] = a[0] + a[1]
dp[2] = max(a[1] + a[2],a[0]+ a[2])
for i in range(3,n):
    dp[i] = max(dp[i-3] + a[i-1] + a[i],dp[i-2] + a[i])
print(dp[n-1])
