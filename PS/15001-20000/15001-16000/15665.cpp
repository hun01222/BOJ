#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 9
using namespace std;

int n, m;
int ans[MAX]={0, };
vector<int> v;

void DFS(int cnt){
	if(cnt==m){
		for(int i=0; i<cnt; i++)
			cout << ans[i] << ' ';
		cout << "\n";
	}
	else{
		int temp=0;
		for(int i=0; i<n; i++){
			if(temp!=v[i]){
				ans[cnt]=v[i];
				temp=v[i];
				DFS(cnt+1);
			}
		}
	}
}

int main(){
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	sort(v.begin(), v.end());
	
	DFS(0);
}