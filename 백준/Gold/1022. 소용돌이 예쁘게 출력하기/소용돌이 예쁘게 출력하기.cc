#include <stdio.h>

int main()
{
	int r1, c1, r2, c2;
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);

	int arr[50][5];
    int ny[4] = { -1,0,1,0 };
    int nx[4] = { 0,-1,0,1 };
    
	for (int i = 0; i <= (r2 - r1); ++i)
		{
		    for (int j = 0; j <= (c2 - c1); ++j) 
		    {
			    arr[i][j] = 0;
		    }
		}

	int y = 0, x = 0;
	int dir = 3;
	int cnt = 0, num = 1, ncnt = 1;

	while (!arr[r2 - r1][0] || !arr[0][0] || !arr[0][c2 - c1] || !arr[r2 - r1][c2 - c1]) 
	{
		if (y - r1 >= 0 && y - r1 <= (r2 - r1) && x - c1 >= 0 && x - c1 <= (c2 - c1)) arr[y - r1][x - c1] = num;
		
		cnt++;
		num++;

		y = y + ny[dir];
		x = x + nx[dir];

		if (cnt == ncnt) 
		{
			cnt = 0;
			dir = (dir + 1) % 4;
			if (dir == 1 || dir == 3)ncnt++;
		}
	}

	cnt = 0;

	while (num) 
    {
		num /= 10;
		cnt++;
	}

	for (int i = 0; i <= (r2 - r1); ++i) 
    {
		for (int j = 0; j <= (c2 - c1); ++j) 
        {
			printf("%*d ", cnt, arr[i][j]);
		}
		printf("\n");
	}
}