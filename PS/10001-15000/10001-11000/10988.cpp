#include<iostream>
#include<string>
using namespace std;

bool IsPalin(string s){
	int lo=0, hi=s.size()-1;
	while(lo<hi){
		if(s[lo]!=s[hi])
			return false;
		lo++, hi--;
	}
	return true;
}

int main(){
	string s;
	cin >> s;
	cout << IsPalin(s);
}