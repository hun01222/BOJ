#include<iostream>
#include<vector>
#define MAX 100001
using namespace std;

vector<int> v[MAX];
int ans[MAX]={0, };
bool visited[MAX];

int DFS(int root){
	if(visited[root]==true)
		return ans[root];
	visited[root]=true;
	
	int cnt=1;
	for(int i=0; i<v[root].size(); i++){
		if(visited[v[root][i]])
			continue;
		cnt+=DFS(v[root][i]);
	}
	
	ans[root]=cnt;
	return cnt;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, r, q;
	cin >> n >> r >> q;
	for(int i=1; i<n; i++){
		int temp1, temp2;
		cin >> temp1 >> temp2;
		v[temp1].push_back(temp2);
		v[temp2].push_back(temp1);
	}
	
	DFS(r);
	while(q--){
		int temp;
		cin >> temp;
		cout << ans[temp] << "\n";
	}
}