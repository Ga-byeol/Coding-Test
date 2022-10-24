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
    
    int b,e;
    
    while(M--)
    {
        cin >> b >> e;
        iter_swap(v.begin()+b-1,v.begin()+e-1);
    }
    
    for(auto x : v)
    {
        cout << x << ' ';
    }
}