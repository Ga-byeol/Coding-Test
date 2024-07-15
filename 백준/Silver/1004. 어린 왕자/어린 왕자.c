#include <stdio.h>
#include <math.h>

double cp(int x, int y, int a, int b) {
	return sqrt(pow(x - a, 2) + pow(y - b, 2));
}

int main() {
	int t;

	scanf("%d", &t);

	while (t) {
		int start_x, start_y, end_x, end_y;

		scanf("%d %d %d %d", &start_x, &start_y, &end_x, &end_y);

		int n;
		
		scanf("%d", &n);

		int cnt = 0;

		while (n) {
			int x, y, r;
			scanf("%d %d %d", &x, &y, &r);

			double start = cp(x, y, start_x, start_y);
			double end = cp(x, y, end_x, end_y);

			if (start <= r != end <= r) cnt++;
			//if (end <= r) cnt++;
			//printf("%lf\n", cp(x, y, start_x, start_y));	
			//printf("%lf\n", cp(x, y, end_x, end_y));
			n--;
		}
		printf("%d\n", cnt);
		t--;
	}
}