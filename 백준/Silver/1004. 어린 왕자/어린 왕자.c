#include <stdio.h>
#include <math.h>

double cp(int x, int y, int a, int b) {
	return sqrt(pow(x - a, 2) + pow(y - b, 2));
}

int main() {
	int t;

	scanf("%d", &t);

	while (t) {
		int start_x, start_y, end_x, end_y, n, cnt = 0;

		scanf("%d %d %d %d", &start_x, &start_y, &end_x, &end_y);

		scanf("%d", &n);

		while (n) {
			int x, y, r;
			scanf("%d %d %d", &x, &y, &r);

			double start = cp(x, y, start_x, start_y);
			double end = cp(x, y, end_x, end_y);

			if (start <= r != end <= r) cnt++;
			n--;
		}
		printf("%d\n", cnt);
		t--;
	}
}