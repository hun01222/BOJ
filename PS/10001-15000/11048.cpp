#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, m;
	int map[1001][1001]={0, };
	
	cin >> n >> m;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			cin >> map[i][j];
	
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			map[i][j]=map[i][j]+max(map[i-1][j], map[i][j-1]);
	
	cout << map[n][m];
}