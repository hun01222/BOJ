#include<iostream>
using namespace std;

int n, ans=0;
int arr[4]={1, 5, 10, 50};
bool visited[1001]={0, };

void DFS(int cnt, int val, int pre){
	if(cnt==n){
		if(!visited[val]){
			visited[val]=true;
			ans++;
		}
		return;
	}

	for(int i=pre; i<4; i++)
		DFS(cnt+1, val+arr[i], i);
}

int main(){
	cin >> n;
	
	DFS(0, 0, 0);
	
	cout << ans;
}