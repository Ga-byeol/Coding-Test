#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int dp[1001][10] = {0};
    int sum=0;
    for(int i=0;i<10;i++) dp[1][i] = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<10;j++)
        {
            
            for(int x=j;x<10;x++) dp[i][j] = (dp[i][j]+dp[i-1][x])%10007;
        }
    }
    for(int i=0;i<10;i++) sum = (sum+dp[n][i])%10007;
    cout << sum;
}