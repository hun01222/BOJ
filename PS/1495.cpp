#include<iostream>
#include<queue>
using namespace std;

int main(){
	int n, s, m, queue_size=1;
	queue<int> q;
	priority_queue<int> pq;
	cin >> n >> s >> m;
	
	q.push(s);
	while(n--){
		int temp;
		cin >> temp;
		for(int i=0; i<queue_size; i++){
			if(q.front()-temp>=0)
				q.push(q.front()-temp);
			if(q.front()+temp<=m)
				q.push(q.front()+temp);
			q.pop();
		}
		queue_size=q.size();
	}
	
	if(q.empty()){
		cout << -1;
		return 0;
	}
	
	pq.push(0);
	while(!q.empty()){
		if(q.front()>pq.top())
			pq.push(q.front());
		q.pop();
	}
	cout << pq.top();
}