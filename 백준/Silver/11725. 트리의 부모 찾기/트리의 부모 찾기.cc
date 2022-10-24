#include <iostream>
#include <vector>

using namespace std;

bool visited[100001];
int parent[100001];
vector<int> edge[100001];

void dfs(int node)
{
    visited[node] = true;
    
    for(int i=0;i<edge[node].size();i++)
    {
        int next = edge[node][i];
        if(!visited[next])
        {
            parent[next] = node;
            dfs(next);
        }
    }
}
int main() {
    int n;
    cin >> n;
    
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }

    dfs(1);
    
    for(int i=2;i<=n;i++)
    {
        cout << parent[i] << '\n';
    }
}