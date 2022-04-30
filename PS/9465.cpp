#include<iostream>
#include<algorithm>
using namespace std;

int arr[2][100001]={0, };
int dp[2][100001]={0, };

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0; i<2; i++){
			for(int j=0; j<n; j++){
				int temp;
				cin >> temp;
				arr[i][j]=temp;
			}
		}
		for(int i=0; i<n; i++){
			dp[0][i]=arr[0][i]+max(dp[1][i-1], dp[1][i-2]);
			dp[1][i]=arr[1][i]+max(dp[0][i-1], dp[0][i-2]);
		}
		cout << max(dp[0][n-1], dp[1][n-1]) << "\n";
	}
}