#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int n, m, ans=0;
int map[9][9]={0, };
int changed_map[9][9]={0, };
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};
queue<pair<int, int>> q_virus;

void BFS(){
	queue<pair<int, int>> q;
	q=q_virus;
	
	while(!q.empty()){
		
	}
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> map[i][j]; // map[세로][가로]
			q_virus.push(make_pair(i, j));
		}
	}
	
	DFS(0);
	
	cout << ans;
}