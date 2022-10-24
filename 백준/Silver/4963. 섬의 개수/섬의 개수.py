import sys
sys.setrecursionlimit(10**6)

dx = [0,0,1,-1,1,-1,1,-1]
dy = [1,-1,0,0,-1,1,1,-1]

def dfs(x,y):
    visited[x][y] = True
    for i in range(0,8):
        nx = x + dx[i]
        ny = y + dy[i]
        if nx >= 0 and ny >= 0 and nx < mx and ny < my:
            if edge[nx][ny] == 1 and not visited[nx][ny]: dfs(nx,ny)
            
while True:
    land = 0
    my,mx = map(int,input().split())
    if mx==0 and my==0: break

    edge = []
    visited = [[False] * 51 for _ in range(51)]
    
    for i in range(0,mx):
        edge.append(list(map(int,input().split())))
        for j in range(0,my):
            visited[i][j] = False
   
    for i in range(0,mx):
        for j in range(0,my):
            if edge[i][j] == 1 and not visited[i][j]:
                land+=1
                dfs(i,j)
    print(land)