from collections import deque

visited = [[[0 for _ in range(201)] for _ in range(201)] for _ in range(201)]
A,B,C = map(int,input().split())
ans = []
q = deque([])
q.append([0,0,C])

while q:
    a,b,c = q.popleft()
    
    if visited[a][b][c]: continue
    visited[a][b][c] = True
    
    if a==0: ans.append(c)
    
    if a+b>B: q.append([a+b-B,B,c])
    else: q.append([0,a+b,c])
    
    if a + c > C: q.append([a+c-C,b,C])
    else: q.append([0,b,a+c])
    
    if b + a > A: q.append([A,b+a-A,c])
    else: q.append([b+a,0,c])
    
    if b + c > C: q.append([a,b+c-C,C])
    else: q.append([a,0,b+c])
    
    if c + a > A: q.append([A,b,c+a-A])
    else: q.append([c+a,b,0])
    
    if c + b > B: q.append([a,B,c+b-B])
    else: q.append([a,b+c,0])
    
ans.sort()
for i in range(len(ans)): print(ans[i],end=" ")