#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
	ll t, n, m, temp;
	vector<ll> a, b, A, B;
	cin >> t >> n;
	for(int i=0; i<n; i++){
		cin >> temp;
		A.push_back(temp);
	}
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> temp;
		B.push_back(temp);
	}
	
	for(int i=0; i<n; i++){
		ll sum=A[i];
		a.push_back(sum);
		for(int j=i+1; j<n; j++){
			sum+=A[j];
			a.push_back(sum);
		}
	}
	for(int i=0; i<m; i++){
		ll sum=B[i];
		b.push_back(sum);
		for(int j=i+1; j<m; j++){
			sum+=B[j];
			b.push_back(sum);
		}
	}
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	ll cnt=0;
	for(int i=0; i<a.size(); i++){
		int low=lower_bound(b.begin(), b.end(), t-a[i])-b.begin();
		int high=upper_bound(b.begin(), b.end(), t-a[i])-b.begin();
		
		cnt+=(high-low);
	}
	
	cout << cnt;
}