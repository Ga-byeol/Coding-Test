#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n] = {0};
    int dp[n] = {0};
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        a[i] = num;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i] > a[j] && dp[i] < dp[j])
            {
                dp[i] = dp[j];
            }
        }
    dp[i] += 1;
    }
    
    cout << *max_element(dp,dp+n);
}