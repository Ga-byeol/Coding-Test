board = [0] * 501

def check(i,j):
    if i > 0 : 
        if board[i-1][j] == 'S' : return True
    if i < r-1 : 
        if board[i+1][j] == 'S' : return True
    if j > 0 : 
        if board[i][j-1] == 'S' : return True
    if j < c-1 : 
        if board[i][j+1] == 'S' : return True
    return False

r,c = map(int,input().split())

for i in range(0,r): board[i] = input()
for i in range(0,r):
    for j in range(0,c):
        if board[i][j] == 'W' and check(i,j):
            print(0)
            exit()
        board[i] = board[i].replace('.','D')
print(1)       
for i in range(0,r):
    print(board[i])