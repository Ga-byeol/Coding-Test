#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dp[n+1] = {0};
    int square[317];
    for(int i=1;i<317;i++)
    {
        square[i-1] = i*i;
    }
    for(int i=1;i<=n;i++)
    {
        vector<int> s;
        for(int j:square)
        {
            if(j>i) break;
            s.push_back(dp[i-j]);
        }
        dp[i] = *min_element(s.begin(),s.end())+1;
    }
    cout << dp[n];
}