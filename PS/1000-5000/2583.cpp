#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int n, m, cnt=0;
bool visited[101][101]={0, };
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};
vector<int> v;

void BFS(int x, int y){
	int area=0;
	cnt++;
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	visited[x][y]=true;
	
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		area++;
		
		for(int i=0; i<4; i++){
			int x1=x+dx[i];
			int y1=y+dy[i];
			if((0<=x1&&x1<n&&0<=y1&&y1<m)&&!visited[x1][y1]){
				visited[x1][y1]=true;
				q.push(make_pair(x1, y1));
			}
		}
	}
	v.push_back(area);
}

int main(){
	int k;
	cin >> n >> m >> k;
	while(k--){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		for(int i=y1; i<y2; i++)
			for(int j=x1; j<x2; j++)
				visited[i][j]=true;
		
	}

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			if(!visited[i][j])
				BFS(i, j);
	
	cout << cnt << "\n";
	sort(v.begin(), v.end());
	for(auto a:v)
		cout << a << ' ';
}