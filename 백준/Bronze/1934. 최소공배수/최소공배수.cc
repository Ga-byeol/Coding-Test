#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int gcd(int a, int b){
	while(b!=0){
		int r = a%b;
		a= b;
		b= r;
	}
	return a;
}

int lcm(int a, int b){
    return a * b / gcd(a,b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    
    int a,b;
    while(N--)
    {
        cin >> a >> b;
        cout << lcm(a,b) << '\n';
    }
    
}