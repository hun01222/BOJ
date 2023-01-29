#include<iostream>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(n==0||n==1)
			cout << 1 << ' ' << 0 << "\n";
		else
			cout << 0 << ' ' << 1 << "\n";
	}
}