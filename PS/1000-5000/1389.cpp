#include<iostream>
#include<algorithm>
using namespace std;

int n;
int graph[101][101]={0, };

void floyd_warshall(){
	for(int via=1; via<=n; via++)
		for(int from=1; from<=n; from++){
			if(!graph[from][via])
				continue;
			for(int to=1; to<=n; to++){
				if(!graph[via][to]||from==to)
					continue;
				if(!graph[from][to]||(graph[from][to]>graph[from][via]+graph[via][to]))
					graph[from][to]=graph[from][via]+graph[via][to];
			}
		}
}

int main(){
	int m;
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		graph[a][b]=1;
		graph[b][a]=1;
	}
	
	floyd_warshall();
	
	int min=987654321;
	int ans=0;
	for(int i=1; i<=n; i++){
		int cnt=0;
		for(int j=1; j<=n; j++){
			if(i==j)
				continue;
			cnt+=graph[i][j];
		}
		if(min>cnt){
			min=cnt;
			ans=i;
		}
	}
	cout << ans;
}