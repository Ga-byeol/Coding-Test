import sys
sys.setrecursionlimit(10**6)

def dfs(n):
    if marked[n]: return
    marked[n] = True
    for x in edge[n]:dfs(x)
    
    
t = int(input())

while t!=0:
    cnt=0
    edge = [[] for _ in range(1001)]
    marked = [False] * 1001
    n = int(input())
    x = list(map(int,input().split()))
    for i in range(1,n+1):
        edge[i].append(x[i-1])
        edge[x[i-1]].append(i)
    for i in range(1,n+1):
        if not marked[i]:
            dfs(i)
            cnt+=1
    print(cnt)
    t-=1