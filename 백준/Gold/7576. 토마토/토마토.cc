#include <iostream>
#include <algorithm>
#include<queue>
#include<cstring>

using namespace std;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int M,N;
int result;
bool visited[1001][1001];
int map[1001][1001];
queue<int> qx;
queue<int> qy;

void bfs() 
{
    result = 0;
    int x,y;
    
    while(qx.empty()==0 && qy.empty()==0)
    {
        x = qx.front();
        y = qy.front();
        qx.pop();
        qy.pop();
        
        visited[x][y] = true;
        
        for(int i=0;i<4;i++)
        {
            int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx >= 0 && ny >= 0 && nx < N && ny < M)
			{
			    if(map[nx][ny] == 0 && !visited[nx][ny])
			    {
			        qx.push(nx);
			        qy.push(ny);
			        visited[nx][ny] = true;
			        
			        map[nx][ny] = map[x][y] + 1;
			        result = map[nx][ny];
			    }
			}
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
       {
            if(map[i][j]==0) result = -1;
        }
    }
    if(result > 0) cout << result-1 << '\n';
    else cout << result << '\n';
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> M >> N;
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin >> map[i][j];
            
            if(map[i][j]==1)
            {
                qx.push(i);
                qy.push(j);
            }
        }
    }
    bfs();
}