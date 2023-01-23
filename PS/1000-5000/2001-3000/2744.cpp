#include<iostream>
#include<string>
using namespace std;

int main(){
	string s, ans="";
	int size;
	cin >> s;
	
	size=s.length();
	for(int i=0; i<size; i++){
		if(s[i]<='Z')
			ans+=(s[i]+'a'-'A');
		else
			ans+=(s[i]+'A'-'a');
	}
	
	cout << ans;
}