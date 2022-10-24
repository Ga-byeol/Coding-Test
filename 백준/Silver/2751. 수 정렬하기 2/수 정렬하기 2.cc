#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    set<int> s;
    cin >> N;
    int num;
    
    while(N--)
    {
        cin >> num;
        s.insert(num);
    }
    
    for(auto x : s)
    {
        cout << x << '\n';
    }
}