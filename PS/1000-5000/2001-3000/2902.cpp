#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	int size=s.size();
	for(int i=0; i<size; i++){
		if('A'<=s[i]&&s[i]<='Z')
			cout << s[i];
	}
}