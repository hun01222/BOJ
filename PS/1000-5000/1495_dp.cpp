#include<iostream>
#include<algorithm>
using namespace std;

int arr[52];
int dp[52][1001];

int main(){
	int n, s, m;
	cin >> n >> s >> m;
	for(int i=1; i<=n; i++)
		cin >> arr[i];
	for(int i=0; i<=n+1; i++)
		fill(dp[i], dp[i]+m+1, -1);
	dp[0][s]=1;
	
	for(int i=1; i<=n; i++){
		for(int j=0; j<=m; j++){
			if(dp[i-1][j]==1){
				if(j+arr[i]<=m)
					dp[i][j+arr[i]]=1;
				if(j-arr[i]>=0)
					dp[i][j-arr[i]]=1;
			}
		}
	}
	
	int ans=-1;
	for(int j=0; j<=m; j++){
		if(dp[n][j]==1)
			ans=max(ans, j);
	}
	cout << ans;
}