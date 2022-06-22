#include<iostream>
#include<algorithm>
#define MAX 50001
using namespace std;

int main(){
	int n, dp[MAX];
	cin >> n;
	
	dp[1]=1;
	for(int i=2; i<=n; i++){
		int cnt=dp[i-1]+1;
		for(int j=1; j*j<=i; j++){
			int temp=i-j*j;
			cnt=min(cnt, dp[temp]);
		}
		dp[i]=cnt+1;
	}
	
	cout << dp[n];
}