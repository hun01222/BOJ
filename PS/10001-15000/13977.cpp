#include<iostream>
#define MOD 1000000007
typedef long long ll;
using namespace std;

ll factorial[4000005];

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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	factorial[0]=1;
	for(int i=1; i<400005; i++)
		factorial[i]=factorial[i-1]*i%MOD;
	
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		
		ll p=factorial[n];
		ll q=(factorial[k]*factorial[n-k])%MOD;
		
		cout << (p*(power(q, MOD-2)%MOD))%MOD << "\n";
	}
}