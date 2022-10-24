#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool solve(vector<int> p)
{
	int sum = p[0] + p[1] + p[2];
	if (sum != (p[3] + p[4] + p[5])) return false;
	if (sum != (p[6] + p[7] + p[8])) return false;

	if (sum != (p[0] + p[3] + p[6])) return false;
	if (sum != (p[1] + p[4] + p[7])) return false;
	if (sum != (p[2] + p[5] + p[8])) return false;

	if (sum != (p[0] + p[4] + p[8])) return false;
	if (sum != (p[2] + p[4] + p[6])) return false;
	return true;
}
int main()
{
	vector<int> a(9);
	for (int i = 0; i < 9; ++i)
		cin >> a[i];

	vector<int> picked(9);
	for (int i = 0; i < 9; ++i)
		picked[i] = i + 1;

	int ans = 987654321;
	do {
		if (solve(picked)) {

			int diff = 0;
			for (int i = 0; i < 9; ++i) {
				diff += abs(a[i] - picked[i]);
			}
			ans = min(ans,diff);
		}
	} while (next_permutation(picked.begin(), picked.end()));

	cout << ans;
}