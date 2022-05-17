#include<iostream>
#include<string>
#include<map>
#include<memory.h>
#include<algorithm>
using namespace std;

map<string, int> m;
int parent[200002]={0, }, set_size[200002]={0, };

int Find(int x){
	if(x==parent[x]) return x;
	return parent[x]=Find(parent[x]);
}

void Union(int x, int y){
	int a=Find(x);
	int b=Find(y);
	if(set_size[a]<set_size[b])
		swap(a, b);
	parent[b]=a;
	set_size[a]+=set_size[b];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n, idx=1;
		cin >> n;
		for(int i=1; i<=200002; i++){
			parent[i]=i;
			set_size[i]=1;
		}
		
		while(n--){
			string s1, s2;
			cin >> s1 >> s2;
			if(m[s1]==0)
				m[s1]=idx++;
			if(m[s2]==0)
				m[s2]=idx++;
			
			int root1=Find(m[s1]);
			int root2=Find(m[s2]);
			if(root1==root2)
				cout << max(set_size[root1], set_size[root2]) << "\n";
			else{
				Union(root1, root2);
				cout << max(set_size[root1], set_size[root2]) << "\n";
			}
		}

		m.clear();
		memset(parent, 0, sizeof(parent));
		memset(set_size, 0, sizeof(set_size));
	}
}