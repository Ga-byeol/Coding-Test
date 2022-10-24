#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int num;
    multiset<int> m;
    cin >> N;
    
    while(N--)
    {
        cin >> num;
        m.insert(num);
    }
    
    cout << *m.begin() << ' ' << *(--m.end());
}