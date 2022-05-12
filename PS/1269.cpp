#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> va;
vector<int> vb;
map<int, int> a;
map<int, int> b;

int main(){
	int n, m, cnt=0;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		va.push_back(temp);
		a[temp]++;
	}
	for(int i=0; i<m; i++){
		int temp;
		cin >> temp;
		vb.push_back(temp);
		b[temp]++;
	}
	
	for(int i=0; i<n; i++){
		if(b[va[i]]==1)
			cnt++;
	}
	for(int i=0; i<m; i++){
		if(a[vb[i]]==1)
			cnt++;
	}
	
	cout << n+m-cnt;
}