#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;

ll GDC(ll a, ll b){
	if(a%b==0)
		return b;
	return GDC(b, a%b);
}

int main(){
	ll n, m, a=0, b=0;
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
		a+=pow(10, i);
	for(int i=0; i<m; i++)
		b+=pow(10, i);
	
	cout << GDC(a, b);
}