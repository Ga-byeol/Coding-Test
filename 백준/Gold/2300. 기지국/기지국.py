n = int(input())
p = [[0] * 2 for i in range(n+1)]

for i in range(1,n+1):
    a,b = map(int,input().split())
    if b < 0 : b *= -1
    p[i][0] = a
    p[i][1] = b

p = sorted(p[1:n+1])
p.insert(0,[0,0])

dp = [100000000 for i in range(n+1)]
dp[0] = 0

for i in range(1,n+1):
    x = 0
    for j in range(i,0,-1):
        x = max(x,p[j][1])
        square = max(p[i][0]-p[j][0],x*2)
        dp[i] = min(dp[i],dp[j-1]+square)
        
print(dp[n])