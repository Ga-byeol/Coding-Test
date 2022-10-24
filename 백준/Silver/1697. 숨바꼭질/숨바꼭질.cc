#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int N, K;
bool visit[100001];

int BFS(int N, int K) {
	queue<pair <int, int>> q;
	q.push(make_pair(N, 0));
	visit[N] = true;

	while (!q.empty()) {
		int Line = q.front().first;
		int time = q.front().second;
		q.pop();

		if (Line == K)	return time;

		if (Line + 1 < 100001 && !visit[Line + 1]) {
			q.push(make_pair(Line + 1, time + 1));
			visit[Line + 1] = true;
		}
		if (Line - 1 >= 0 && !visit[Line - 1]) {
			q.push(make_pair(Line - 1, time + 1));
			visit[Line - 1] = true;
		}
		if (Line * 2 < 100001 && !visit[Line * 2]) {
			q.push(make_pair(Line * 2, time + 1));
			visit[Line * 2] = true;
		}
	}
	return 0;
}

int main() {
	cin >> N >> K;
	
	cout << BFS(N, K) << endl;
	return 0;
}