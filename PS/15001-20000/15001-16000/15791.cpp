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
	int n, k;
	cin >> n >> k;
	
	ll a=1;
	for(int i=n; i>=n-k+1; i--)
		a=a*i%MOD;
	
	ll b=1;
	for(int i=1; i<=k; i++)
		b=b*i%MOD;
	
	cout << a*power(b, MOD-2)%MOD;
}