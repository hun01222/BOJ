#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;

ll gcd(ll x, ll y){
	if(y==0)
		return x;
	else
		return gcd(y, x%y);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n, b, x=0, y=0, GCD;
	cin >> n >> b;
	
	ll t1, t2;
	for(int i=0; i<n; i++){
		cin >> t1 >> t2;
		x+=t1, y+=t2;
	}
	
	if(abs(y-n*b)>abs(x))
		GCD=gcd(abs(y-n*b), abs(x));
	else
		GCD=gcd(abs(x), abs(y-n*b));
	
	if(x==0)
		cout << "EZPZ";
	else if(y-n*b==0)
		cout << 0;
	else if(abs(x)==GCD)
		cout << (y-n*b)/x;
	else{
		if(x<0)
			cout << -(y-n*b)/GCD << '/' << -x/GCD;
		else
			cout << (y-n*b)/GCD << '/' << x/GCD;
	}
}