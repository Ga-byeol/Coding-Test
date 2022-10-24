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
    vector<int> v;
    cin >> N;
    int x;
    while(N--)
    {
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    
    for(auto x : v)
    {
        cout << x << '\n';
    }
}