#include<iostream>
#include<vector>
#include<cmath>
#define MOD 1000000007
typedef long long ll;
using namespace std;

ll init(vector<ll> &a, vector<ll> &tree, int node, int start, int end){
	if(start==end)
		return tree[node]=a[start];
	else
		return tree[node]=(init(a, tree, node*2, start, (start+end)/2)*init(a, tree, node*2+1, (start+end)/2+1, end))%MOD;
}

void update(vector<ll> &tree, int node, int start, int end, int index, ll diff){
	if(index<start||index>end)
		return;
	tree[node]*=diff;
	if(start!=end){
		update(tree, node*2, start, (start+end)/2, index, diff);
		update(tree, node*2+1, (start+end)/2+1, end, index, diff);
	}
}

ll product(vector<ll> &tree, int node, int start, int end, int left, int right){
	if(left>end||right<start)
		return 1;
	if(left<=start&&end<=right)
		return tree[node];
	return (product(tree, node*2, start, (start+end)/2, left, right)*product(tree, node*2+1, (start+end)/2+1, end, left, right))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m, k;
	cin >> n >> m >> k;
	vector<ll> a(n);
	int h=(int)ceil(log2(n));
	int tree_size=(1<<(h+1));
	vector<ll> tree(tree_size);
	m+=k;
	for(int i=0; i<n; i++)
		cin >> a[i];
	init(a, tree, 1, 0, n-1);
	
	while(m--){
		int t1;
		cin >> t1;
		if(t1==1){
			int t2;
			ll t3;
			cin >> t2 >> t3;
			t2-=1;
			ll diff=t3/a[t2];
			a[t2]=t3;
			update(tree, 1, 0, n-1, t2, diff);
		}
		else if(t1==2){
			int t2, t3;
			cin >> t2 >> t3;
			cout << product(tree, 1, 0, n-1, t2-1, t3-1) << "\n";
		}
	}
}