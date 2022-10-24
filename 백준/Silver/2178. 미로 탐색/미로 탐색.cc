#include <iostream>
#include <queue>

using namespace std;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int mx,my;
bool visited[101][101];
int map[101][101];

void bfs()
{
    queue<int> qx;
    queue<int> qy;
    qx.push(0);
    qy.push(0);
    visited[0][0] = true;
    
    while(qx.empty()==0)
    {
        int x = qx.front();
        int y = qy.front();
        qx.pop();
        qy.pop();
        
        for(int i=0;i<4;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx >= 0 && ny >= 0 && nx < mx && ny < my)
            {
                if(map[nx][ny] == 1 && !visited[nx][ny])
                {
                    qx.push(nx);
                    qy.push(ny);
                    
                    visited[nx][ny] = true;
                    
                    map[nx][ny] = map[x][y] + 1;
                }
            }
        }
    }
}

int main() {
    cin >> mx >> my;
    
    for(int i=0;i<mx;i++)
    {
        string s;
        cin >> s;
        for(int j=0;j<my;j++)
        {
            map[i][j] = s[j] - '0';
        }
    }
    bfs();
    cout << map[mx-1][my-1];
}
