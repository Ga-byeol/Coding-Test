#include <iostream>

using namespace std;

int main() {
    int e=1,s=1,m=1,cnt = 1;
    int E,S,M;
    cin >> E >> S >> M;
    while(true)
    {
        if(e == E && s == S && m == M) break;
        
        e++;
        s++;
        m++;
        if(e == 16) e = 1;
        if(s == 29) s = 1;
        if(m == 20) m = 1;
        cnt++;
    }
    cout << cnt;
}