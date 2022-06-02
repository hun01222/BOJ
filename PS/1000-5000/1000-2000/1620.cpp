#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

string arr[100001];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	string s;
	map<string, int> map;
	
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> s;
		arr[i]=s;
		map.insert(make_pair(s,i));
	}
	
	for(int i=0; i<m; i++){
		cin >> s;
		if(isdigit(s[0])==true){
			n=stoi(s);
			cout << arr[n] << "\n";
		}
		else{
			auto iter=map.find(s);
			cout << iter->second << "\n";
		}
	}
}