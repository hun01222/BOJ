#include<iostream>
using namespace std;

int main(){
	int n, m, k, arr[301][301];
	cin >> n >> m;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			cin >> arr[i][j];
	
	cin >> k;
	while(k--){
		int i, j, x, y, sum=0;
		cin >> i >> j >> x >> y;
		for(int p=j; p<=y; p++)
			for(int q=i; q<=x; q++)
				sum+=arr[q][p];
		cout << sum << "\n";
	}
}