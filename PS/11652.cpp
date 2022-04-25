#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long long int n;
	map<long long int, int> m;
	vector<long long int> v;
	
	cin >> n;
	while(n--){
		long long int temp;
		cin >> temp;
		if(m[temp]==0){
			m[temp]++;
			v.push_back(temp);
		}
		else
			m[temp]++;
	}
	sort(v.begin(), v.end());
	
	long long int mcv, freq=0;
	for(auto a : v){
		if(m[a]>freq){
			freq=m[a];
			mcv=a;
		}
	}
	cout << mcv;
}