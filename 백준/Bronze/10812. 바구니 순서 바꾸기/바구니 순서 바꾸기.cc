#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> v;
    
    for(int i = 1; i <= N; i++) v.push_back(i);
    
    int b,e,n;
    
    while(M--)
    {
        cin >> b >> e >> n;
        rotate(v.begin()+b-1,v.begin()+n-1,v.begin()+e);
    }
    
    for(auto x : v)
    {
        cout << x << ' ';
    }
}