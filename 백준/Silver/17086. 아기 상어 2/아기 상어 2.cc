#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m;
vector<vector<int>> board;
vector<vector<bool>> visited;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int bfs(int y,int x)
{
    if(board[y][x]) return 0;
    visited.assign(n, vector<bool>(m, false));
    visited[y][x] = true;
    queue<pair<int,int>> q;
    q.push({y,x});
    
    int step = 0;
    
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            int ty = q.front().first;
            int tx = q.front().second;
            q.pop();
            
            for(int dir=0;dir<8;dir++)
            {
                int nx=tx+dx[dir];
                int ny=ty+dy[dir];
                if(nx >= 0 && ny >= 0 && nx < m && ny < n)
                {
                    if(visited[ny][nx]) continue;
                    if(board[ny][nx]) return step+1;
                    visited[ny][nx] = true;
                    q.push({ny,nx});
                }
            }
        }
        step++;
    }
    return step;
}
int main() {
    
    cin >> n >> m;
    board.assign(n, vector<int>(m, 0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> board[i][j];
        }
    }
    
    int result = -1;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int temp=bfs(i,j);
            if(temp>result)result = temp;
        }
    }
    cout << result;
}