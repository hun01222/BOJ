#include<iostream>
typedef long long ll;
using namespace std;

int main(){
	ll n, map[101][101], ans[101][101];
	
	cin >> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> map[i][j];
	
	ans[0][0]=1;
	for(int i=0; i<2*n-2; i++)
		for(int j=0; j<=i; j++){
			int x=j, y=i-j;
			if(ans[x][y]>0){
				if(x+map[x][y]<n)
					ans[x+map[x][y]][y]+=ans[x][y];
				if(y+map[x][y]<n)
					ans[x][y+map[x][y]]+=ans[x][y];
			}
		}
	
	cout << ans[n-1][n-1];
}