str = input()
len = len(str)
sum = 0
arr = [0 for _ in range(len)]
for i in range(len):
    arr[i] = int(str[i]) - int('0')
    sum += arr[i]
arr.sort()
if arr[0] or sum%3 != 0 : print(-1)
else:
    for i in range(len-1,-1,-1): print(arr[i], end='')