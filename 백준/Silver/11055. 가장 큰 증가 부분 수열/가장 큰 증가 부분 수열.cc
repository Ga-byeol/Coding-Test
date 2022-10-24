#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n] = {0};
    for(int i=0;i<n;i++) cin >> a[i];
    int dp[n] = {0};
    dp[0] = a[0];
    for(int i=1;i<n;i++)
    {
        vector<int> s;
        for(int j=0;j<i;j++) if(a[i] > a[j]) s.push_back(dp[j]);
        if(s.empty()) dp[i] = a[i];
        else dp[i] = a[i] + *max_element(s.begin(),s.end());
    }

    cout<< *max_element(dp,dp+n);
}