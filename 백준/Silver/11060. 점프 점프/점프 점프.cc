#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, jump[1001], dp[1001]={};
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> jump[i];
		dp[i]=987654321;
	}
	dp[1]=0;
	for(int j=1; j<=n; j++){
		for(int k=0; k<=jump[j]; k++){
			if((j+k)<=n)
				dp[j+k]=min(dp[j]+1,dp[j+k]);
		}
	}
	if(dp[n]==987654321) cout << -1;
	else cout << dp[n];
}