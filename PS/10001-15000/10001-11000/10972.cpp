#include<iostream>
#include<algorithm>
#include<vector>
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
	
	if(next_permutation(v.begin(), v.end()))
		for(auto a:v)
			cout << a << ' ';
	else
		cout << -1;
}