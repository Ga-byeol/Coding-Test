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
    int N,t;
    cin >> N;
    vector<int> v;
    int num;
    while(N--)
    {
        long long int result=0;
        cin >> t;
        for(int i=0;i<t;i++)
        {
            cin >> num;
            v.push_back(num);
        }
        for(int i=0;i<t;i++) for(int j=i+1;j<t;j++) result+=gcd(v[i],v[j]);
        v.clear();
        
        cout << result << '\n';
    }
}