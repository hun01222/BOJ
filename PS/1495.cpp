#include<iostream>
#include<queue>
using namespace std;

int main(){
	int n, s, m, queue_size=1;\
	queue<int> q;
	priority_queue<int> pq;
	cin >> n >> s >> m;
	
	q.push(-s);
	while(n--){
		int temp;
		cin >> temp;
		for(int i=0; i<queue_size; i++){
			if(q.back()-temp>=0)
				q.push(q.front()-temp);
			q.push(q.front()+temp);
			q.pop();
		}
		queue_size=q.size();
	}
	while(!q.empty()){
		pq.push(-q.front());
		q.pop();
	}
	cout << -pq.top();
}