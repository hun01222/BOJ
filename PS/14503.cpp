#include<iostream>
using namespace std;

int main(){
	int n, m, r, c, d, cnt=0;
	int map[51][51]={0, };
	cin >> n >> m >> r >> c >> d;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> map[i][j];
		}
	}
	int temp_x=r, temp_y=c;
	map[r][c]=2;
	cnt++;
	int limit=0;
	while(limit<4){
		if(d==0){
			if(map[temp_x-1][temp_y]==0){
				temp_x--;
				map[temp_x][temp_y]=2;
				limit=0;
				cnt++;
			}
			else{
				limit++;
				d=3;
			}
			if(limit==4&&map[temp_x][temp_y+1]==2){
				temp_y++;
				limit=0;
			}
		}
		else if(d==1){
			if(map[temp_x][temp_y+1]==0){
				temp_y++;
				map[temp_x][temp_y]=2;
				limit=0;
				cnt++;
			}
			else{
				limit++;
				d=0;
			}
			if(limit==4&&map[temp_x+1][temp_y]==2){
				temp_x++;
				limit=0;
			}
		}
		else if(d==2){
			if(map[temp_x+1][temp_y]==0){
				temp_x++;
				map[temp_x][temp_y]=2;
				limit=0;
				cnt++;
			}
			else{
				limit++;
				d=1;
			}
			if(limit==4&&map[temp_x][temp_y-1]==2){
				temp_y--;
				limit=0;
			}
		}
		else if(d==3){
			if(map[temp_x][temp_y-1]==0){
				temp_y--;
				map[temp_x][temp_y]=2;
				limit=0;
				cnt++;
			}
			else{
				limit++;
				d=2;
			}
			if(limit==4&&map[temp_x-1][temp_y]==2){
				temp_x--;
				limit=0;
			}
		}
	}
	cout << cnt << "\n";
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
			cout << map[i][j] << ' ';
		cout << "\n";
	}
}

/*
1 1 1 1 1 1 1 1 1 1
1 2 2 2 2 2 2 2 2 1
1 2 0 0 1 1 1 1 2 1
1 2 0 1 1 0 0 0 2 1
1 2 1 1 2 2 2 2 2 1
1 2 2 2 2 2 2 2 2 1
1 2 2 2 2 2 0 1 2 1
1 2 2 2 2 2 1 1 2 1
1 2 2 2 2 2 1 1 2 1
1 2 2 2 2 2 2 2 2 1
1 1 1 1 1 1 1 1 1 1

28+0+4+6+4+4+4

38+12

0,0 0,1 0,2
1,0 1,1 1,2
2,0 2,1 2,2

0 3 2 1
*/