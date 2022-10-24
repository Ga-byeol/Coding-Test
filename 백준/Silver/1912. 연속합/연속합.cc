#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int dp[n];
    int sum[100001];
    sum[0] = a[0];
    for(int i=0;i<n-1;i++)
    {
        sum[i+1] = max(sum[i]+a[i+1],a[i+1]);
    }
    cout << *max_element(sum,sum+sizeof(a)/sizeof(a[0]));
}