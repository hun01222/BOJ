#include<iostream>
#include<vector>
#include<memory.h>
using namespace std;

int main(){
	int r, c, t, cnt=0;
	int map[51][51]={0, };
	int temp_diffusion[51][51]={0, };
	vector<pair<int, int>> v;
	
	cin >> r >> c >> t;
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++){
			cin >> map[i][j];
			if(map[i][j]==-1)
				v.push_back(make_pair(i, j));
			else
				cnt++;
		}
	
	for(int i=0; i<t; i++){
		// int idx_first=0, idx_second=0; // 바람이 벽에 도달하면 idx+1;
			
			
		for(int i=0; i<r; i++)
			for(int j=0; j<c; j++){
				int cnt_diffusion=0;
				if(0<=(i-1)&&map[i-1][j]!=-1){
					temp_diffusion[i-1][j]=map[i][j]/5;
					cnt_diffusion++;
				}
				if(r>(i+1)&&map[i+1][j]!=-1){
					temp_diffusion[i+1][j]=map[i][j]/5;
					cnt_diffusion++;
				}
				if(0<=(j-1)&&map[i][j-1]!=-1){
					temp_diffusion[i][j-1]=map[i][j]/5;
					cnt_diffusion++;
				}
				if(c>(j+1)&&map[i][j+1]!=-1){
					temp_diffusion[i][j+1]=map[i][j]/5;
					cnt_diffusion++;
				}
				temp_diffusion[i][j]-=(cnt_diffusion*map[i][j]/5);
			}
		
		for(int i=0; i<r; i++)
			for(int j=0; j<c; j++)
				map[i][j]+=temp_diffusion[i][j];
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++)
			cout << map[i][j] << ' ';
		cout << "\n";
	}
}