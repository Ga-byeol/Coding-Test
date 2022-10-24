car = input()
num = [1,1,1,1]
for i in range(len(car)):
    if car[i] == 'd': num[i] = 10
    else: num[i] = 26
for i in range(len(car)-1):
    if car[i] == car[i+1]: num[i+1]-=1
print(num[0]*num[1]*num[2]*num[3])