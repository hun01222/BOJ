#include<iostream>
#include<string>
using namespace std;

bool is_Palin(string &s){
	int left=0, right=s.size()-1;
	while(left<right){
		if(s[left++]!=s[right--])
			return false;
	}
	return true;
}

int main(){
	string s;
	
	while(1){
		cin >> s;
		if(s=="0")
			return 0;
		else if(is_Palin(s))
			cout << "yes\n";
		else
			cout << "no\n";
	}
}