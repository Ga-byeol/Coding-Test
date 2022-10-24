#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

vector<int> edge[1001];
bool marked[1001];

void dfs(int n)
{
    if(marked[n]) return;
    marked[n] = true;
    cout << n <<' ';
    for(int x : edge[n]) dfs(x);
}
void bfs(int n)
{
    queue<int> q;
    marked[n] = true;
    q.push(n);
    
    while(!q.empty())
    {
        int v = q.front();
        cout << v << ' ';
        q.pop();
        for(int x : edge[v])
        {
            if (!marked[x])
            {
                marked[x] = true;
                q.push(x);
            }
        }
    }
}
int main(void)
{
    int n,m,v;
    cin >> n >> m >> v;
    
    for(int i = 0; i < m; i++)
    {
        int x,y;
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for(int i = 1; i <= n; i++) sort(edge[i].begin(),edge[i].end());

    dfs(v);
    cout << '\n';
    memset(marked,false,sizeof(marked));
    bfs(v);
}
