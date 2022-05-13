#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	long long sum=0;
	bool zero=false;
	for(int i=0; i<s.size(); i++){
		sum+=(s[i]-'0');
		if(s[i]-'0'==0)
			zero=true;
	}
	
	if(sum%3||zero==false)
		cout << -1;
	else{
		sort(s.begin(), s.end(), greater<>());
		cout << s;
	}
}