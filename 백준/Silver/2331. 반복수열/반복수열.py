check = [0] * 1000000

def pow(x,p):
    ans = 1
    for i in range(0,p):
        ans = ans*x
    return ans

def next(a,p):
    ans = 0;
    while a>0:
        ans+=pow(a%10,p)
        a=int(a/10)
    return ans
    
def length(a,p,cnt):
    if check[a] != 0 : 
        return check[a]-1
    check[a] = cnt
    b = next(a,p)
    return length(b,p,cnt+1)

a,p = map(int,input().split())

print(length(a,p,1))