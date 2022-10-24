#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> v;
    v.resize(N);
    int b,e,n;
    while(M--)
    {
        cin >> b >> e >> n;
        fill(v.begin()+b-1,v.begin()+e,n);
    }
    
    for(auto x : v)
    {
        cout << x << ' ';
    }
}