#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string s;
	bool flag;
	int cnt_f=0, cnt_t=0;
	cin >> s;
	flag=(s[0]-'0');
	if(s[0]-'0')
		cnt_t++;
	else
		cnt_f++;
	
	for(int i=1; i<s.size(); i++)
		if(flag!=(s[i]-'0')){
			if(s[i]-'0')
				cnt_t++;
			else
				cnt_f++;
			flag=(s[i]-'0');
		}
	cout << min(cnt_f, cnt_t);
}