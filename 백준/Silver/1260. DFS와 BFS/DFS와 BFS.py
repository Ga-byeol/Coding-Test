edge = [[] for _ in range(1001)]
marked = [False] * 1001

def dfs(n):
    if marked[n]: return
    marked[n] = True
    print(n,end=' ')
    for x in edge[n]:dfs(x)

def bfs(n):
    q = []
    marked[n] = True
    q.append(n)
    while(q):
        v = q.pop(0)
        print(v,end=' ')
        for x in edge[v]:
            if not marked[x]:
                marked[x] = True
                q.append(x)
    
    
n,m,v = map(int,input().split())

for i in range(0,m):
    x,y = map(int,input().split())
    edge[x].append(y)
    edge[y].append(x)

for i in range(1,n+1) : edge[i].sort()

dfs(v)
print()
marked = [False] * 1001
bfs(v)