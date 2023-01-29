#include<iostream>
#include<algorithm>
using namespace std;

int sol(int p, int r, int c){
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m, ans=0;
	cin >> n >> m;
	
	int sum[n+1]={0, };
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		sum[i+1]+=(sum[i]+temp);
	}
	sum[0]=sum[n];
	
	while(m--){
		int p, r, c;
		cin >> p >> r >> c;
		
		cout << sum[n]*((c-sum[p]+sum[n]-1)/sum[n])+sum[r-1] << ' ';
		//ans=max(ans, sol(p, r, c));
	}
	
	cout << ans;
}