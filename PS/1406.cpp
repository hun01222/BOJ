#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){
	list<char> l;
	string s;
	cin >> s;
	int s_length=s.size();
	for(int i=0; i<s_length; i++){
		l.push_back(s[i]);
	}
	list<int>::iterator iter=l.end();
	
	int n;
	char c;
	cin >> n;
	while(n--){
		cin >> c;
		if(c=='L'){
			if(iter==l.begin())
				continue;
			else
				iter--;
		}
		else if(c=='D'){
			if(iter==l.end())
				continue;
			else
				iter++;
		}
		else if(c=='B'){
			if(iter==l.begin())
				continue;
			else
				iter=l.erase(iter);
		}
		else if(c=='P'){
			cin >> c;
			l.insert(c);
		}
	}
	
	for(auto a : l)
		cout << a;
}