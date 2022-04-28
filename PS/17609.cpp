#include<iostream>
#include<string>
using namespace std;

bool is_Palin(string &s){
	int left=0, right=s.size()-1;
	while(left<right){
		if(s[left++]!=s[right--])
			return false;
	}
	return true;
}

bool is_pseudoPalin(string &s){
	int left=0, right=s.size()-1, cnt=0;
	while(left<right){
		if(s[left++]!=s[right--]){
			cnt++;
			if(cnt>=2)
				return false;
			if(s[left-1]==s[right]){
				left--;
				continue;
			}
			else if(s[left]==s[right+1]){
				right++;
				continue;
			}
			else
				return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(is_Palin(s))
			cout << "0\n";
		else if(is_pseudoPalin(s))
			cout << "1\n";
		else
			cout << "2\n";
	}
}

/*
ababbabaa
abca
*/