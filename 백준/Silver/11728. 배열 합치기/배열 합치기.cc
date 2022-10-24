#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;


int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    
    multiset<int> s;
    
    for(int i = 0; i < N+M; i ++)
    {
        int num;
        cin >> num;
        s.insert(num);
    }
    
    for(auto x : s)
    {
        cout << x << ' ';
    }
}