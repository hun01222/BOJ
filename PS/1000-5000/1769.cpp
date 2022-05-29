#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int cnt=0;
	cin >> s;
	while(s.size()>1){
		string s_temp;
		int num_temp=0;
		for(int i=0; i<s.size(); i++){
			num_temp+=(s[i]-'0');
			s_temp=to_string(num_temp);
		}
		s=s_temp;
		cnt++;
	}
	
	cout << cnt << "\n";
	if((s[0]-'0')%3==0)
		cout << "YES";
	else
		cout << "NO";
}