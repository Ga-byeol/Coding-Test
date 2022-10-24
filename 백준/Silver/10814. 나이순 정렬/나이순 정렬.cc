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
    vector<pair<int,string>> v;
    cin >> N;
    int year;
    string name;
    
    while(N--)
    {
        cin >> year >> name;
        v.push_back(make_pair(year,name));
    }
    
    stable_sort(v.begin(),v.end(),cmp);
    
    for(auto x : v)
    {
        cout << x.first << ' ' << x.second << '\n';
    }
}