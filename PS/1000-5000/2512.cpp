#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
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
	for(int i=0; i<n; i++){
		int cmp=m/(n-i);
		if(v[i]>cmp){
			cout << cmp;
			return 0;
		}
		m-=v[i];
	}
	
	cout << v[n-1];
}