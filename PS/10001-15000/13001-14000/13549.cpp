#include<iostream>
#include<queue>
#include<stack>
#define INF 1e9
#define MAX 100001
using namespace std;

int n, m;
int ans_time=INF;
int ans_cnt=0;
bool visited[MAX];
int parent[MAX]={0, };
stack<int> s;

void BFS(){
	queue<pair<int, int>> q;
	q.push(make_pair(n, 0));
	visited[n]=true;
	
	while(!q.empty()){
		int x=q.front().first;
		int time=q.front().second;
		q.pop();
		
		if(x==m){
			int idx=x;
			ans_time=time;
			
			while(idx!=n){
				s.push(idx);
				idx=parent[idx];
			}
			s.push(n);
			return;
		}
		
		if(x-1>=0&&!visited[x-1]){
			parent[x-1]=x;
			visited[x-1]=true;
			q.push(make_pair(x-1, time+1));
		}
		if(x+1<=100000&&!visited[x+1]){
			parent[x+1]=x;
			visited[x+1]=true;
			q.push(make_pair(x+1, time+1));
		}
		if(2*x<=100000&&!visited[2*x]){
			parent[2*x]=x;
			visited[2*x]=true;
			q.push(make_pair(2*x, time+1));
		}
	}
}

int main(){
	cin >> n >> m;
	
	BFS();
	
	cout << ans_time << "\n";
	while(!s.empty()){
		cout << s.top() << ' ';
		s.pop();
	}
}