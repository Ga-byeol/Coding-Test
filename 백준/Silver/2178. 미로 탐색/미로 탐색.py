dx = [0,0,1,-1]
dy = [1,-1,0,0]
visited = [[False for _ in range(101)] for _ in range(101)]
Map = []

def bfs():
    q = []
    q = [[0,0]]
    visited[0][0] = True
    
    while q:
        x,y = q[0][0],q[0][1]
        del q[0]
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if nx >= 0 and ny >= 0 and nx < mx and ny < my:
                if Map[nx][ny] == 1 and not visited[nx][ny]:
                    q.append([nx,ny])
                    
                    visited[nx][ny] = True
                    
                    Map[nx][ny] = Map[x][y] + 1
                    
mx,my = map(int,input().split())
for i in range(mx):
    Map.append(list(map(int,input())))

bfs()
print(Map[mx-1][my-1])