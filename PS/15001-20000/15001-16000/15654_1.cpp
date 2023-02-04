#include<iostream>
#include<algorithm>
#define MAX 9
using namespace std;

int n, m;
bool visit[MAX]={0, };
int arr[MAX]={0, };
int ans[MAX]={0, };

void DFS(int cnt){
	if(cnt==m){
		for(int i=0; i<m; i++)
			cout << ans[i] << ' ';
		cout << "\n";
		return;
	}
	
	for(int i=0; i<n; i++){
		if(!visit[i]){
			visit[i]=true;
			ans[cnt]=arr[i];
			DFS(cnt+1);
			visit[i]=false;
		}
	}
}

int main(){
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	sort(arr, arr+n);
	
	DFS(0);
}