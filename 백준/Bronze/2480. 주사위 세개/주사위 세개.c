#include<stdio.h>
#include<stdlib.h>

int compare(const int* first, const int* second) { // 오름차순
	return(*first - *second);
}

int main()
{
	int res = 0, dice[3];
	
	for (int i = 0; i < 3; i++) {
		scanf("%d", dice+i);
	}

	qsort(dice, sizeof(dice)/ sizeof(int), sizeof(int), compare);

	if (dice[0] == dice[1] && dice[1] == dice[2]) res = 10000 + dice[1] * 1000;
		
	else if (dice[0] == dice[1] || dice[1] == dice[2]) res = 1000 + dice[1] * 100;
		
	else res = dice[2] * 100;

	printf("%d", res);
}