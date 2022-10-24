#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a,int b)
{
    return b ? gcd(b,a%b) : a;
}

int main() {
    int a,b;
    cin >> a >> b;
    bool arr[2002][2002];
    int result = 0;
    for(int i = a; i <= b; i ++ )
    {
        for(int j = 1; j <= i; j ++ )
        {
            
            int num = gcd(i,j);
            
            if(!arr[i/num][j/num])
            {
                arr[i/num][j/num] = true;
                result++;
            }
        }
    }
    cout << result;
}