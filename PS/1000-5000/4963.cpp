#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

int w, h;
bool map[55][55]={0, };
bool visited[55][55]={0, };
int dx[8]={0, 1, 0, -1, 1, 1, -1, -1};
int dy[8]={1, 0, -1, 0, -1, 1, 1, -1};

int BFS(){
	int cnt=0;
	queue<pair<int, int>> q;
	
	for(int i=1; i<=w; i++)
		for(int j=1; j<=h; j++){
			if(map[i][j]&&!visited[i][j]){
				q.push(make_pair(i, j));
				cnt++;
				
				while(!q.empty()){
					int x=q.front().first;
					int y=q.front().second;
					visited[x][y]=1;
					q.pop();
					
					for(int i=0; i<8; i++){
						int x1=x+dx[i];
						int y1=y+dy[i];
						
						if((0<x1&&x1<=w&&0<y1&&y1<=h)&&!visited[x1][y1]&&map[x1][y1])
							q.push(make_pair(x1, y1));
					}
				}
			}
		}
	
	return cnt;
}

int main(){
	while(1){
		cin >> h >> w;
		if(w==0&&h==0)
			return 0;
		
		for(int i=1; i<=w; i++)
			for(int j=1; j<=h; j++)
				cin >> map[i][j];
		
		cout << BFS() << "\n";
		
		memset(map, 0, sizeof(map));
		memset(visited, 0, sizeof(visited));
	}
}