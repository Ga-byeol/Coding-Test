#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(char s : str) cout << s << '\n';
    return 0;
}