#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

vector<ll> v;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	ll ans=0, sum=0;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		sum+=temp;
		v[sum%m]++;
	}
	
	for(int i=0; i<m; i++)
		ans+=v[i]*(v[i]-1)/2;
	
	cout << v[0]+ans;
}