#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

bool visit[1000001]={false, };

int main(){
	int f, s, g, u, d, ans=-1;
	cin >> f >> s >> g >> u >> d;
	
	queue<pair<int, int>> q;
	q.push(make_pair(s, 0));
	while(!q.empty()){
		int curr=q.front().first;
		int cnt=q.front().second;
		q.pop();
		
		if(visit[curr]==true)
			continue;
		visit[curr]=true;
		
		if(curr==g){
			ans=max(ans, cnt);
			continue;
		}
		
		if(curr+u<=f&&visit[curr+u]==false)
			q.push(make_pair(curr+u, cnt+1));
		if(curr-d>=1&&visit[curr-d]==false)
			q.push(make_pair(curr-d, cnt+1));
	}
	
	if(ans==-1)
		cout << "use the stairs";
	else
		cout << ans;
}