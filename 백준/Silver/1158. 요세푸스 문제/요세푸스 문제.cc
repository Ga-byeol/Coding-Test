#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    list<int> a;
    
    for(int i = 1; i <= N; i++)
    {
        a.push_back(i);
    }
    
    auto it = a.begin();
    
    for(int i=1;i<K;i++)
    {
        it++;
    }
    cout << '<';
    for(int i = 0; i < N;i++)
    {
        cout << *it;
        
        it = a.erase(it);
        if(it == a.end()) it = a.begin();
        
        for(int j = K - 1;j>0;j--)
        {
            ++it;
            if(it == a.end()) it = a.begin();
        }
        if(i == N-1) cout << '>';
        else cout << ", ";
    }
}