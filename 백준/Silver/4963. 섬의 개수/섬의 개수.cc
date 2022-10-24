#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int dx[8] = {0,0,1,-1,1,-1,1,-1};
int dy[8] = {1,-1,0,0,-1,1,1,-1};
int mx;
int my;
int land;
bool visited[51][51];
int map[51][51];

void dfs(int x,int y)
{
    visited[x][y] = true;
    
    for(int i=0;i<8;i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx >= 0 && ny >= 0 && nx < mx && ny < my)
        {
            if(map[nx][ny] == 1 && !visited[nx][ny]) dfs(nx,ny);
        }
    }
}

int main() {
    
    while(true)
    {
        land = 0;
        cin >> my;
        cin >> mx;
        if(mx==0&&my==0) break;
        
        for(int i=0;i<mx;i++)
        {
            for(int j=0;j<my;j++)
            {
                cin >> map[i][j];
                visited[i][j] = false;
            }
        }
        
        for(int i=0;i<mx;i++)
        {
            for(int j=0;j<my;j++)
            {
                if(map[i][j] == 1 && !visited[i][j])
                {
                    land++;
                    dfs(i,j);
                }
            }
        }
        cout << land << '\n';
    }
}
