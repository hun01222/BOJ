#include<iostream>
typedef long long ll;
using namespace std;

ll GCD(ll a, ll b){
	if(a%b==0)
		return b;
	return GCD(b, a%b);
}

int main(){
	ll a, b;
	cin >> a >> b;
	
	cout << a*b/GCD(a, b);
}