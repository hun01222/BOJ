#include<iostream>
#include<string>
#include<stack>
using namespace std;

stack<char> st;

void print(){
	int st_size=st.size();
	for(int i=0; i<st_size; i++){
		cout << st.top();
		st.pop();
	}
}

int main(){
	string s;
	getline(cin, s);
	cin >> s;
	int s_size=s.size();
	bool Istag=false;
	
	for(int i=0; i<s_size; i++){		
		if(s[i]=='<'){
			Istag=true;
			print();
			cout << '<';
		}
		else if(s[i]==' '){
			print();
			cout << ' ';
		}
		else if(Istag==false){
			st.push(s[i]);
		}
		else if(s[i]=='>'){
			Istag=false;
			cout << '>';
		}
		else if(Istag==true){
			cout << s[i];
		}
		if(i==s_size-1){
			print();
		}
	}
}