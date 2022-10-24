#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
 

int main(void)
{
    int A, B, C;
    bool Visit[201][201][201];
 
    vector<int> V;
 
    cin >> A >> B >> C;
    queue<pair<pair<int, int>, int>> Q;
    Q.push(make_pair(make_pair(0, 0), C));
    
    while (Q.empty() == 0)
    {
        int a = Q.front().first.first;
        int b = Q.front().first.second;
        int c = Q.front().second;
        Q.pop();
 
        if (Visit[a][b][c] == true) continue;
        Visit[a][b][c] = true;
 
        if (a == 0) V.push_back(c);
 
        if (a + b > B) Q.push(make_pair(make_pair(a + b - B, B), c));
        else Q.push(make_pair(make_pair(0, a + b), c));
 
        if (a + c > C) Q.push(make_pair(make_pair(a + c - C, b), C));
        else Q.push(make_pair(make_pair(0, b), a + c));
 
        if (b + a > A) Q.push(make_pair(make_pair(A, b + a - A), c));
        else Q.push(make_pair(make_pair(b + a, 0), c));
 
        if (b + c > C) Q.push(make_pair(make_pair(a, b + c - C), C));
        else Q.push(make_pair(make_pair(a, 0), b + c));
 
        if (c + a > A) Q.push(make_pair(make_pair(A, b), c + a - A));
        else Q.push(make_pair(make_pair(c + a, b), 0));
 
        if (c + b > B) Q.push(make_pair(make_pair(a, B), c + b - B));
        else Q.push(make_pair(make_pair(a, b + c), 0));
    }
 
    sort(V.begin(), V.end());
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }
}
