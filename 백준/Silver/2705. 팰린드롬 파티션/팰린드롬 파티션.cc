#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int dp[1001];
    for(int i=0;i<=1000;i++) dp[i] = 1;
    for(int i=1;i<=1000;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            if((i-j)&1) continue;
            dp[i] += dp[(i-j)/2];
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
}