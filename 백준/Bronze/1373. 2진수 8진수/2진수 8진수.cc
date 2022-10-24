#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N;
    string B;
    cin >> B >> N;
    int cnt = 0;
    
    vector<int> v;
    
    int len = B.length();
    int num;
    
    while(true)
    {
        num = 0;
        for(int i = 0 ; i < 3; i++)
        {
            if(len == 0) break;
            num += pow(2,i) * (B[--len] - '0');
            
        }
        v.push_back(num);
        if(len == 0) break;
    }
    
    reverse(v.begin(),v.end());
    
    for(int x : v)
    {
        cout << x;
    }
}