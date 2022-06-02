#include<iostream>
#include<queue>
#include<vector>
#include<string>
#define MAX 101
#define INF 1e9
using namespace std;

int map[MAX][MAX]={0, };
int dist[MAX][MAX]={0, };
int dx[4]={0, 1, 0, -1};
int dy[4]={1, 0, -1, 0};
int n, m;

void BFS(){
	queue<pair<int, int>> q;
	
	q.push(make_pair(0, 0));
	dist[0][0]=0;
	
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		
		for(int i=0; i<4; i++){
			int x1=x+dx[i];
			int y1=y+dy[i];
			if(x1<m&&y1<n&&x1>=0&&y1>=0)
				if(dist[y1][x1]>(dist[y][x]+map[y1][x1])){
					dist[y1][x1]=dist[y][x]+map[y1][x1];
					q.push(make_pair(x1, y1));
				}
		}
	}
}

int main(){
	cin >> m >> n;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		for(int j=0; j<m; j++){
			map[i][j]=(s[j]-'0');
			dist[i][j]=INF;
		}
	}
	
	BFS();
	
	cout << dist[n-1][m-1];
}