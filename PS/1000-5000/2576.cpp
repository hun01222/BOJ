#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int sum=0;
	vector<int> v;
	for(int i=0; i<7; i++){
		int temp;
		cin >> temp;
		if(temp%2){
			v.push_back(temp);
			sum+=temp;
		}
	}
	if(!v.size()){
		cout << -1;
		return 0;
	}
	sort(v.begin(), v.end());
	
	cout << sum << "\n" << v[0];
}