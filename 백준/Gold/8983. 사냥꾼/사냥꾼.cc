#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int M, N, L;
	cin >> M >> N >> L;

	vector<int> shot(M);
	vector<pair<int, int>> animal(N);

	for (int& i : shot) cin >> i;

	for (auto& i : animal) cin >> i.first >> i.second;

	sort(shot.begin(), shot.end());
	sort(animal.begin(), animal.end());

	int ans = 0, last = 0;
	for (int i = 0; i < M - 1; i++) {
		int mid = (shot[i] + shot[i + 1]) / 2;
		
		while (last != animal.size() && animal[last].first <= mid) 
		{
			if (abs(animal[last].first-shot[i])+animal[last].second <= L) ans++;

			last++;
		}
	}

	while (last != animal.size()) 
	{
		if (abs(animal[last].first-shot.back())+animal[last].second <= L) ans++;

		last++;
	}

	cout << ans << '\n';
}