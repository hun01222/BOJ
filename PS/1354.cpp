#include<iostream>
#include<map>
typedef long long ll;
using namespace std;

map<ll, ll> m;
ll N, P, Q, X, Y;

ll sol(ll n){
	if(n<=0)
		return 1;
	else if(m.find(n)!=m.end())
		return m[n];
	return m[n]=sol((n/P)-X)+sol((n/Q)-Y);
}

int main(){
	cin >> N >> P >> Q >> X >> Y;
	cout << sol(N);
}