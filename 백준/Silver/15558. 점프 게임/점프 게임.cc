#include <iostream>
#include <queue>

using namespace std;

int n,k;
int v[2][100000] = {1};
char line[2][100001];

int main() {
    cin >> n >> k;
    cin >> line[0];
    cin >> line[1];
    
    queue<pair<int,int>> q;
    q.push({0,0});
    
    while(!q.empty())
    {
        int pos = q.front().first;
        int dir = q.front().second;
        q.pop();
        
        if(v[dir][pos] > pos+1) continue;
        if(pos + k >= n)
        {
            cout << 1;
            return 0;
        }
        if (line[dir][pos+1] == '1' && !v[dir][pos+1])
        {
			v[dir][pos+1] = v[dir][pos]+1;
			q.push({pos+1,dir});
		}
		if (pos>0 && line[dir][pos-1] == '1' && !v[dir][pos-1])
		{
		    v[dir][pos-1] = v[dir][pos]+1;
    		q.push({pos-1,dir});
		}
		if (line[!dir][pos+k] == '1' && !v[!dir][pos+k])
		{	
		    v[!dir][pos+k] = v[dir][pos]+1;
		    q.push({pos+k,!dir});
        }
    }
    cout << 0;
}