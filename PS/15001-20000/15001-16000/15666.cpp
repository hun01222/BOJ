#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#define MAX 9
using namespace std;

int n, m;
set<vector<int>> s;
int ans[MAX]={0, };
int arr[MAX]={0, };

void DFS(int cnt, int idx){
	if(cnt==m){
		vector<int> v;
		for(int i=0; i<m; i++)
			v.push_back(ans[i]);
		s.insert(v);
	}
	
	
}

int main(){
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr, arr+n);

	DFS(0, 0);
}