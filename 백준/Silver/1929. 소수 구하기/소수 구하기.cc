#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if(num == 1) return false;
    
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int M,N;
    cin >> M >> N;
    
    for(int i = M;i <= N;i++)
    {
        if(isPrime(i)) cout << i << '\n';
    }
}