#include<iostream>
#define MAX 500001
using namespace std;

int parent[MAX];

int find(int x){
	if(x==parent[x]) return x;
	return parent[x]=find(parent[x]);
}

void Union(int x, int y){
	x=find(x);
	y=find(y);
	
	if(x<y)
		parent[y]=parent[x];
	else
		parent[x]=parent[y];
}

bool check(int x, int y){
	x=find(x);
	y=find(y);
	
	if(x==y)
		return true;
	else
		return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	for(int i=0; i<n; i++)
		parent[i]=i;
	for(int i=1; i<=m; i++){
		int a, b;
		cin >> a >> b;
		if(check(a, b)){
			cout << i;
			return 0;
		}
		Union(a, b);
	}
	cout << 0;
}