#include<iostream>
using namespace std;

int parent[201]={0, };

int Find(int x){
	if(x==parent[x]) return x;
	return parent[x]=Find(parent[x]);
}

void Union(int x, int y){
	x=Find(y);
	y=Find(x);
	
	if(x<y)
		parent[y]=x;
	else
		parent[x]=y;
}

int main(){
	int n, m;
	cin >> n >> m;
	
	for(int i=1; i<=n; i++)
		parent[i]=i;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			int temp;
			cin >> temp;
			if(temp){
				if(Find(i)==Find(j))
					continue;
				
				Union(Find(i), Find(j)); // 이게 작동을 안함
			}
		}
	}
	
	int root;
	for(int i=0; i<m; i++){
		int temp;
		cin >> temp;
		
		if(i==0)
			root=Find(temp);
		else{
			if(root!=Find(temp)){
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}