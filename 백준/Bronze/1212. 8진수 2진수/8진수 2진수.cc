#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N;
    string B;
    cin >> B;
    int cnt = 0;
    bool flag = false;
    vector<int> v;
    
    int len = B.length();
    if(B[0]=='0') 
    {
        cout << 0;
        return 0;
    }
    while(len--)
    {
        int num = B[len] - '0';
        
        for(int i = 0 ; i < 3; i++)
        {
            v.push_back(num%2);
            num /= 2; 
        }
        if(len == 0) break;
    }
    
    reverse(v.begin(),v.end());
    
    for(int x : v)
    {
        if(x == 1) flag = true;
        if(flag) cout << x;
    }
}