#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;

int main(){
	ll n;
	cin >> n;
	
	ll ans=n;
	for(ll i=2; i<=sqrt(n); i++){
		if(n%i==0)
			ans=ans/i*(i-1); // 합성수를 구성하는 소수에 대해 Euler phi function
		while(n%i==0)
			n/=i;
	}
	if(n!=1) // Euler phi function
		ans=ans/n*(n-1);
	
	cout << ans;
}