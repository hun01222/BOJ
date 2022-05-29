#include<iostream>
#include<vector>
#include<queue>
#define max 801
#define INF 1e9
using namespace std;

vector<pair<int, int>> graph[max];
int V, E, start, v1, v2, temp;
int dist[max];

void dijkstra(int start, int distance){
	priority_queue<pair<int, int>> pq;
	
	pq.push(make_pair(0, start));
	dist[start]=distance;
	
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
	
	fill_n(dist, max, INF);
	dijkstra(1, 0);
	temp=dist[v1];
	fill_n(dist, max, INF);
	dijkstra(v1, temp);
	temp=dist[v2];
	fill_n(dist, max, INF);
	dijkstra(v2, temp);
	
	cout << dist[V];
}