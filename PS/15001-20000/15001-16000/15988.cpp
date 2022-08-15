#include<iostream>
#define MOD 1000000009
#define MAX 1000000
using namespace std;

long long dp[MAX]={0, };

int main(){
	dp[1]=1, dp[2]=2, dp[3]=4;
	for(int i=4; i<=MAX; i++)
		dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%MOD;
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << dp[n] << "\n";
	}
}