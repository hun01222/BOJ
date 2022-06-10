#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

bool map[501][501]={0, };
int dx[4]={0, 1, 0, -1};
int dy[4]={1, 0, -1, 0};
int cnt=0, ans=0, n, m;

void BFS(int x, int y){
	if(!map[x][y])
		return;
	cnt++;
	
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	map[x][y]=0;
	int temp_ans=0;
	
	while(!q.empty()){
		int x1=q.front().first;
		int y1=q.front().second;
		q.pop();
		temp_ans++;
		
		for(int i=0; i<4; i++){
			int x2=x1+dx[i];
			int y2=y1+dy[i];
			
			if(0<=x2&&x2<n&&0<=y2&&y2<m&&map[x2][y2]){
				q.push(make_pair(x2, y2));
				map[x2][y2]=0;
			}
		}
	}
	
	ans=max(ans, temp_ans);
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++){
			bool temp;
			cin >> temp;
			map[i][j]=temp;
		}
	
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			BFS(i, j);
	
	cout << cnt << "\n" << ans;
}