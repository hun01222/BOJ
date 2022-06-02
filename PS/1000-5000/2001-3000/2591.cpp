#include<iostream>
#include<string>
using namespace std;

int main(){
	int dp[42]={0, };
	string s;
	cin >> s;
	int length=s.size();
	
	dp[0]=1, dp[1]=1;
	for(int i=2; i<=length; i++){
		if(s[i-1]-'0'==0&&s[i-2]-'0'==0)
			break;
		else if(s[i-2]-'0'==0)
			dp[i]=dp[i-1];
		else if(s[i-1]-'0'==0){
			if(s[i-2]-'0'>3)
				break;
			else
				dp[i]=dp[i-2];
		}
		else{
			if(((s[i-2]-'0')*10+s[i-1]-'0')>34)
				dp[i]=dp[i-1];
			else
				dp[i]=dp[i-1]+dp[i-2];
		}
	}
	cout << dp[length];
}