#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n, a, b, ans=0;
	vector<ll> v;

	cin >> n;
	for(ll i=0; i<n; i++){
		ll temp;
		cin >> temp;
		v.push_back(temp);
	}
	cin >> a >> b;
	
	for(ll i=0; i<n; i++){
		v[i]-=a;
		ans++;
	}
	for(ll i=0; i<n; i++){
		if(v[i]>0)
			ans+=((v[i]+b-1)/b);
	}
	cout << ans;
}