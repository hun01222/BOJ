#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int n, m;
int result[9]={0, };
vector<int> v;
map<int, int> num_cnt;

void DFS(int idx, int cnt){
	if(cnt==m){
		for(int i=0; i<m; i++)
			cout << v[result[i]] << ' ';
		cout << "\n";
		return;
	}
	if(idx==n)
		return;
	
	for(int i=0; i<v.size(); i++)
		if(num_cnt[v[i]]){
			num_cnt[v[i]]--;
			result[idx]=i;
			DFS(idx+1, cnt+1);
			num_cnt[v[i]]++;
		}
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		if(!num_cnt[temp])
			v.push_back(temp);
		num_cnt[temp]++;
	}
	sort(v.begin(), v.end());

	DFS(0, 0);
}