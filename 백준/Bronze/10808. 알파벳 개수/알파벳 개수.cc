#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    for(int i = 'a';i <= 'z';i++)
    {
        cout << count(str.begin(),str.end(),i) << ' ';
    }
}