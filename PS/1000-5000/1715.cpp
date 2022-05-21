#include<iostream>
#include<queue>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	priority_queue<int> pq;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		pq.push(-temp);
	}
	
	if(n==1){
		cout << 0;
		return 0;
	}
	
	int ans=0;
	while(pq.size()!=1){
		int a, b;
		a=pq.top();
		pq.pop();
		b=pq.top();
		pq.pop();
		ans+=(a+b);
		pq.push(a+b);
	}
	cout << -ans;
}