#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int arr[9]={0, };
int result[9]={0, };

void DFS(int cnt, int pre){
	if(cnt==m){
		for(int i=0; i<m; i++)
			cout << result[i] << ' ';
		cout << "\n";
	}
	else{
		for(int i=0; i<n; i++){
			if(pre<arr[i]){
				result[cnt]=arr[i];
				DFS(cnt+1, arr[i]);
			}
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	
	DFS(0, 0);
}