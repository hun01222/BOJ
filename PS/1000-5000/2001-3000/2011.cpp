#include<iostream>
#include<string>
#define MOD 1000000
#define MAX 5001
using namespace std;

int main(){
	int dp[MAX]={0, }, arr[MAX]={0, };
	string s;
	cin >> s;
	
	for(int i=1; i<=s.size(); i++)
		arr[i]=s[i-1]-'0';
	
	if(s.size()==1&&s[0]=='0'){
		cout << 0;
		return 0;
	}
	
	dp[0]=1;
	for(int i=1; i<=s.size(); i++){
		if(arr[i]>=1&&arr[i]<=9)
			dp[i]=(dp[i-1]+dp[i])%MOD;
		if(i==1)
			continue;
		
		int temp=arr[i]+arr[i-1]*10;
		if(temp>=10&&temp<=26)
			dp[i]=(dp[i-2]+dp[i])%MOD;
	}
	cout << dp[s.size()];
}