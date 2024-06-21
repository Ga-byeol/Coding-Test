#include<stdio.h>

int main() {
	int chess[6] = { 1, 1, 2, 2, 2 ,8 };
	int have_Chess[6];

	for (int i = 0; i < 6; i++) scanf("%d", &have_Chess[i]);
	for (int i = 0; i < 6; i++) printf("%d ", chess[i] - have_Chess[i]);
}