#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;
    vector<int> v[100001];
    set<int> c;
    cin >> N;
    int point,color;
    for(int i = 0; i< N; i++)
    {
        cin >> point >> color;
        v[color].push_back(point);
        c.insert(color);
    }
    long long int sum = 0;
    
    for(auto x : c)
    {
        int size = v[x].size();
        
        if(size < 2) continue;
        
        sort(v[x].begin(),v[x].end());
        
        sum += v[x][1] - v[x][0]+v[x][size-1] - v[x][size-2];
        
        for(int i = 1; i < size-1; i++) sum += min(v[x][i+1]-v[x][i],v[x][i]-v[x][i-1]);
    }
    cout << sum;
}