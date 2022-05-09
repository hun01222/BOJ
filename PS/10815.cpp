#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	vector<int> v;
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for(int i=0; i<m; i++){
		int temp;
		cin >> temp;
		cout << binary_search(v.begin(), v.end(), temp) << ' ';
	}
}