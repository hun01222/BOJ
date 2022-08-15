#include<iostream>
#define MOD 1000000007
typedef long long ll;
using namespace std;

ll power(ll n, ll m){
	ll ans=1;
	while(m){
		if(m&1)
			ans=ans*n%MOD;
		m/=2;
		n=n*n%MOD;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	ll ans=0;
	
	while(n--){
		int x, y;
		cin >> x >> y;
		ans+=(y*power(x, MOD-2))%MOD;
	}
	
	cout << ans%MOD;
}