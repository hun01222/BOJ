#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	stack<int> s;
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		s.push(temp);
	}
	
	int max=0, cnt=0;
	for(int i=0; i<n; i++){
		if(max<s.top()){
			max=s.top();
			cnt++;
		}
		s.pop();
	}
	cout << cnt;
}