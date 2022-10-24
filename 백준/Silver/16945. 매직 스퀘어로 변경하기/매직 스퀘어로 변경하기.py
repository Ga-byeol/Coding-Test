from sys import stdin
from itertools import permutations

def next_permutation(arr):
    i = len(arr)-1
    while i>0 and arr[i-1] >= arr[i] : i-=1
    if i <=0: return False
    j = len(arr)-1
    while arr[j] <= arr[i-1]: j-=1
    
    swap(arr,i-1,j)
    j = len(arr)-1
    while i<j:
        swap(arr,i,j)
        i+=1
        j-=1
    return True
    
def swap(arr,x,y):
    temp = arr[x]
    arr[x] = arr[y]
    arr[y] = temp
    
def solve(p):
    sum = p[0] + p[1] + p[2]
    if sum != (p[3] + p[4] + p[5]): return False
    if sum != (p[6] + p[7] + p[8]): return False
    
    if sum != (p[0] + p[3] + p[6]): return False
    if sum != (p[1] + p[4] + p[7]): return False
    if sum != (p[2] + p[5] + p[8]): return False
    
    if sum != (p[0] + p[4] + p[8]): return False
    if sum != (p[2] + p[4] + p[6]): return False
    return True

a = [0 for _ in range(9)]
picked = [0 for _ in range(9)]
for i in range(0,9,3):
    a[i],a[i+1],a[i+2] = map(int,input().split())
    picked[i] = i+1
    picked[i+1] = i+2
    picked[i+2] = i+3
ans = 987654321

while True:
    if solve(picked):
        diff = 0
        for i in range(9):
            diff += abs(a[i] - picked[i])
        ans = min(ans,diff)
    if not next_permutation(picked): break
print(ans)