#include<iostream>
#define MOD 1000000000
#define MAX 201
typedef long long ll;
using namespace std;

int main(){
	int n, k;
	ll dp[MAX][MAX]={0, };
	cin >> n >> k;
	
	for(int i=0; i<=n; i++)
		dp[1][i]=1;
	for(int i=2; i<=k; i++){
		dp[i][0]=1;
		for(int j=1; j<=n; j++)
			dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
	}
	
	cout << dp[k][n];
}