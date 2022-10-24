n,m = map(int,input().split())
ice = [[False for _ in range(205)] for _ in range(205)]

for i in range(m):
    x,y = map(int,input().split())
    ice[x][y] = True;
    ice[y][x] = True;
ans = 0
for i in range(1,n+1):
    for j in range(i+1,n+1):
        if ice[i][j] : continue
        for k in range(j+1,n+1):
            if ice[i][k] or ice[j][k]: continue
            ans+=1
print(ans)