dx = [0,0,1,-1]
dy = [1,-1,0,0]
aparts = [0 for _ in range(25*25)]
apartNum = 0
visited = [[False for _ in range(101)] for _ in range(101)]
Map = []

def dfs(x,y):
    
    visited[x][y] = True
    aparts[apartNum] += 1
    
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        
        if nx >=0 and ny >=0 and nx < n and ny < n:
            if Map[nx][ny] == 1 and not visited[nx][ny]:
                dfs(nx,ny)
                    
n = int(input())
for i in range(n):
    Map.append(list(map(int,input())))

for i in range(n):
    for j in range(n):
        if Map[i][j] == 1 and not visited[i][j]:
            apartNum += 1
            dfs(i,j)
aparts.sort()
print(apartNum)
for i in range(len(aparts)):
    if aparts[i] == 0: continue
    else: print(aparts[i])