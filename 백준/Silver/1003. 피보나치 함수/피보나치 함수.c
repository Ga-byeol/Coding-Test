#include <stdio.h>

int main() {
	long long int zero[41] = { 1, 0 };
	long long int one[41] = { 0, 1 };
	int t;

	scanf("%d", &t);

	for (int i = 2; i < 41; i++) {
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}

	while (t) {
		int n;

		scanf("%d", &n);

		printf("%d %d\n", zero[n], one[n]);

		t--;
	}
}