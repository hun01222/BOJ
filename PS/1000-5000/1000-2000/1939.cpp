#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
#define MAX 10001
typedef long long ll;
using namespace std;

int n, m, start, finish;
vector<pair<int, int>> v[MAX];
bool visited[MAX]={0, };

bool BFS(int cost){
	queue<int> q;
	q.push(start);
	visited[start]=true;
	
	while(!q.empty()){
		int temp=q.front();
		q.pop();
		
		if(temp==finish)
			return true;
		
		for(int i=0; i<v[temp].size(); i++){
			int next=v[temp][i].first;
			ll next_cost=v[temp][i].second;
			
			if(!visited[next]&&cost<=next_cost){
				visited[next]=true;
				q.push(next);
			}
		}
	}
	
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	cin >> start >> finish;
	
	int lo=0, hi=1e9;
	while(lo+1<hi){
		int mid=(lo+hi)/2;
		if(BFS(mid))
			lo=mid;
		else
			hi=mid;
		memset(visited, false, sizeof(visited));
	}
	
	cout << hi;
}