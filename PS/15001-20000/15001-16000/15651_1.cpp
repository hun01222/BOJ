#include<iostream>
#define MAX 9
using namespace std;

int n, m;
int ans[MAX]={0, };
int arr[MAX]={0, };

void DFS(int cnt){
	if(cnt==m){
		for(int i=0; i<m; i++)
			cout << ans[i] << ' ';
		cout << "\n";
		return;
	}
	
	for(int i=0; i<n; i++){
		ans[cnt]=arr[i];
		DFS(cnt+1);
	}
}

int main(){
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
		arr[i]=i+1;
	
	DFS(0);
}