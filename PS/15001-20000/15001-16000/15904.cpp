#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int len, cnt=0;
	
	getline(cin, s);
	len=s.length();
	
	for(int i=0; i<len; i++){
		if(s[i]=='U'&&cnt==0)
			cnt++;
		if(s[i]=='C'&&cnt==1)
			cnt++;
		if(s[i]=='P'&&cnt==2)
			cnt++;
		if(s[i]=='C'&&cnt==3)
			cnt++;
	}
	
	if(cnt==4)
		cout << "I love UCPC";
	else
		cout << "I hate UCPC";
}