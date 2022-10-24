#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> edge[1001];
bool marked[1001];

void dfs(int n)
{
    if(marked[n]) return;
    marked[n] = true;
    for(int x : edge[n]) dfs(x);
}

int main(void)
{
    int n,m,cnt = 0;
    cin >> n >> m;
    
    for(int i = 0; i < m; i++)
    {
        int x,y;
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    
    for(int i =1;i<=n;i++)
    {
        if(!marked[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt;
}