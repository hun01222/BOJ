#include<iostream>
#include<queue>
#define MAX 1000001
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		bool visited[MAX];
		priority_queue<pair<int, int>> pq_inc;
		priority_queue<pair<int, int>> pq_dec;
		
		cin >> n;
		for(int i=0; i<n; i++){
			char c;
			int num;
			cin >> c >> num;
			
			if(c=='I'){
				pq_inc.push(make_pair(num, i));
				pq_dec.push(make_pair(-num, i));
				visited[i]=true;
			}
			else{
				if(num==1){
					while(!pq_inc.empty()&&!visited[pq_inc.top().second])
						pq_inc.pop();
					if(!pq_inc.empty()){
						visited[pq_inc.top().second]=false;
						pq_inc.pop();
					}
				}
				else{
					while(!pq_dec.empty()&&!visited[pq_dec.top().second])
						pq_dec.pop();
					if(!pq_dec.empty()){
						visited[pq_dec.top().second]=false;
						pq_dec.pop();
					}
				}
			}
				
			while(!pq_inc.empty()&&!visited[pq_inc.top().second])
				pq_inc.pop();
			while(!pq_dec.empty()&&!visited[pq_dec.top().second])
				pq_dec.pop();
		}
		
		if(pq_dec.empty()&&pq_inc.empty())
			cout << "EMPTY\n";
		else
			cout << pq_inc.top().first << ' ' << -pq_dec.top().first << "\n";
	}
}