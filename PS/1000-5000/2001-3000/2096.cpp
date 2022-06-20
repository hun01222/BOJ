#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a, b, c, n, dp[3][2][2]={0, };
	cin >> n >> a >> b >> c;
	
	dp[0][1][0]=a, dp[0][1][1]=a;
	dp[1][1][0]=b, dp[1][1][1]=b;
	dp[2][1][0]=c, dp[2][1][1]=c;
	
	for(int i=1; i<n; i++){
		cin >> a >> b >> c;
		
		dp[0][0][0]=a, dp[0][0][1]=a;
		dp[1][0][0]=b, dp[1][0][1]=b;
		dp[2][0][0]=c, dp[2][0][1]=c;
		
		dp[0][1][0]=max(dp[0][0][0]+a, dp[1][0][0]+a);
		dp[1][1][0]=max(dp[0][0][0]+b, dp[1][0][0]+b);
		dp[1][1][0]=max(dp[1][1][0], dp[2][0][0]+b);
		dp[2][1][0]=max(dp[1][0][0]+c, dp[2][0][0]+c);
		
		dp[0][1][1]=min(dp[0][0][1]+a, dp[1][0][1]+a);
		dp[1][1][1]=min(dp[0][0][1]+b, dp[1][0][1]+b);
		dp[1][1][1]=min(dp[1][1][1], dp[2][0][1]+b);
		dp[2][1][1]=min(dp[1][0][1]+c, dp[2][0][1]+c);
	}
	
	int ans_max=dp[0][1][0], ans_min=dp[0][1][1];
	ans_max=max(ans_max, dp[1][1][0]);
	ans_max=max(ans_max, dp[2][1][0]);
	ans_min=min(ans_min, dp[1][1][1]);
	ans_min=min(ans_min, dp[2][1][1]);
	
	cout << dp[0][1][0] << ' ' << dp[1][1][0] << ' ' << dp[2][1][0] << "\n";
	cout << dp[0][1][1] << ' ' << dp[1][1][1] << ' ' << dp[2][1][1] << "\n";

	cout << ans_max << ' ' << ans_min;
}