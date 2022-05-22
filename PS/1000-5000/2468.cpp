#include<iostream>
#include<queue>
#include<algorithm>
#include<memory.h>
using namespace std;

int n;
int map[101][101]={0, };
int temp[101][101]={0, };
bool visited[101][101]={0, };
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};

void BFS(int high){ // 물에 잠기지 않은 영역 구해야함!
	queue<pair<int, int>> q;

	int area=0;

	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		if(visited[x][y])
			continue;
		visited[x][y]=true;
		area++;

		for(int i=0; i<4; i++){
			int x1=x+dx[i];
			int y1=y+dy[i];

			if((0<=x1&&x1<n&&0<=y1&&y1<n)&&(!visited[x1][y1])&&map[x1][y1]>=high){
				visited[x][y]=true;
				q.push(make_pair(x1, y1));
			}
		}
	}

	if(ans<area)
		cout << high << ' ' << area << "\n";
	ans=max(ans, area);
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