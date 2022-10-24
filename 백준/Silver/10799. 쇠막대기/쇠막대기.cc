#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    int cnt=0,result=0;
    cin >> str;
    
    for(int i = 0;i <str.size(); i++)
    {
        if(str[i] == '(')
        {
            if(str[i+1] == ')') result += cnt;
            
            else cnt++;
        }
        else if(str[i] == ')' && str[i-1] != '(') {cnt--; result++;}
    }
    cout << result;
}