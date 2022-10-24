#include <iostream>
#include <string>

using namespace std;
string map[501];
bool flag = false;
int r,c;
bool check(int i,int j)
{
    if(i > 0) if(map[i-1][j] == 'S') return true;
    if(i < r-1) if(map[i+1][j] == 'S') return true;
    if(j > 0) if(map[i][j-1] == 'S') return true;
    if(j < c-1) if(map[i][j+1] == 'S') return true;
    return false;
}
int main() {
    
    cin >> r;
    cin >> c;
    
    for(int i=0;i<r;i++)
    {
        cin >> map[i];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(map[i][j] == 'W' && check(i,j))
            {
                cout << 0;
                return 0;
            }
            if(map[i][j] == '.') map[i][j] = 'D';
        }
    }
    cout << 1 << endl;
    for(auto x:map) cout << x << '\n';
}