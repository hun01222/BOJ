#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	vector<pair<int, int>> v;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
}