#include<iostream>
#define MOD 1000000007
typedef long long ll;
using namespace std;

ll dp[1000001][2];

int main(){
	ll n;
	dp[0][0]=0, dp[1][0]=2, dp[2][0]=7;
	dp[2][1]=1;
	cin >> n;
	
	for(int i=3; i<=n; i++){
		dp[i][1]=((dp[i-1][1]+dp[i-3][0])*2)%MOD;
		dp[i][0]=(dp[i][1]+dp[i-1][0]*2+dp[i-2][0]*3)%MOD;
	}
		
	cout << dp[n][0];
}