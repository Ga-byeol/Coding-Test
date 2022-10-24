#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
using namespace std;

bool cmp (tuple<string,int,int,int> a, tuple<string,int,int,int> b)
{
    if(get<1>(a) != get<1>(b)) return get<1>(a) > get<1>(b);
    
    else if(get<2>(a) != get<2>(b)) return get<2>(a) < get<2>(b);
    
    else if(get<3>(a) != get<3>(b)) return get<3>(a) > get<3>(b);
    
    else return get<0>(a) < get<0>(b);
}

int main() {
    int N;
    
    vector<tuple<string,int,int,int>> v;
    
    cin >> N;
    
    int k,e,m;
    string name;
    
    while(N--)
    {
        cin >> name >> k >> e >> m;
        v.push_back(make_tuple(name,k,e,m));
    }
    
    sort(v.begin(),v.end(),cmp);
    
    for(auto x : v)
    {
        cout << get<0>(x) << '\n';
    }
}