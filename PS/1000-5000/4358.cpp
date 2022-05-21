#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string s;
	map<string, float> map;
	int cnt=0;
	while(getline(cin, s)){
		cnt++;
		map[s]++;
	}
	
	cout << fixed;
	cout.precision(4);
	
	for(auto a=map.begin(); a!=map.end(); a++){
		string name=a->first;
		float n=a->second;
		n/=cnt;
		n*=100;
		cout << name << ' ' << n << "\n";
	}
}