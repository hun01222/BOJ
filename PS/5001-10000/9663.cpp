#include<iostream>
using namespace std;

int n, cnt=0;
int arr[16]; // column만 백트레킹 하면 됨

bool IsPossible(int i){
	int k=1;
	bool flag=true;
	
	while((k<i)&&flag){
		if(arr[i]==arr[k]||abs(arr[i]-arr[k])==i-k)
			flag=false;
		k++;
	}
	return flag;
}

void DFS(int i){
	if(IsPossible(i)){
		if(i==n)
			cnt++;
		else
			for(int j=1; j<=n; j++){
				arr[i+1]=j;
				DFS(i+1);
			}
	}
}

int main(){
	cin >> n;
	
	DFS(0);
	cout << cnt << "\n";
}