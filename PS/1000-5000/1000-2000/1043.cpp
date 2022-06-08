#include<iostream>
#include<vector>
#define MAX 52
using namespace std;

int parent[MAX];

int find(int x){
	if(parent[x]==x)
		return x;
	return parent[x]=find(parent[x]);
}

void Union(int x, int y){
	x=find(x);
	y=find(y);
	
	if(x<y)
		parent[y]=x;
	else
		parent[x]=y;
}

bool check(int x, int y){
	x=find(x);
	y=find(y);
	if(x==y) return true;
	return false;
}

int main(){
	int n, m, truth_n, cnt=0;
	cin >> n >> m >> truth_n;
	vector<int> truth(truth_n);
	vector<int> graph[MAX];
	for(int i=1; i<=n; i++)
		parent[i]=i;
	for(int i=0; i<truth_n; i++)
		cin >> truth[i];
	for(int i=0; i<m; i++){
		int temp_n, base;
		cin >> temp_n >> base;
		graph[i].push_back(base);
		for(int j=0; j<temp_n-1; j++){
			int temp;
			cin >> temp;
			graph[i].push_back(temp);
			Union(base, temp);
		}
	}
	
	for(int i=0; i<m; i++){
		bool go=true;
		for(int j=0; j<graph[i].size(); j++){
			if(!go) break;
			int n1=graph[i][j];
			for(int k=0; k<truth_n; k++){
				int n2=truth[k];
				if(check(n1, n2)){
					go=false;
					break;
				}
			}
		}
		if(!go) cnt++;
	}
	
	cout << m-cnt;
}