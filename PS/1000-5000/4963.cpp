#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

int dx[8]={0, 1, 0, -1, 1, 1, -1, -1};
int dy[8]={1, 0, -1, 0, 1, -1, 1, -1};

int w, h, ans;
int map[51][51];
bool visited[51][51];

void BFS(int a, int b){
	queue<pair<int, int>> q;
	q.push(make_pair(a, b));
	
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		
		for(int i=0; i<8; i++){
			int x1=x+dx[i];
			int y1=y+dy[i];
			
			if((0<=x1&&x1<w&&0<=y1&&y1<h)&&map[x1][y1]==1&&!visited[x1][y1]){
				visited[x1][y1]=true;
				q.push(make_pair(x1, y1));
			}
		}
	}
}

int main(){	
	while(1){
		ans=0;
		cin >> w >> h;
		if(w==0&&h==0)
			return 0;
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++)
				cin >> map[j][i];
		}
		
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(map[j][i]==1&&!visited[j][i]){
					visited[j][j]=true;
					cout << j << ' ' << i << "\n";
					ans++;
					BFS(j, i);
				}
			}
		}
		
		memset(map, 0, sizeof(map));
		memset(visited, false, sizeof(visited));
		
		cout << ans << "\n";
	}
}