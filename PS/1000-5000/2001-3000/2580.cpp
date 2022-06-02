#include<iostream>
#include<vector>
using namespace std;

int map[9][9]={0, };
vector<pair<int, int>> v;
int num=0;
bool ans_check=false;

bool check(int a, int b){
	int temp=map[a][b];
	for(int i=0; i<9; i++){
		if(temp==map[a][i]&&i!=b)
			return false;
		if(temp==map[i][b]&&i!=a)
			return false;
	}
	
	int x=a/3;
	int y=b/3;
	for(int i=x*3; i<x*3+3; i++)
		for(int j=y*3; j<y*3+3; j++)
			if(temp==map[i][j]&&i!=a&&j!=b)
				return false;
	return true;
}

void DFS(int cnt){
	if(ans_check) return;
	
	if(cnt==num){
		for(int i=0; i<9; i++){
			for(int j=0; j<9; j++)
				cout << map[i][j] << ' ';
			cout << "\n";
		}
		ans_check=true;
		return;
	}
	
	for(int i=1; i<=9; i++){
		int x=v[cnt].first;
		int y=v[cnt].second;
		map[x][y]=i;
		if(check(x, y))
			DFS(cnt+1);
		map[x][y]=0;
	}
	return;
}

int main(){
	for(int i=0; i<9; i++)
		for(int j=0; j<9; j++){
			cin >> map[i][j];
			if(!map[i][j]){
				v.push_back(make_pair(i, j));
				num++;
			}
		}
	DFS(0);
}