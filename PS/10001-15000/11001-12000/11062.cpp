#include<iostream>
#include<algorithm>
#include<memory.h>
using namespace std;

int dp[1010][1010][2];
int cost[1010];

int solve(int flag, int i, int j){
	int &ret=dp[i][j][flag];
	if(ret!=-1)
		return ret;
	if(i>=j){
		if(!flag)
			return ret=cost[i];
		else
			return ret=0;
	}
	
	if(!flag)
		return ret=max(solve(i+1, j, !flag)+cost[i], solve(i, j-1, !flag)+cost[j]);
	else
		return ret=min(solve(i+1, j, !flag), solve(i, j-1, !flag));
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(dp, -1, sizeof(dp));
		int n;
		cin >> n;
		for(int i=1; i<=n; i++)
			cin >> cost[i];
		cout << solve(1, n, 0) << "\n";
	}
}