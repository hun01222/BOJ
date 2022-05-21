#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	double ans=-1, arr[10001]={0, }, dp[10001]={0, };
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	for(int i=0; i<n; i++){
		if(i==0)
			dp[i]=arr[i];
		else
			dp[i]=max(dp[i-1]*arr[i], arr[i]);
		ans=max(ans, dp[i]);
	}
	
	cout << fixed;
	cout.precision(3);
	cout << ans;
}