#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
    string str;
    
    while(true)
    {
        string re = "yes";
        cin >> str;
        if(str == "0") break;
        
        int len = str.length()-1;
        for(int i = 0; i < len; i++)
        {
            if(str[i] != str[len-i]) re = "no";
        }
        
        cout << re << '\n';
    }
}