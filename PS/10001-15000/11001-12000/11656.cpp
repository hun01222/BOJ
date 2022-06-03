#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<string> v;
	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i++){
		string temp;
		for(int j=i; j<s.size(); j++)
			temp+=s[j];
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	
	for(auto a:v)
		cout << a << "\n";
}