#include<iostream>
#include<algorithm>
#define MAX 501
#define INF 1e9
using namespace std;

int main(){
	int n, temp1, temp2;
	int arr[MAX][2], dp[MAX][MAX];
	
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> temp1 >> temp2;
		arr[i][0]=temp1;
		arr[i][1]=temp2;
	}
	
	for(int i=1; i<n; i++)
		for(int j=1; i+j<=n; j++){
			dp[j][i+j]=INF;
			for(int k=j; k<=i+j; k++)
				dp[j][i+j]=min(dp[j][i+j], dp[j][k]+dp[k+1][i+j]+arr[j][0]*arr[k][1]*arr[i+j][1]);
		}
	
	cout << dp[1][n];
}