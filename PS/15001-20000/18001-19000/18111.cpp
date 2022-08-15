#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, m, b, maximum=0, ans_cnt=987654321, ans_height=0;
	int map[501][501]={0, };
	
	cin >> n >> m >> b;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++){
			cin >> map[i][j];
			maximum=max(maximum, map[i][j]);
		}
	
	for(int i=0; i<=maximum; i++){
		int cnt=0;
		int cnt_b=0;
		for(int j=0; j<n; j++)
			for(int k=0; k<m; k++){
				int temp=(map[j][k]-i);
				if(temp>0){
					cnt+=(2*temp);
					cnt_b-=temp;
				}
				else if(temp<0){
					cnt-=temp;
					cnt_b-=temp;
				}
			}
		if(cnt_b>b)
			continue;
		if(ans_cnt>=cnt){
			ans_cnt=cnt;
			ans_height=i;
		}
	}
	cout << ans_cnt << ' ' << ans_height;
}