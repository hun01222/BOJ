#include<iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX]={0, };
int ans[MAX]={0, };

void DFS(int cnt, int idx){
	if(cnt==m){
		for(int i=0; i<m ;i++)
			cout << ans[i] << ' ';
		cout << "\n";
		return;
	}
	
	for(int i=idx; i<n; i++){
		ans[cnt]=arr[i];
		DFS(cnt+1, i);
	}
}

int main(){
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
		arr[i]=i+1;
	
	DFS(0, 0);
}