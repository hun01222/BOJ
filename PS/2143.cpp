#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t, n, m, temp;
	vector<int> a;
	vector<int> b;
	cin >> t >> n;
	cin >> temp;
	a.push_back(temp);
	for(int i=0; i<n; i++){
		cin >> temp;
		a.push_back(temp+a[i-1]);
	}
	cin >> m;
	cin >> temp;
	for(int i=0; i<m; i++){
		cin >> temp;
		b.push_back(temp+b[i-1]);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
}