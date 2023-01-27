#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
	int n;
	ll ans=0;
	cin >> n;
	
	vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	
	ans+=v[n-1];
	
	for(int i=0; i<(n-1)/2; i++)
		ans+=(v[n-2-i]-v[i]);
	
	cout << ans;
}