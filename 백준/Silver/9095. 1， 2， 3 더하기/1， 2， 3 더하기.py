T = int(input())

list = [1,2,4]

for i in range(3,11):
    list.append(list[i-3]+list[i-2]+list[i-1])
    
for i in range(T):
    n = int(input())
    print(list[n-1])