#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    long dp[101] = {0};
    dp[0] = dp[1] = dp[2] = 1;
    dp[3] = dp[4] = 2;
    
    for(int i = 5; i<101;i++) dp[i] = dp[i-5] + dp[i-1];
    while(t--)
    {
        int n;
        cin >> n;
        cout << dp[n-1] <<'\n';
    }
}