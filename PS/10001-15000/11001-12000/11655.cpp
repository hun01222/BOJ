#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	
	for(int i=0; i<s.size(); i++){
		if(s[i]<='Z'&&s[i]>'M')
			s[i]-=('N'-'A');
		else if(s[i]>='A'&&s[i]<='M')
			s[i]+=('N'-'A');
		else if(s[i]<='z'&&s[i]>'m')
			s[i]-=('n'-'a');
		else if(s[i]>='a'&&s[i]<='m')
			s[i]+=('n'-'a');
	}
	
	cout << s;
}