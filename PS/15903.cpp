#include<iostream>
#include<queue>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	ll n, m, ans=0;
	priority_queue<ll> pq;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		ll temp;
		cin >> temp;
		pq.push(-temp);
	}
	
	while(m--){
		ll temp1=pq.top();
		pq.pop();
		ll temp2=pq.top();
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