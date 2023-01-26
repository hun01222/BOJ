#include<iostream>
#include<vector>
#define MAX 10001
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n, arr[MAX]={0, }, visit[MAX]={0, };
		cin >> n;
		
		int a, b;
		for(int i=0; i<n-1; i++){
			cin >> a >> b;
			arr[b]=a;
		}
		
		cin >> a >> b;
		visit[a]=1;
		while(arr[a]!=0){
			a=arr[a];
			visit[a]=1;
		}
		while(1){
			if(visit[b]==1){
				cout << b << "\n";
				break;
			}
			b=arr[b];
		}
	}
}