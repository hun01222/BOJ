#include<iostream>
#include<map>
typedef long long ll;
using namespace std;

map<ll, ll> m;
ll N, p, q;

ll sol(ll n){
	if(n==0)
		return 1;
	if(m.find(n)!=m.end())
		return m[n];
	return m[n]=sol(n/p)+sol(n/q);
}

int main(){
	cin >> N >> p >> q;
	cout << sol(N);
}