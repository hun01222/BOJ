#include<iostream>
typedef long long ll;
using namespace std;

ll GCD(ll a, ll b){
	if(a%b==0)
		return b;
	return GCD(b, a%b);
}

int main(){
	ll a1, b1, a2, b2, LCM;
	cin >> a1 >> b1 >> a2 >> b2;
	
	LCM=(b1*b2)/GCD(b1, b2);
	ll a=a1*(LCM/b1)+a2*(LCM/b2);
	ll b=LCM;
	
	cout << a/GCD(a, b) << ' ' << b/GCD(a, b);
}