#include<iostream>
using namespace std;

int arr[20];
int n, s, ans=0;

void DFS(int cnt, int val){
	if(cnt==n){
		if(val==s)
			ans++;
		return;
	}
	DFS(cnt+1, val);
	DFS(cnt+1, val+arr[cnt]);
	
}

int main(){
	cin >> n >> s;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	DFS(0, 0);
	if(s==0)
		ans--;
	cout << ans;
}