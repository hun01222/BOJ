#include<iostream>
#include<algorithm>
using namespace std;

int sol(int p, int r, int c){
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m, ans=0;
	cin >> n >> m;
	
	int sum[n]={0, };
	cin >> sum[0];
	for(int i=1; i<n; i++){
		int temp;
		cin >> temp;
		sum[i]+=(sum[i-1]+temp);
	}
	
	while(m--){
		int p, r, c;
		cin >> p >> r >> c;
		ans=max(ans, sol(p, r, c));
	}
	
	cout << ans;
}