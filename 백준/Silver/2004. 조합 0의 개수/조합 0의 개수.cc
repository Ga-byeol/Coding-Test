#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long func(int n, int x)
{
	int num = 0;
 
	for (long long i = x; n / i >= 1; i *= x) {
		num += n / i;
	}
	
	return num;
}

int main() {
    
	int n, m;
 
	long long five = 0;
	long long two = 0;
	
	cin >> n >> m;
 
	five = func(n, 5) - func(n - m, 5) - func(m, 5);
	two = func(n, 2) - func(n - m, 2) - func(m, 2);
 
	cout << min(five, two);
}