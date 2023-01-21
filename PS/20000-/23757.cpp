#include<iostream>
#include<queue>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m, temp;
	cin >> n >> m;

	priority_queue<int> pq;
	for(int i=0; i<n; i++){
		cin >> temp;
		pq.push(temp);
	}
		
	for(int i=0; i<m; i++){
		cin >> temp;
		if(pq.top()>=temp){
			pq.push(pq.top()-temp);
			pq.pop();
		}
		else{
			cout << 0;
			return 0;
		}
	}
	
	cout << 1;
}


// 1 2 3 4
// 1 3 5