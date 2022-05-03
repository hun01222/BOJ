#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	int n, m, ans=0;
	map<string, int> ma;
	cin >> n >> m;
	while(n--){
		string temp;
		cin >> temp;
		ma[temp]++;
	}
	while(m--){
		string temp;
		cin >> temp;
		if(ma[temp]!=0)
			ans++;
	}
	cout << ans;
}

