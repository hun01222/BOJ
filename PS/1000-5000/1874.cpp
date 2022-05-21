#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
	int n, cnt=1;
	stack<int> s;
	vector<char> v;
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		
		while(cnt<=temp){
			s.push(cnt);
			cnt+=1;
			v.push_back('+');
		}
		
		if(s.top()==temp){
			s.pop();
			v.push_back('-');
		}
		else{
			cout << "NO";
			return 0;
		}
	}
	
	for(auto a:v){
		cout << a << "\n";
	}
}