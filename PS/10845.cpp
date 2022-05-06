#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

int main(){
	int n;
	char s[10];
	queue<int> q;
	cin >> n;
	while(n--){
		cin >> s;
		if(!strcmp(s, "push")){
			int temp;
			cin >> temp;
			q.push(temp);
		}
		else if(!strcmp(s, "pop")){\
			if(!q.empty()){
				cout << q.front() << "\n";
				q.pop();
			}
			else
				cout << -1 << "\n";
		}
		else if(!strcmp(s, "size"))
			cout << q.size() << "\n";
		else if(!strcmp(s, "empty"))
			cout << q.empty() << "\n";
		else if(!strcmp(s, "front")){
			if(!q.empty())
				cout << q.front() << "\n";
			else
				cout << -1 << "\n";
		}
		else{
			if(!q.empty())
				cout << q.back() << "\n";
			else
				cout << -1 << "\n";
		}
	}
}