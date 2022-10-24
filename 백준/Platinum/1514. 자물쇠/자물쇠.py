import sys
import copy
sys.setrecursionlimit(10**9)

n = int(input())
fr =  str(input())
to = str(input())
dp = [[[[[-1 for i in range(2)] for j in range(10)] for x in range(10)] for y in range(10)] for z in range(101)]

def MOD(a,b,c):
    return (a+b+20)%10 if c > 0 else (a-b+20)%10

def go(idx,x,y,z,d):
    
    if idx==n: return 0
    ret = dp[idx][x][y][z][d]
    
    if ret != -1 : return ret
    ret = 1000000000
    dp[idx][x][y][z][d] = ret
    
    if int((int(fr[idx]) + x + 20) % 10) == int(to[idx]):
        ret = min(go(idx + 1, y, z, 0, not d), go(idx + 1, y, z, 0, d));
        dp[idx][x][y][z][d] = ret
        return ret
        
    for k in range(1,4):
        ret = min(ret, go(idx, MOD(x, k, d), y, z, d) + 1);
        dp[idx][x][y][z][d] = ret
        ret = min(ret, go(idx, MOD(x, k, d), MOD(y, k, d), z, d) + 1);
        dp[idx][x][y][z][d] = ret
        ret = min(ret, go(idx, MOD(x, k, d), MOD(y, k, d), MOD(z, k, d), d) + 1);
        dp[idx][x][y][z][d] = ret
    return ret
print(min(go(0,0,0,0,False),go(0,0,0,0,True)))