#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#define MAX 9
using namespace std;

int n, m;
int visit[MAX]={false, };
int arr[MAX]={0, };
int input[MAX]={0, };
set<vector<int>> s;

void DFS(int cnt, int idx){
	if(cnt==m){
		vector<int> v;
		for(auto i=0; i<m; i++)
			v.push_back(arr[i]);
		s.insert(v);
	}
	
	for(int i=idx; i<n; i++){
		if(visit[i])
			continue;
		visit[i]=true;
		arr[cnt]=input[i];
		DFS(cnt+1, i);
		visit[i]=false;
	}
}

int main(){
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
		cin >> input[i];
	sort(input, input+n);
	
	DFS(0, 0);
	
	for(auto v:s){
		for(auto ans:v)
			cout << ans << ' ';
		cout << "\n";
	}
}