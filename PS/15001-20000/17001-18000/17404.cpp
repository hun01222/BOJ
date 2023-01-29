#include<iostream>
#include<algorithm>
#define MAX 1001
using namespace std;

int main(){
	int n, ans=1000001;
	int arr[3][MAX]={0, }, dp[3][MAX]={0, };
	
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++)
			cin >> arr[j][i];
	}
	
	for(int a=0; a<3; a++){
		for(int i=0; i<3; i++){
			if(i==a)
				dp[i][0]=arr[i][0];
			else
				dp[i][0]=1000001;
		}	
		
		for(int i=1; i<n; i++){
			dp[0][i]=arr[0][i]+min(dp[1][i-1], dp[2][i-1]);
			dp[1][i]=arr[1][i]+min(dp[0][i-1], dp[2][i-1]);
			dp[2][i]=arr[2][i]+min(dp[1][i-1], dp[0][i-1]);
		}
		
		for(int i=0; i<3; i++){
			if(i==a)
				continue;
			else
				ans=min(ans, dp[i][n-1]);
		}
	}
	
	cout << ans;
}