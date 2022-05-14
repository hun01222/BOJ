#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
#define max 100010
using namespace std;

vector<int> graph[max];
queue<int> q;
int ans[max]={0, };
int cnt=1;

void BFS(){
	while(!q.empty()){
		int start=q.front();
		q.pop();
		ans[start]=cnt++;
		for(int i=0; i<graph[start].size(); i++){
			if(ans[graph[start][i]]!=0)
				continue;
			q.push(graph[start][i]);
			ans[graph[start][i]]=1;
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
		sort(graph[i].begin(), graph[i].end(), greater<>());
	
	q.push(start);
	BFS();
	
	for(int i=1; i<=V; i++)
		cout << ans[i] << "\n";
}