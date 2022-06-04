#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	int ans=0, temp=1;
	stack<char> st;
	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i++){
		if(s[i]=='('){
			temp*=2;
			st.push('(');
		}
		else if(s[i]=='['){
			temp*=3;
			st.push('[');
		}
		else if(s[i]==')'&&(st.empty()||st.top()!='(')){
			cout << 0;
			return 0;
		}
		else if(s[i]==']'&&(st.empty()||st.top()!='[')){
			cout << 0;
			return 0;
		}
		else if(s[i]==')'){
			if(s[i-1]=='(')
				ans+=temp;
			st.pop();
			temp/=2;
		}
		else if(s[i]==']'){
			if(s[i-1]=='[')
				ans+=temp;
			st.pop();
			temp/=3;
		}
	}
	
	if(!st.empty()){
		cout << 0;
		return 0;
	}
	
	cout << ans;
}