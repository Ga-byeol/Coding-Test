#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> edge[1001];
bool mark[1001];
int cnt = 0;
bool flag = true;
void dfs(int n)
{
    if(mark[n])return;
    mark[n] = true;
    for(int x : edge[n]) dfs(x);
}

int main() {
    int n,t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            edge[i].push_back(x);
            edge[x].push_back(i);
        }
        for(int i = 1;i<=n;i++)
        {
            
            if(!mark[i]) 
            {
                dfs(i);
                cnt++;
            }

            flag = true;
        }
        cout << cnt << '\n';
        for(int i = 1;i<=n;i++)
        {
            edge[i].clear();
        }
        memset(mark,false,sizeof(mark));
        cnt = 0;
    }
}