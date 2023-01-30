#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int n, ans=2e9;
int map[21][21]={0, };
bool team[21]={false, };

void DFS(int cnt, int idx){	
	if(cnt==n/2){
		vector<int> start;
		vector<int> link;
		int start_score=0;
		int link_score=0;
		
		for(int i=0; i<n; i++){
			if(team[i]==true)
				start.push_back(i);
			else
				link.push_back(i);
		}
		
		for(int i=0; i<start.size(); i++){
			for(int j=0; j<start.size(); j++){
				start_score+=map[start[i]][start[j]];
			}
		}
		for(int i=0; i<link.size(); i++){
			for(int j=0; j<link.size(); j++){
				link_score+=map[link[i]][link[j]];
			}
		}
		
		ans=min(ans, abs(start_score-link_score));
		return;
	}
	
	for(int i=idx; i<n; i++){
		if(team[i])
			continue;
		else{
			team[i]=true;
			DFS(cnt+1, i);
			team[i]=false;
		}
	}
}


int main(){
	cin >> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> map[i][j];
	
	DFS(0, 0);
	cout << ans;
}