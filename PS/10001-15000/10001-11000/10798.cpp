#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1="", s2="", s3="", s4="", s5="", ans="";
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	
	for(int i=1; i<=15; i++){
		if(s1.length()>=i)
			ans+=s1[i-1];
		if(s2.length()>=i)
			ans+=s2[i-1];
		if(s3.length()>=i)
			ans+=s3[i-1];
		if(s4.length()>=i)
			ans+=s4[i-1];
		if(s5.length()>=i)
			ans+=s5[i-1];
	}
	cout << ans;
}