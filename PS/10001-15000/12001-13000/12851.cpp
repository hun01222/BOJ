#include<iostream>
#include<queue>
#define INF 1e9
#define MAX 100001
using namespace std;

int n, m;
int ans_time=INF;
int ans_cnt=0;
bool visited[MAX];

void BFS(){
	queue<pair<int, int>> q;
	q.push(make_pair(n, 0));
	visited[n]=true;
	
	while(!q.empty()){
		int x=q.front().first;
		int time=q.front().second;
		q.pop();
		visited[x]=true;
		//cout << x << ' ' << time << "\n";
		
		if(time>ans_time)
			continue;
		
		if(x==m){
			ans_time=time;
			ans_cnt++;
			continue;
		}
		
		if(x-1>=0&&!visited[x-1])
			q.push(make_pair(x-1, time+1));
		if(x+1<=100000&&!visited[x+1])
			q.push(make_pair(x+1, time+1));
		if(2*x<=100000&&!visited[2*x])
			q.push(make_pair(2*x, time+1));
	}
}

int main(){
	cin >> n >> m;
	
	BFS();
	
	cout << ans_time << "\n" << ans_cnt;
}