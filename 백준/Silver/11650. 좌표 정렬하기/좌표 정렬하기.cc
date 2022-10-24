#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool cmp (pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main() {
    int N;
    vector<pair<int,int>> v;
    cin >> N;
    int x,y;
    while(N--)
    {
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    
    sort(v.begin(),v.end());
    
    for(auto x : v)
    {
        cout << x.first << ' ' << x.second << '\n';
    }
}