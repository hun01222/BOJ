#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int sum=0, arr[8]={0, };
	map<int, int> m;
	vector<int> v;
	
	for(int i=0; i<8; i++){
		cin >> arr[i];
		m[arr[i]]=i+1;
	}
	sort(arr, arr+8);
	
	for(int i=3; i<8; i++)
		sum+=arr[i];
	cout << sum << "\n";
	
	for(int i=3; i<8; i++)
		v.push_back(m[arr[i]]);
	sort(v.begin(), v.end());
	
	for(auto a:v)
		cout << a << ' ';
}