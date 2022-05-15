#include<iostream>
#include<queue>
using namespace std;

int dx[4]={0, 1, 0, -1};
int dy[4]={1, 0, -1, 0};

int w, h, ans;
int map[51][51];

queue<pair<int, int>> q;

void BFS(){
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		bool flag=false;
		
		if(map[x][y]==0)
			continue;
		map[x][y]=0;
		
		for(int i=0; i<4; i++){
			int x1=x+dx[i];
			int y1=y+dy[i];
			
			if((0<=x1&&x1<w&&0<=y1&&y1<h)&&map[x1][y1]==1){
				map[x1][y1]=0;
				flag=true;
			}
		}
		if(flag==false)
			ans++;
	}
}

int main(){	
	while(1){
		ans=0;
		cin >> h >> w;
		if(w==0&&h==0)
			return 0;
		for(int i=0; i<w; i++){
			for(int j=0; j<h; j++){
				cin >> map[i][j];
				if(map[i][j]==1)
					q.push(make_pair(i, j));
			}
		}
		
		BFS();
		cout << ans << "\n";
	}
}