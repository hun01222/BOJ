#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, ans=987654321;
int map[11][11]={0, };
vector<int> v;

int main(){
	cin >> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> map[i][j];
	
	for(int i=0; i<n; i++)
		v.push_back(i);
	
	do{
		bool flag=false;
		int cnt=0;
		for(int i=0; i<n-1; i++){
			if(!map[v[i]][v[i+1]]){
				flag=true;
				break;
			}
			cnt+=map[v[i]][v[i+1]];
		}
		if(!map[v[n-1]][v[0]]||flag)
			continue;
		cnt+=map[v[n-1]][v[0]];
		ans=min(cnt, ans);
	}while(next_permutation(v.begin(), v.end()));
	
	cout << ans;
}