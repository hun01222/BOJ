#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
	int n, cnt=0;
	string s;
	stack<char> st;
	cin >> n;
	while(n--){
		cin >> s;
		int s_size=s.size();
		for(int i=0; i<s_size; i++){
			char char_temp=0;
			if(!st.empty()){
				char_temp=st.top();
			}
			st.push(s[i]);
			if(char_temp==st.top()){
				st.pop();
				st.pop();
			}
			char_temp=0;
		}
		
		if(st.size()==0)
			cnt++;
		while(!st.empty()) st.pop();
	}
	
	cout << cnt;
}