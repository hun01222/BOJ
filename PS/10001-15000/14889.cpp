#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<vector>
using namespace std;

bool team[20];
int score[20][20];
int n, ans=999999999;

void DFS(int cnt, int idx){
	vector<int> start;
	vector<int> link;
	int start_score=0;
	int link_score=0;
	if(cnt==n/2){
		for(int i=0; i<n; i++){
			if(team[i]==true)
				start.push_back(i);
			else
				link.push_back(i);
		}
		for(int i=0; i<n/2; i++){
			for(int j=0; j<n/2; j++){
				start_score+=score[start[i]][start[j]];
				link_score+=score[link[i]][link[j]];
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
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cin >> score[i][j];
	}
	DFS(0, 0);
	cout << ans;
}