dwarf = []
sum=0
for i in range(9):
    dwarf.append(int(input()))
    sum += dwarf[i]
dwarf.sort()

for i in range(9):
    for j in range(1,9):
        if i==j: continue
        if sum-dwarf[i]-dwarf[j] == 100:
            for x in dwarf:
                if x==dwarf[i] or x==dwarf[j]: continue
                print(x)
            quit()