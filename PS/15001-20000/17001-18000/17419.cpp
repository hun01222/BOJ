#include<iostream>
#include<string>
using namespace std;

int main(){
	int n, cnt=0;
	string s;
	cin >> n >> s;
	for(auto& a:s)
		if((a-'0')==1)
			cnt++;
	
	cout << cnt;
}