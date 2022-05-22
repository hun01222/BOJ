#include<iostream>
#include<algorithm>
#include<memory.h>
using namespace std;

int n;
int map[101][101]={0, };
int temp[101][101]={0, };
bool visited[101][101]={0, };
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};

void DFS(int x, int y){
	visited[x][y]=true;
	
	for(int i=0; i<4; i++){
		int x1=x+dx[i];
		int y1=y+dy[i];
		
		if((0<=x1&&x1<n&&0<=y1&&y1<n)&&!visited[x1][y1]&&temp[x1][y1])
			DFS(x1, y1);
	}
}

int main(){
	cin >> n;
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> map[i][j];
	
	int ans=1;

	for(int depth=1; depth<101; depth++){
		memset(visited, false, sizeof(visited));
		memset(temp, false, sizeof(temp));
		
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				if(map[i][j]>depth)
					temp[i][j]=map[i][j];
		
		int cnt=0;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				if(!visited[i][j]&&temp[i][j]){
					DFS(i, j);
					cnt++;
				}
		ans=max(ans, cnt);
	}
	cout << ans;
}