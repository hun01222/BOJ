#include<iostream>
#include<vector>
#include<memory.h>
#define MAX 200001
using namespace std;

int v, e;
vector<int> graph[MAX];
int node_color[MAX];

void DFS(int num, int color){
	node_color[num]=color;
	for(int i=0; i<graph[num].size(); i++){
		int temp=graph[num][i];
		if(!node_color[temp])
			DFS(temp, 3-color);
	}
}

bool IsBipartiteGraph(){
	for(int i=1; i<=v; i++){
		for(int j=0; j<graph[i].size(); j++){
			int temp=graph[i][j];
			if(node_color[i]==node_color[temp])
				return false;
		}
	}
	return true;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		for(int i=1; i<=MAX; i++)
			graph[i].clear();
		memset(node_color, 0, sizeof(node_color));
		
		cin >> v >> e;
		for(int i=0; i<e; i++){
			int a, b;
			cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		
		for(int i=1; i<=v; i++){
			if(!node_color[i])
				DFS(i, 1);
		}
		
		if(IsBipartiteGraph())
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}