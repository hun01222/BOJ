#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	map<string, int> map;
	vector<string> v;
	int n, m;
	cin >> n >> m;
	for(int i=0; i<n+m; i++){
		string s;
		cin >> s;
		map[s]++;
		if(map[s]>1){
			v.push_back(s);
		}
	}
	sort(v.begin(), v.end());
	
	cout << v.size() << "\n";
	for(auto a : v){
		cout << a << "\n";
	}
}