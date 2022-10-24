#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int T;
    string str;
    string input;
    cin >> str;
 
    list<char> result;
    
    for(char x : str)
    {
        result.push_back(x);
    }
    
    list<char>::iterator itr = result.end();
    
    cin >> T;

    cin.ignore();
    
    while (T--)
    {
        getline(cin,input);
        
        if (input == "L")
        {
            if(itr == result.begin()) continue;
            itr--;
        }
        else if (input == "D")
        {
            if (itr == result.end()) continue;
            itr++;
        }
        else if (input == "B")
        {
            if(itr == result.begin())continue;
            itr = result.erase(--itr);
        }
        else { result.insert(itr, input[2]); }
     }
        
        //reverse(result.begin(),result.end());
        
        for (char x : result)
        {
            cout << x;
        }
}