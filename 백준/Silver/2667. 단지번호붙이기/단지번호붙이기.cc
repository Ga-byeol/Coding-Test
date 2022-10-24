#include <iostream>
#include <algorithm>

using namespace std;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int aparts[25*25];
int n;
int apartNum=0;
bool visited[25][25];
int map[25][25];

void dfs(int x, int y) 
{
    visited[x][y] = true;
    aparts[apartNum]++;

    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >=0 && ny >=0 && nx < n && ny < n){
            if(map[nx][ny] == 1 && !visited[nx][ny]){
                dfs(nx,ny);
            }
        }
    }
}

int main() {
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        for(int j=0;j<n;j++)
        {
            map[i][j] = s[j] - '0';
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(map[i][j] == 1 && !visited[i][j])
            {
                apartNum++;
                dfs(i,j);
            }
        }
    }
    sort(aparts,aparts+sizeof(aparts)/sizeof(int));
    cout << apartNum << '\n';
    for(int i=0;i<sizeof(aparts)/sizeof(int);i++)
    {
        if(aparts[i]==0) continue;
        else cout << aparts[i] << '\n';
    }
}
