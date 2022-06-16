#include<iostream>
#include<algorithm>
#define MAX 1001
using namespace std;

int main(){
	int n;
	int arr[MAX];
	int dp[MAX];
	int ans=0;
	
	cin >> n;
	for(int i=1; i<=n; i++)
		cin >> arr[i];
	
	for(int i=1; i<=n; i++){
		dp[i]=arr[i];
		for(int j=1; j<i; j++){
			if((arr[i]>arr[j])&&(dp[i]<dp[j]+arr[i]))
				dp[i]=dp[j]+arr[i];
		}
		ans=max(ans, dp[i]);
	}
	cout << ans;
}