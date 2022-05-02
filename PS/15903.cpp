#include<iostream>
#include<queue>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, ans=0;
	priority_queue<int> pq;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		pq.push(-temp);
	}
	
	while(m--){
		int temp1=pq.top();
		pq.pop();
		int temp2=pq.top();
		pq.pop();
		pq.push(temp1+temp2);
		pq.push(temp1+temp2);
	}
	
	while(!pq.empty()){
		ans+=pq.top();
		pq.pop();
	}
	cout << -ans;
}