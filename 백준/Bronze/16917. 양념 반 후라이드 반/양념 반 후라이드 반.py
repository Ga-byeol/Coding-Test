a,b,c,x,y = map(int,input().split())
price = 0

if a+b > c*2 :
    for i in range(min(x,y)): price = price + (c * 2);

    if a > c*2 and x > y: price = price + c*2*(x-y);
    elif b > c*2 and x < y: price = price + c*2*(y-x);
    else: price = price + (a if x > y else b)*(max(x,y) - min(x,y));
else: price = a*x + b*y;

print (price);