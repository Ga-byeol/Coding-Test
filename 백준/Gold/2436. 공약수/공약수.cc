#include <stdio.h>

int gcd(int a, int b)
{ 
	if (b==0) return a;
    
	else return gcd(b,a % b);
}

int main() 
{
	int a, b;
	int x, y;
	scanf("%d %d", &a, &b);
	b /= a;

	for(int i = 1; i * i <= b; i++)
		if (b % i == 0) 
        {
			if (gcd(i, b / i) == 1) x = i, y = b / i;	
		}
	printf("%d %d", x * a, y * a);
}