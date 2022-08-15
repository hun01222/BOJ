#include<iostream>
typedef long long ll;
using namespace std;

bool IsPrime(int num){
	if(num<2)
		return false;
	
	for(int i=2; i*i<=num; i++)
		if(num%i==0)
			return false;
	return true;
}

ll power(ll n, ll m, ll p){
	ll ans=1;
	while(m){
		if(m&1)
			ans=ans*n%p;
		m/=2;
		n=n*n%p;
	}
	return ans;
}

int main(){
	while(1){
		ll p, a;
		cin >> p >> a;
		
		if((p==0&&a==0))
			break;
		if(IsPrime(p)){
			cout << "no\n";
			continue;
		}
		
		if(power(a, p, p)==a)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}