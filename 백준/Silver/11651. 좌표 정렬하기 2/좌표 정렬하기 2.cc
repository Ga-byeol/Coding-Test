#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (pair<int,int> x, pair<int,int> y)
{
    if(x.second == y.second) return x.first < y.first;
    else return x.second < y.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    vector<pair<int,int>> v;
    cin >> N;
    int x,y;
    
    for(int i = 0;i< N; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    
    sort(v.begin(),v.end(),cmp);
    
    for(auto x : v)
    {
        cout << x.first << ' ' << x.second << '\n';
    }
}