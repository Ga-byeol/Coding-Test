#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<string> s;
    string str;
    cin >> str;
    int len = str.length();
    
    for(int i = 0; i < len ;i++)
    {
        s.insert(str);
        str.erase(0,1);
    }
    
    for(auto x : s)
    {
        cout << x << '\n';
    }
}