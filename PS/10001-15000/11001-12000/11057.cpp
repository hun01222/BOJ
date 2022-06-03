#include<iostream>
using namespace std;

int dp[10][1002]={0,};

int main(){
	int n, sum=0;
	cin >> n;
	
	for(int i=0; i<10; i++)
		dp[i][1]=1;
	for(int i=1; i<1002; i++)
		dp[0][i]=1;
	for(int j=2; j<1002; j++){
		for(int i=1; i<10; i++){
			dp[i][j]=(dp[i-1][j]+dp[i][j-1])%10007;
		}
	}
	
	for(int i=0; i<10; i++){
		sum+=dp[i][n];
	}
	cout << sum%10007;
}