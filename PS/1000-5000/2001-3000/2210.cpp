#include<iostream>
#include<cmath>
#define MAX 1000001
using namespace std;

int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};
int map[5][5]={0, };
bool visit[MAX]={0, };

void DFS(int x, int y, int num, int cnt){
	if(cnt==6){
		visit[num]=true;
		return;
	}
	
	for(int i=0; i<4; i++){
		if(x+dx[i]>=0&&x+dx[i]<5&&y+dy[i]>=0&&y+dy[i]<5)
			DFS(x+dx[i], y+dy[i], map[x][y]*int(pow(10, cnt))+num, cnt+1);
	}
}

int main(){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++)
			cin >> map[i][j];
	}
	
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			DFS(i, j, 0, 0);
	
	int ans=0;
	for(int i=0; i<MAX; i++){
		if(visit[i]==true){
			ans++;
		}
	}
	
	cout << ans;
}