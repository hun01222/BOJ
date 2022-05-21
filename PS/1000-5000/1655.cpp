#include<iostream>
#include<queue>
#include<functional>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	priority_queue<int> max;
	priority_queue<int, vector<int>, greater<int>> min;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		if(max.size()==min.size())
			max.push(temp);
		else
			min.push(temp);
		if(!max.empty()&&!min.empty()&&max.top()>min.top()){
			int max_val, min_val;
			max_val=max.top();
			min_val=min.top();
			max.pop();
			min.pop();
			max.push(min_val);
			min.push(max_val);
		}
		cout << max.top() << "\n";
	}
}