import sys
sys.setrecursionlimit(10**6)

edge = []
for _ in range (100001): edge.append([])
parent = [0 for _ in range (100001)]
marked = [False for _ in range (100001)]

def dfs(n):
    marked[n] = True
    for x in edge[n]:
        if not marked[x]:
            parent[x] = n
            dfs(x)
    
n = int(sys.stdin.readline())
cnt = 0
for _ in range(0,n-1):
    x, y = map(int,sys.stdin.readline().split())
    edge[x].append(y)
    edge[y].append(x)
dfs(1)
for i in range(2,n+1):
    print(parent[i])
