#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int T;
    cin >> T;
    
    string str;
    list<char> result;
    
    
    while (T--)
    {
        list<char>::iterator itr = result.end();
        cin >> str;

        for (char x : str)
        {
            if (x == '<')
            {
                if(itr == result.begin()) continue;
                itr--;
                
            }
            else if (x == '>')
            {
                if (itr == result.end()) continue;
                itr++;
            }
            else if (x == '-')
            {
                if(itr == result.begin())continue;
                itr = result.erase(--itr);
            }
            else { result.insert(itr, x); }
        }
        
        //reverse(result.begin(),result.end());
        
        for (char x : result)
        {
            cout << x;
        }
        
        cout << '\n';
        result.clear();
    }
}