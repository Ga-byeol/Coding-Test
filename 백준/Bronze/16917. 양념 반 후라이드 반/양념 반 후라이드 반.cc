#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int price = 0;
    
    if(a+b > c*2)
    {
        for(int i=0;i<min(x,y);i++) price = price + (c * 2);

        if(a > c*2 && x > y) price = price + c*2*(x-y);
        else if (b > c*2 && x < y) price = price + c*2*(y-x);
        else price = price + (x > y ? a : b)*(max(x,y) - min(x,y));
    }
    else  price = a*x + b*y;
    
    cout << price;
}