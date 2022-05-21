#include<iostream>
#include<string>
using namespace std;

string arr1[8]={"000", "001", "010", "011", "100", "101", "110", "111"};
string arr2[8]={"0", "1", "10", "11", "100", "101", "110", "111"};

int main(){
	string s;
	cin >> s;
	
	cout << arr2[s[0]-'0'];
	for(int i=1; i<s.size(); i++)
		cout << arr1[s[i]-'0'];
}