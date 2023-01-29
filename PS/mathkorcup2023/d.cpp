#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;

ll find_min(vector<ll> &v){
	sort(v.begin(), v.end());
	
	return v[v.size()/2];
}

ll distance(vector<ll> &v, ll n){
	ll sum=0;
	
	for(int i=0; i<v.size(); i++)
		sum+=abs(v[i]-n);
	
	return sum;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n, m, sum=0;
	cin >> n >> m;
	
	vector<vector<ll>> v(1010);
	vector<ll> ans;
	for(ll i=0; i<m; i++){
		for(ll j=0; j<n; j++){
			ll temp;
			cin >> temp;
			v[j].push_back(temp);
		}
	}
	
	for(ll i=0; i<n; i++){
		ans.push_back(find_min(v[i]));
	}
	
	for(ll i=0; i<n; i++)
		sum+=distance(v[i], ans[i]);

	cout << sum << "\n";
	for(int i=0; i<n; i++)
		cout << ans[i] << ' ';
}