#include<iostream>
#include<queue>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, temp;
	priority_queue<int> pq;
	
	cin >> n;
	for(int i=0; i<n*n; i++){
		cin >> temp;
		pq.push(-temp);
		if(pq.size()>n)
			pq.pop();
	}

	cout << -pq.top();
}