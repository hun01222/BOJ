#include<iostream>
#include<vector>
#include<algorithm>
#include<memory.h>
#define MAX 10001
using namespace std;

int n;
bool visited[MAX]={0, };
vector<pair<int, int>> map[MAX];

int dia=0;
int farthest_node=0;

void DFS(int node, int cost){
	if(visited[node])
		return;
	visited[node]=true;
	
	if(dia<cost){
		dia=cost;
		farthest_node=node;
	}
	
	for(int i=0; i<map[node].size(); i++)
		DFS(map[node][i].first, cost+map[node][i].second);
}

int main(){
	cin >> n;
	
	for(int i=1; i<n; i++){
		int node1, node2, cost;
		cin >> node1 >> node2 >> cost;
		
		map[node1].push_back(make_pair(node2, cost));
		map[node2].push_back(make_pair(node1, cost));
	}
	
	memset(visited, false, sizeof(visited));
	DFS(1, 0); // root로 부터 가장 먼 node를 찾고
	memset(visited, false, sizeof(visited));
	dia=0;
	DFS(farthest_node, 0); // dia를 찾음
	
	cout << dia;
}