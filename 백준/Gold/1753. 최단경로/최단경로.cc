#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int V,E,start;
int dist[20001];
vector<pair<int,int>> v[20001];

void dij() 
{
    priority_queue<pair<int,int>> q;
    q.push({0,start});
    dist[start] = 0;
    
    while(!q.empty())
    {
        int cost = -q.top().first;
        int cur = q.top().second;
        q.pop();
        
        for(int i=0;i<v[cur].size();i++)
        {
            int next = v[cur][i].first;
            int n = v[cur][i].second;
            
            if(dist[next]>cost+n)
            {
                dist[next] = cost + n;
                q.push({-dist[next],next});
            }
        }
    }
    for(int i=1;i<=V;i++)
    {
        if(dist[i] == 987654321) cout << "INF" << '\n';
        else cout << dist[i] << '\n';
    }
    
}
 
int main() {
    cin >> V >> E;
    cin >> start;
    for(int i=0;i<E;i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
    }
    
    for(int i=1;i<=V;i++) dist[i] = 987654321;
    
    dij();
}