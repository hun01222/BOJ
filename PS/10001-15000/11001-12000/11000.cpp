#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<pair<int, int>> v;
priority_queue<int> pq;

int main(){
	int n;	
	cin >> n;
	
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	
	pq.push(-v[0].second);
	for(int i=1; i<n; i++){
		pq.push(-v[i].second);
		if(-pq.top()<=v[i].first)
			pq.pop();
	}
	
	cout << pq.size();
}