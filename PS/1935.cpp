#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, ans=0;
	string s;
	stack<double> st;
	vector<int> v;
	
	cin >> n;
	cin >> s;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	int s_size=s.size();
	for(int i=0; i<s_size; i++){
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
			double a=st.top();
			st.pop();
			double b=st.top();
			st.pop();
			
			if(s[i]=='+'){
				st.push(b+a);
			}
			else if(s[i]=='-'){
				st.push(b-a);
			}
			else if(s[i]=='*'){
				st.push(b*a);
			}
			else if(s[i]=='/'){
				st.push(b/a);
			}
		}
		else{
			st.push(v[s[i]-'A']);
		}
	}
	
	cout << fixed;
	cout.precision(2);
	cout << st.top();
}