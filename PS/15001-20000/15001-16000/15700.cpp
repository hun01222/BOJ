#include<iostream>
typedef long long ll;
using namespace std;

int main(){
	ll n, m, ans=0;
	cin >> n >> m;
	ans+=2*(n/2)*(m/2);
	if(n%2==1)
		ans+=(m/2);
	if(m%2==1)
		ans+=(n/2);	
	cout << ans;
}