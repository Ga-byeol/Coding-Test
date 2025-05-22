#include <iostream>
#include <vector>
using namespace std;

vector<int> v[51];
int cnt = 0;
int n, k;

void dfs(int node)
{
    for (int x : v[node]) dfs(x);
    if (v[node].empty()) cnt++; 
}

void removeNode() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] == k) {
                v[i].erase(v[i].begin() + j);
                break;
            }
        }
    }
}

int main() {

    cin >> n;
    int root = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == -1) {
            root = i;
            continue;
        }
        v[a].push_back(i);
    }

    cin >> k;

    if (k == root) {
        cout << 0;
        return 0;
    }

    removeNode();

    dfs(root);
    cout << cnt;
}