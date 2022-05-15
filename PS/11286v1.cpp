#include<iostream>
#include<vector>
#include<queue>
#include<functional>
#include<cmath>
using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // priority_queue<자료형, 구현체, 비교 연산자>

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	while(n--){
		int temp;
		cin >> temp;
		if(temp==0){
			if(pq.empty())
				cout << "0\n";
			else{
				cout << pq.top().second << "\n";
				pq.pop();
			}
		}
		else
			pq.push(make_pair(abs(temp), temp));
	}
}