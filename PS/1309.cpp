#include<iostream>
#define mod 9901
typedef long long ll;
using namespace std;

ll dp[100001][2];

int main(){
	int n;
	cin >> n;
	dp[1][0]=2, dp[1][1]=1;
	for(int i=2; i<=n; i++){
		dp[i][0]=(2*dp[i-1][1]+dp[i-1][0])%mod;
		dp[i][1]=(dp[i-1][0]+dp[i-1][1])%mod;
	}
	cout << (dp[n][0]+dp[n][1])%mod;
}