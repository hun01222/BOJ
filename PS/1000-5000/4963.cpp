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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	while(1){
		cin >> h >> w;
		if(!w&&!h)
			return 0;
		
		for(int i=0; i<w; i++)
			for(int j=0; j<h; j++)
				cin >> map[i][j];
	}
}