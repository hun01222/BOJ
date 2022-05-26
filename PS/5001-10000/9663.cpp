#include<iostream>
#include<vector>
using namespace std;

int n, ans=0;

void DFS(int cnt, int idx){
	if(cnt==n*n){
		if(IsPossible())
			ans++;
		return;
	}
	
	for(int i=idx; i<n*n; i++){
		if(arr[i])
			continue;
		else{
			arr[i]=true;
			DFS(cnt+1, i);
			arr[i]=false;
		}
	}
}

bool IsPossible(){
	
}
	
int main(){
	cin >> n;
}