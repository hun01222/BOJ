#include<iostream>
#include<queue>
using namespace std;

int n, cnt_RB=0, cnt_X=0;
char map_RB[101][101]={0, };
bool map_X[101][101]={0, };
bool visited_RB[101][101]={0, };
bool visited_X[101][101]={0, };
int dx[4]={0, 1, 0, -1};
int dy[4]={1, 0, -1, 0};

void BFS_RB(int i, int j, char temp){
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));
	
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		visited_RB[x][y]=true;
		q.pop();
		
		for(int i=0; i<4; i++){
			int x1=x+dx[i];
			int y1=y+dy[i];
			
			if((0<=x1&&x1<n&&0<=y1&&y1<n)&&(!visited_RB[x1][y1])&&map_RB[x1][y1]==temp){
				q.push(make_pair(x1, y1));
				visited_RB[x1][y1]=true;
			}
		}
	}
	cnt_RB++;
}

void BFS_X(int i, int j, bool temp){
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));
	
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		visited_X[x][y]=true;
		q.pop();
		
		for(int i=0; i<4; i++){
			int x1=x+dx[i];
			int y1=y+dy[i];
			
			if((0<=x1&&x1<n&&0<=y1&&y1<n)&&(!visited_X[x1][y1])&&map_X[x1][y1]==temp){
				q.push(make_pair(x1, y1));
				visited_X[x1][y1]=true;
			}
		}
	}
	cnt_X++;
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++){
			cin >> map_RB[i][j];
			if(map_RB[i][j]=='B')
				map_X[i][j]=1;
		}
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(!visited_RB[i][j])
				BFS_RB(i, j, map_RB[i][j]);
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(!visited_X[i][j])
				BFS_X(i, j, map_X[i][j]);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout << map_RB[i][j] << ' ';
		cout << "\n";
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout << map_X[i][j] << ' ';
		cout << "\n";
	}
	
	cout << cnt_RB << ' ' << cnt_X;
}