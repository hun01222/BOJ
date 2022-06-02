#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int ans=-1;
int visited[101]={0, };
vector<int> v[101];

void DFS(int a, int b, int cnt){
	visited[a]=1;
	if(a==b){
		ans=cnt;
		return;
	}
	for(int i=0; i<v[a].size(); i++){
		if(!visited[v[a][i]])
			DFS(v[a][i], b, cnt+1);
	}
}

int main(){
	int n, x, y, m;
	cin >> n >> x >> y >> m;
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	DFS(x, y ,0);
	cout << ans;
}