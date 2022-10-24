from collections import deque
dx = [0,0,1,-1]
dy = [1,-1,0,0]
result = 0
visited = [[False for _ in range(1001)] for _ in range(1001)]
Map = []
q = deque([])

def bfs():
    result = 0
    
    while q:
        x,y = q.popleft()

        visited[x][y] = True
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if nx >= 0 and ny >= 0 and nx < N and ny < M:
                if Map[nx][ny] == 0 and not visited[nx][ny]:
                    q.append([nx,ny])
                    visited[nx][ny] = True
                    
                    Map[nx][ny] = Map[x][y] + 1
                    result = Map[nx][ny]
    for i in range(N):
        for j in range(M):
            if Map[i][j] == 0 : result = -1
    
    if result > 0: print(result-1)
    else: print(result)
    
    
                    
M,N= map(int,input().split())
for i in range(N):
    Map.append(list(map(int,input().split())))
    for j in range(M):
        if Map[i][j] == 1:
            q.append([i,j])
bfs()