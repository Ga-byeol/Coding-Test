#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    int B;
    cin >> B;
    vector<char> v;
    
    if(B==0) 
    {
        cout << 0;
        return 0;
    }
    
    while(B!=0)
    {
        if(B%-2 == 0)
        {
            B = (B/-2);
            v.push_back('0');
        }
        else
        {
            B = (B-1)/-2;
            v.push_back('1');
        }
    }
    reverse(v.begin(),v.end());
    
    for(auto x : v)
    {
        cout << x;
    }
}