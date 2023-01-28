#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 1000000001
using namespace std;

vector<pair<int, int>> tree;
vector<int> a;

pair<int, int> init(int node, int start, int end){
	if(start==end)
		return tree[node]=make_pair(a[start], a[start]);
	else{
		pair<int, int> a=init(2*node, start, (start+end)/2);
		pair<int, int> b=init(2*node+1, (start+end)/2+1, end);
		return tree[node]=make_pair(max(a.first, b.first), min(a.second, b.second));
	}
}

pair<int, int> query(int node, int start, int end, int left, int right){
	if(left>end||right<start)
		return make_pair(0, MAX);
	else if(left<=start&&right>=end)
		return tree[node];
	else{
		
		pair<int, int> a, b;
		a=query(node*2, start, (start+end)/2, left, right);
		b=query(node*2+1, (start+end)/2+1, end, left, right);
		return make_pair(max(a.first, b.first), min(a.second, b.second));
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	a.resize(n+1);
	tree.resize(n*4);
	for(int i=1; i<=n; i++)
		cin >> a[i];
	init(1, 1, n);
	
	while(m--){
		int a, b;
		cin >> a >> b;
		cout << query(1, 1, n, a, b).second << ' ' << query(1, 1, n, a, b).first << "\n";
	}
}