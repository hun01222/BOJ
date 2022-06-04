#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

int main(){
	int ans=0;
	string s;
	stack<int> st;
	cin >> s;
	
	for(int i=0; i<s.size(); i++){
		if(s[i]=='(')
			st.push(i);
		else{
			if(s[i-1]=='('&&s[i]==')'){
				st.pop();
				ans+=st.size();
			}
			else{
				st.pop();
				ans++;
			}
		}
	}
	cout << ans;
}