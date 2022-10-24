#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int x;
    priority_queue<int, vector<int>, greater<int> > a;
    cin >> N;

    while(N--)
    {
       
        cin >> x;
        
        if(x == 0)
        {
            if(a.empty()) cout << 0 << '\n';
            else {
                cout << a.top() << '\n';
                a.pop();
            }
        }
        else 
        {
            a.push(x);
        }
    }
}