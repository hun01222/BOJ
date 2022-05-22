#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int n, m, ans=0;
int map[9][9]={0, };
int temp[9][9]={0, };
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};

void BFS(){
	int after[9][9]={0, };
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			after[i][j]=temp[i][j];
	
	queue<pair<int, int>> q;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(after[i][j]==2)
				q.push(make_pair(i, j));
	
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		
		for(int i=0; i<4; i++){
			int x1=x+dx[i];
			int y1=y+dy[i];
			
			if((0<=x1&&x1<n&&0<=y1&&y1<m)&&!after[x1][y1]){
				after[x1][y1]=2;
				q.push(make_pair(x1, y1));
			}
		}
	}
	
	int cnt=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(!after[i][j])
				cnt++;
	
	ans=max(ans, cnt);
}

void DFS(int cnt){
	if(cnt==3){
		BFS();
		return;
	}
	
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(!temp[i][j]){
				temp[i][j]=1;
				DFS(cnt+1);
				temp[i][j]=0;
			}
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> map[i][j]; // map[세로][가로]
	
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(!map[i][j]){
				for(int k=0; k<n; k++)
					for(int l=0; l<m; l++)
						temp[k][l]=map[k][l];
				
				temp[i][j]=1;
				DFS(1);
				temp[i][j]=0;
			}
	
	cout << ans;
}