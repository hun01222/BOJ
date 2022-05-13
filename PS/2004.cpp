#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;

pair<ll, ll> func(ll n){
	ll two=0, five=0;
	for(ll i=2; i<=n; i*=2)
		two+=n/i;
	for(ll i=5; i<=n; i*=5)
		five+=n/i;
	return {two, five};
}

int main(){
	ll n, m;
	cin >> n >> m;
	
	vector<pair<ll, ll>> v;
	v.push_back(func(n));
	v.push_back(func(m));
	v.push_back(func(n-m));
	cout << min(v[0].first-v[1].first-v[2].first, v[0].second-v[1].second-v[2].second);
}