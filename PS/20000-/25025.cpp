#include<iostream>
#define MAX 100001
typedef long long ll;
using namespace std;

ll arr[MAX];

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
	int n, p;
	cin >> n >> p;
}