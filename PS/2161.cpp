#include<iostream>
#include<queue>
using namespace std;

int main(){
	int n, temp;
	queue<int> q;
	
	cin >> n;
	for(int i=1; i<=n; i++){
		q.push(i);
	}
	
	while(!q.empty()){
		cout << q.front() << ' ';
		q.pop();
		if(q.empty())
			return 0;
		q.push(q.front());
		q.pop();
	}
}