#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool _sort(string &s1,string &s2)
{
    if(s1.size() == s2.size()) return s1 < s2;
    
    else return s1.size() < s2.size();
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    vector<string> v;
    
    int n;
    string str;
    cin >> n;
    
    while(n--)
    {
        cin >> str;
        v.push_back(str);
    }
    
    sort(v.begin(),v.end(),_sort);
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for(auto x : v)
    {
        cout << x << endl;
    }
}