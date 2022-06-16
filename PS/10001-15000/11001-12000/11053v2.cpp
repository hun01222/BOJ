#include<iostream>
#include<algorithm>
#define MAX 1001
using namespace std;

int main(){
	int n, ans=0, arr[MAX], dp[MAX]={0, };
	
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> arr[i];
		dp[i]++;
		for(int j=1; j<i; j++){
			if(arr[i]>arr[j])
				dp[i]=max(dp[i], dp[j]+1);
		}
		ans=max(dp[i], ans);
	}
	
	cout << ans;
}