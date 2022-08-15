#include<iostream>
typedef long long ll;
using namespace std;

int main(){
	int n;
	ll dp[83]={0, };
	dp[0]=1, dp[1]=1;
	cin >> n;
	
	for(int i=2; i<=n; i++)
		dp[i]=dp[i-1]+dp[i-2];
	
	cout << 2*(dp[n]+dp[n-1]);
}