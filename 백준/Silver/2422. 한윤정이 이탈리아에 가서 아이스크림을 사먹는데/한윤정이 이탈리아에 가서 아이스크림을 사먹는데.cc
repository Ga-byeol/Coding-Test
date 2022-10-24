#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    bool ice[205][205];
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;
        ice[x][y] = ice[y][x] = true;
    }
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(ice[i][j]) continue;
            for(int k=j+1;k<=n;k++)
            {
                if(ice[i][k]||ice[j][k]) continue;
                ans++;
            }
        }
    }
    cout<<ans;
}