#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#define max 10001
using namespace std;

int main(){
	vector<int> v(max, 1);
	for(int i=2; i<=sqrt(max); i++){
		for(int j=i*2; j<=max; j+=i){
			if(v[j])
				v[j]=0;
		}
	}
	
	int t;
	cin >> t;
	while(t--){
		int a, b;
		queue<pair<int, int>> q;
		cin >> a >> b;
		
		q.push(make_pair(a, 0));
		while(!q.empty()){
			if(q.front().second==b){
				cout << cnt;
				return 0;
			}
			int temp=q.front().first;
			q.pop();
			
		}
	}
}