#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	vector<int> v;
	cin >> n >> k;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	cout << v[k-1];
}