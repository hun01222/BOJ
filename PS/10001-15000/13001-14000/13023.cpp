#include<iostream>
#include<vector>
using namespace std;

bool ans=false;

void DFS(int num, int curr, vector<vector<int>> &v, vector<bool> &visit){
	if(num==4){
		ans=true;
		return;
	}
	
	for(int i=0; i<v[curr].size(); i++){
		int next=v[curr][i];
		if(visit[next]==true)
			continue;
		visit[next]=true;
		DFS(num+1, next, v, visit);
		visit[next]=false;
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> v(n);
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i=0; i<n; i++){
		vector<bool> visit(n);
		visit[i]=true;
		DFS(0, i, v, visit);
		if(ans==true)
			break;
	}
	
	cout << ans;
}