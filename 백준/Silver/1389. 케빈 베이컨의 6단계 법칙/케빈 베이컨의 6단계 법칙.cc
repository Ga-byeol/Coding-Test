#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int graph[101][101];

void floyd()

{
    for (int k = 1; k <= N; k++)
        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                if (i == j)
                    continue;
                        else if (graph[i][k] && graph[k][j])
                            {
                                if (graph[i][j] == 0)
                                    graph[i][j] = graph[i][k] + graph[k][j];
                                else
                                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                            }
}

int main(void)
{
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;

        graph[x][y] = graph[y][x] = 1;
    }

    floyd();

    int result = 987654321;
    int person;
    for (int i = 1; i <= N; i++)
    {
        int sum = 0;
        for (int j = 1; j <= N; j++)
           sum += graph[i][j];
        if (result > sum) 
        {
            result = sum;
            person = i; 
        }
    }

    cout << person << endl;
}