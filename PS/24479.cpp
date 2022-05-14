#include<iostream>
#include<vector>
#include<algorithm>
#define max 100010
using namespace std;

vector<int> graph[max];
int ans[max]={0, };
int cnt=1;

void DFS(int start){
	for(int i=0; i<graph[start].size(); i++){
		if(ans[graph[start][i]]==0){
			ans[graph[start][i]]=(cnt++);
			DFS(graph[start][i]);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int V, E, start;
	cin >> V >> E >> start;
	for(int i=0; i<E; i++){
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for(int i=1; i<=V; i++)
		sort(graph[i].begin(), graph[i].end());
	
	ans[start]=cnt++;
	DFS(start);
	
	for(int i=1; i<=V; i++)
		cout << ans[i] << "\n";
}