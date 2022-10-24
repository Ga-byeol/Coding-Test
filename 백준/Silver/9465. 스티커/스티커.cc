#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int dp[2][100001] = {0};
        int n;
        cin >> n;
        for(int i=0;i<n;i++)cin >> dp[0][i];
        for(int i=0;i<n;i++)cin >> dp[1][i];
        
        dp[0][1] += dp[1][0];
        dp[1][1] += dp[0][0];
        
        for(int i=2;i<n;i++)
        {
            dp[0][i] += max(dp[1][i-1],dp[1][i-2]);
            dp[1][i] += max(dp[0][i-1],dp[0][i-2]);
        }
        cout << max(dp[0][n-1],dp[1][n-1]) << '\n';
    }
}