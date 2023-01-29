#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define MAX 100001
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> v(n+1);
	vector<pair<int, int>> ans(n);
	int ans_max=0;
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		v[b].push_back(a);
	}
	
	for(int i=1; i<=n; i++){
		bool visit[MAX]={false, };
		queue<int> q;
		q.push(i);
		
		int cnt=0;
		while(!q.empty()){
			int curr=q.front();
			q.pop();
			visit[curr]=true;
			
			for(int j=0; j<v[curr].size(); j++){
				int next=v[curr][j];
				if(visit[next]==true)
					continue;
				visit[next]=true;
				q.push(next);
				cnt++;
			}
		}
		
		ans.push_back(make_pair(i, cnt));
		ans_max=max(ans_max, cnt);
	}
	
	for(int i=0; i<ans.size(); i++)
		if(ans[i].second==ans_max)
			cout << ans[i].first << ' ';
}