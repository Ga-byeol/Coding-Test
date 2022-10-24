#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<string> v;
    vector<string> r;
    string str;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(),v.end());
    
    for(int i = 0; i < M;i ++)
    {
        cin >> str;
        if(binary_search(v.begin(),v.end(),str)) r.push_back(str);
    }
    sort(r.begin(),r.end());
    
    cout << r.size() << '\n';
    for(auto x : r)
    {
        cout << x << '\n';
    }
    
}