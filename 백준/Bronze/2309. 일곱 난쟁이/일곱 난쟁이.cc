#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int dwarf[9];
    int sum = 0;
    
    for(int i=0;i<9;i++ )
    {
        int x,first,second;
        cin >> x;
        
        dwarf[i] = x;
    }
    for(int i = 0;i<9;i++)
    {
        sum+=dwarf[i];
    }
    sort(dwarf,dwarf+9);
    for(int i = 0; i < 9; i++)
    {
        for(int j=1;j<9;j++)
        {
            if(i==j) continue;
            if(sum-dwarf[i]-dwarf[j] == 100)
            {
                for(int x : dwarf)
                {
                    if(x==dwarf[i]||x==dwarf[j]) continue;
                   cout << x << '\n';
                }
                return 0;
            }
        }
    }

}