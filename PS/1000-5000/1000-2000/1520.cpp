#include<iostream>
#include<memory.h>
#define MAX 501
using namespace std;

int n, m, map[MAX][MAX], dp[MAX][MAX];
int dx[4]={0, 1, 0, -1};
int dy[4]={1, 0, -1, 0};

int DFS(int x, int y){
	if(x==n-1&&y==m-1)
		return 1;
	if(dp[x][y]!=-1)
		return dp[x][y];
	
	dp[x][y]=0;
	for(int i=0; i<4; i++){
		int x1=x+dx[i];
		int y1=y+dy[i];
		if(x1>=0&&x1<n&&y1>=0&&y1<m)
			if(map[x][y]>map[x1][y1])
				dp[x][y]+=DFS(x1, y1);
	}
	
	return dp[x][y];
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> map[i][j];
	
	memset(dp, -1, sizeof(dp));
	cout << DFS(0, 0);
}