#include<iostream>
#include<algorithm>
using namespace std;

int arr[101];
int dp[10001];

int main(){
	int n, k;
	dp[0]=1;
	cin >> n >> k;
	for(int i=1; i<=n; i++)
		cin >> arr[i];
	
	for(int i=1; i<=n; i++){
		for(int j=arr[i]; j<=k; j++){
			dp[j]+=dp[j-arr[i]];
		}
	}
	cout << dp[k];
}