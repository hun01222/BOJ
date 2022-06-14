#include<iostream>
typedef long long ll;
using namespace std;

const ll MOD=1000000007;
ll factorial[4000001];

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
	for(int i=1; i<400000; i++)
		factorial[i]=factorial[i-1]i%MOD;
	
	int t;
	cin >> t;
	while(t--){
		ll n, k, a=1, b=1;
		cin >> n >> k;
		
		for(int i=n; i>=n-k+1; i--)
			a=(a*i)%MOD;
		for(int i=1; i<=k; i++)
			b=(b*i)%MOD;
		
		cout << (a*power(b, MOD-2))%MOD << "\n";
	}
}