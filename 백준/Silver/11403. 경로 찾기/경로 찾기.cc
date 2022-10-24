#include <iostream>

using namespace std;

int n;
int graph[101][101];

void floyd()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(graph[j][i] && graph[i][k]) graph[j][k] = 1; 
            }
        }
    }
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> graph[i][j];
        }
    }
    floyd();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
}