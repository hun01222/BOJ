#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	string s;
	list<char> l;
	list<char>::iterator cur;
	cin >> t;
	
	while(t--){
		cin >> s;
		int s_size=s.size();
		cur=l.begin();
		
		for(int i=0; i<s_size; i++){
			if(s[i]=='<'){
				if(cur==l.begin())
					continue;
				else
					cur--;
			}
			else if(s[i]=='>'){
				if(cur==l.end())
					continue;
				else
					cur++;
			}
			else if(s[i]=='-'){
				if(cur==l.begin())
					continue;
				else
					cur=l.erase(--cur);
			}
			else{
				l.insert(cur, s[i]);
			}
		}
		
		for(auto a : l)
			cout << a;
		cout << "\n";
		l.clear();
	}
}