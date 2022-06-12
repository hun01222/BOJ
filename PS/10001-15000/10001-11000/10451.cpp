#include<iostream>
#include<memory.h>
#define MAX 1001
using namespace std;

bool visited[MAX];
int tree[MAX];

void DFS(int curr){
	if(visited[curr])
		return;
	
	visited[curr]=true;
	DFS(tree[curr]);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, ans=0;
		cin >> n;
		for(int i=1; i<=n; i++)
			cin >> tree[i];
		
		for(int i=1; i<=n; i++){
			if(!visited[i]){
				DFS(i);
				ans++;
			}
		}
		
		memset(visited, false, sizeof(visited));
		cout << ans << "\n";
	}
}