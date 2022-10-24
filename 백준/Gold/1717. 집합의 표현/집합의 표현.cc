#include <iostream>

using namespace std;
int arr[1000001];

int find(int x)
{
    if(x == arr[x]) return x;
    else return arr[x] = find(arr[x]);
}

void Union(int x,int y)
{
    x= find(x);
    y= find(y);
    if(x!=y)
    {
        arr[x] = y;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<=n;i++)
    {
        arr[i] = i;
    }
    while(m--)
    {
        int check,a,b;
        cin >> check >> a >> b;
        if(!check) Union(a,b);
        
        else 
        {
            if(find(a) == find(b)) cout << "YES" <<'\n';
            else cout << "NO" << '\n';
        }
    }
}