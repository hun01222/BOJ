#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string s, t;
	int size;
	
	cin >> s >> t;
	
	size=t.length();
	for(int i=size-1; i>=0; i--){
		if(t[i]=='A')
			t.pop_back();
		else{
			t.pop_back();
			reverse(t.begin(), t.end());
		}
		
		if(s==t){
			cout << 1;
			return 0;
		}
	}
	
	cout << 0;
}