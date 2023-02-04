#include<iostream>
#include<vector>
#include<set>
#define MAX 9
using namespace std;

int n, m;
bool visit[MAX]={0, };
vector<int> v(MAX);
vector<int> ans(MAX);
set<vector<int>> s;

void DFS(int cnt){
	if(cnt==m){
		s.insert(ans);
		return;
	}
	
	for(int i=0; i<n; i++){
		if(!visit[i]){
			visit[i]=true;
			ans[cnt]=v[i];
			DFS(0);
			visit[i]=false;
		}
	}
}

int main(){
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	DFS(0);
	
	for(auto v:s){
		for(auto a:v)
			cout << a << ' ';
		cout << "\n";
	}
}