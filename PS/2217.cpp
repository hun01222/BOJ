#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	vector<int> v;
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	
	int ans=0;
	for(int i=0; i<n; i++){
		ans=max(ans, (n-i)*v[i]);
	}
	cout << ans;
}