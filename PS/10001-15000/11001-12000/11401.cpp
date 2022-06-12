#include<iostream>
#include<cmath>
#define MOD 1000000007
typedef long long ll;
using namespace std;

ll n, k, a, b, half;

ll DNC(int x){
	if(x==0)
		return 1;
	if(x%2==1)
		return b*DNC(x-1)%MOD;
	else{
		half=DNC(x/2);
		return half*half%MOD;
	}
}

int main(){
	cin >> n >> k;
	
	a=1;
	for(int i=n; i>=n-k+1; i--)
		a=(a*i)%MOD;
	
	b=1;
	for(int i=1; i<=k; i++)
		b=(b*i)%MOD;
	
	b=DNC(MOD-2);
	
	cout << a*b%MOD;
}