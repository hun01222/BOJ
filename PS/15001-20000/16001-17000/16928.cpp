#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	vector<int> v(101, 0);
	vector<bool> visit(101, false);
	int dice[6]={1, 2, 3, 4, 5, 6};
	for(int i=0; i<n+m; i++){
		int a, b;
		cin >> a >> b;
		v[a]=b;
	}
	
	queue<pair<int, int>> q;
	q.push(make_pair(1, 0));
	while(!q.empty()){
		int curr=q.front().first;
		int cnt=q.front().second;
		q.pop();
		
		if(visit[curr]==true)
			continue;
		visit[curr]=true;
		
		//cout << curr << " ";
		
		if(curr==100){
			cout << cnt;
			return 0;
		}
		
		for(int i=0; i<6; i++){
			if(curr+dice[i]<=100&&v[curr]==0&&visit[curr+dice[i]]==false)
				q.push(make_pair(curr+dice[i], cnt+1));
			if(v[curr]!=0&&visit[v[curr]+dice[i]]==false)
				q.push(make_pair(v[curr]+dice[i], cnt+1));
		}
	}
}