#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

int main() {
    bitset<100000> a;
    bitset<100000> b;
    
    cin >> a;
    cin >> b;
    
    cout << (a&b) << '\n';
    cout << (a|b) << '\n';
    cout << (a^b) << '\n';
    a.flip();
    b.flip();
    cout << a << '\n';
    cout << b;
}