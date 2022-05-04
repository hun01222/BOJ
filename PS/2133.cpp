#include<iostream>
typedef long long ll;
using namespace std;

int main(){
	ll n, dp[31];
	dp[0]=1, dp[2]=3;
	cin >> n;
	
	if(n%2==1)
		cout << '0';
	else{
		for(int i=4; i<=n; i=i+2){
			dp[i]=dp[i-2]*3;
			for(int j=i-4; j>=0; j=j-2)
				dp[i]+=dp[j]*2;
		}
		cout << dp[n];
	}
}