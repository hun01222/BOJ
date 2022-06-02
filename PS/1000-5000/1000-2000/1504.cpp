#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define max 801
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[max];
int V, E, start, v1, v2;

vector<int> dijkstra(int start, int vertex){
	vector<int> dist(vertex, INF);
	dist[start]=0;
	
	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(0, start));
	
	while(!pq.empty()){
		int d=-pq.top().first;
		int curr=pq.top().second;
		pq.pop();
		
		if(dist[curr]<d)
			continue;
		
		for(int i=0; i<graph[curr].size(); i++){
			int cost=d+graph[curr][i].second;
			if(cost<dist[graph[curr][i].first]){
				dist[graph[curr][i].first]=cost;
				pq.push(make_pair(-cost, graph[curr][i].first));
			}
		}
	}
	return dist;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> V >> E;
	for(int i=0; i<E; i++){
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back(make_pair(b, c));
		graph[b].push_back(make_pair(a, c));
	}
	cin >> v1 >> v2;
	
	vector<int> result=dijkstra(1, V+1);
	vector<int> temp1=dijkstra(v1, V+1);
	vector<int> temp2=dijkstra(v2, V+1);
	
	int ans=min((result[v1]+temp1[v2]+temp2[V]), (result[v2]+temp2[v1]+temp1[V]));
	if(ans>=INF||ans<0)
		cout << -1;
	else
		cout << ans;
}