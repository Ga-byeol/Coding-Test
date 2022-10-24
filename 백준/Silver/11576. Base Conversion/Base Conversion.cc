#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main() 
{
    int A,B;
    cin >> A >> B;
    int pos;
    cin >> pos;
    vector<int> v;
    vector<int> r;
    for(int i = 0; i < pos; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    int num = 0;
    for(auto x : v)
    {
        num += x * pow(A,--pos);
    }
    
    while(true)
    {
        r.push_back(num%B);
        if(B > num) break; 
        num /= B;
    }
    
    reverse(r.begin(),r.end());
    
    for(int x : r)
    {
        cout << x << ' ';
    }
    
}