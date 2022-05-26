#include<iostream>
#include<vector>
#include<memory.h>
#define MAX 501
using namespace std;

int n, m;
bool visited_vertex[MAX]={0, };
bool visited_edge[MAX]={0, };
vector<int> tree[MAX];

int DFS_vertex(int node){
	int cnt=1;
	visited_vertex[node]=true;
	
	for(int i=0; i<tree[node].size(); i++){
		int temp=tree[node][i];
		if(!visited_vertex[temp])
			cnt+=DFS_vertex(temp);
	}
	return cnt;
}

int DFS_edge(int node){
	int cnt=tree[node].size();
	visited_edge[node]=true;
	
	for(int i=0; i<tree[node].size(); i++){
		int temp=tree[node][i];
		if(!visited_edge[temp])
			cnt+=DFS_edge(temp);
	}
	return cnt;
}

int main(){
	int cnt=1;
	
	while(1){
		cin >> n >> m;
		if(!n&&!m)
			break;
		
		for(int i=0; i<m; i++){
			int node1, node2;
			cin >> node1 >> node2;
			
			tree[node1].push_back(node2);
			tree[node2].push_back(node1);
		}
		
		cout << "Case " << cnt++ << ": ";
		
		int result=0;
		for(int i=1; i<=n; i++)
			if(!visited_vertex[i]){
				int V=DFS_vertex(i);
				int E=DFS_edge(i);
				
				if((V-1)==(E/2))
					result++;
			}
		
		for(int i=0; i<=MAX; i++)
			tree[i].clear();
		memset(visited_vertex, false, sizeof(visited_vertex));
		memset(visited_edge, false, sizeof(visited_edge));
		
		if(result==0)
			cout << "No trees.\n";
		else if(result==1)
			cout << "There is one tree.\n";
		else
			cout << "A forest of " << result << " trees.\n";
	}	
}