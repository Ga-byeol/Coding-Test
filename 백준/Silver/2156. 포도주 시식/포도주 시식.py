n = int(input())

d = [0]
for i in range(n):
    d.append(int(input()))
    
p = [0]

p.append(d[1])

if n > 1:
    p.append(d[1] + d[2])
    
for i in range(3, n + 1):
    p.append(max(p[i - 1], p[i - 3] + d[i - 1] + d[i], p[i - 2] + d[i]))
    
print(p[n])