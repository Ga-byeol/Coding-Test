#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    string str;
    
    int cnt = 0;
    
    for(int i = 0;i < T; i++)
    {
        cin >> str;
        for(auto x : str)
        {
            if(x == '(') cnt ++;
            else if(x == ')') cnt--;
            
            if(cnt < 0) break;
        }
        if(cnt != 0) cout << "NO" << '\n';
        else cout << "YES" << '\n';
        cnt = 0;
    }
}