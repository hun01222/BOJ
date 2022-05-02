#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	string temp;
	map<string, string> ma;
	cin >> n >> m;
	while(n--){
		cin >> temp;
		cin >> ma[temp];
	}
	
	while(m--){
		cin >> temp;
		cout << ma[temp] << "\n";
	}
}