#include<iostream>
using namespace std;

int main(){
	int map[101][101]={0, };
	int n, x, y, ans=0;
	
	cin >> n;
	while(n--){
		cin >> x >> y;
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				if(map[i+x][j+y]==0)
					map[i+x][j+y]=1;
				if(map[i+x][j+y]==1)
					map[i+x][j+y]=2;
			}
		}
	}
	
	for(int i=0; i<101; i++)
		for(int j=0; j<101; j++)
			if(map[i][j]==2)
				ans++;
	cout << ans;
}