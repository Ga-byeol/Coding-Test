#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t;
    int x,y;
    cin >> t;
    
    while(t--)
    {
        cin >> x >> y;
        cout << x+y << "\n";
    }

}