#include<iostream>
#define max 1000001
using namespace std;

int parent[max];

int find(int x){
	if(x==parent[x]) return x;
	return parent[x]=find(parent[x]);
}

void Union(int x, int y){
	x=find(x);
	y=find(y);
	
	if(x<y)
		parent[y]=x;
	else
		parent[x]=y;
}

void IsParent(int x, int y){
	x=find(x);
	y=find(y);
	
	if(x==y)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	for(int i=1; i<=n; i++)
		parent[i]=i;
	
	while(m--){
		int temp, a, b;
		cin >> temp >> a >> b;
		if(temp==0){
			Union(a, b);
		}
		else{
			IsParent(a, b);
		}
	}
}