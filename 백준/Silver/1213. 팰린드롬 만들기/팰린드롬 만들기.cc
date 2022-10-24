#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
	string str;
	
	int A[26]={0};
	
	vector<char> v;
	
	cin >> str;
	
	char middle = 0;
    bool flag = false;
    
    for(int i = 0; i < str.length(); i++)
    {
        A[str[i]-'A']++;
    }
    
    for(int i = 0; i < 26; i++)
    {
        if(A[i] % 2 == 1)
        {
            
            
            if(flag)
            {
                cout << "I'm Sorry Hansoo";
                return 0;
            }
            middle = i + 'A';
            A[i]--;
            flag = true;
        }        
        if(A[i] % 2 == 0 && A[i] != 0)
        {
            for(int z = 0; z < A[i]/2;z++) v.push_back(i+'A');
        }
    }
    for(auto x : v)
    {
        cout << x;
    }
    
    if(middle) cout << middle;
    
    reverse(v.begin(),v.end());
    
    for(auto x : v)
    {
        cout << x;
    }
}