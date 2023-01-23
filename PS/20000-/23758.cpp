#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, temp, ans=1;
	vector<int> v;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	
	for(int i=0; i<(n+1)/2; i++){
		ans+=int(log2(double(v[i])));
	}
	cout << ans;
}