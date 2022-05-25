#include<iostream>
#include<vector>
#include<algorithm>
#include<memory.h>
#define MAX 100001
typedef long long ll;
using namespace std;

int n;
bool visited[MAX]={0, };
vector<pair<int, int>> map[MAX];

ll dia=0;
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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i=1; i<=n; i++){
		int temp;
		cin >> temp;
		while(1){
			int node, cost;
			cin >> node;
			if(node==-1)
				break;
			cin >> cost;
			
			map[temp].push_back(make_pair(node, cost));
		}
	}
		memset(visited, false, sizeof(visited));
		DFS(1, 0);
		memset(visited, false, sizeof(visited));
		dia=0;
		DFS(farthest_node, 0);
		
		cout << dia;
}