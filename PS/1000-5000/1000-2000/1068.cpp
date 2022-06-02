#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool del[51]={0, };
vector<int> v[51];

void BFS(int start){
	queue<int> q;
	q.push(start);
	
	while(!q.empty()){
		int temp=q.front();
		q.pop();
		
		del[temp]=true;
		for(int i=0; i<v[temp].size(); i++){
			if(del[v[temp][i]])
				continue;
			q.push(v[temp][i]);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, start=0, ans=0;
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		if(temp==-1){
			start=i;
			continue;
		}
		v[temp].push_back(i);
	}
	
	int del_num;
	cin >> del_num;
	BFS(del_num);
	
	for(int i=0; i<n; i++){
		if(!del[i]){
			int j;
			for(j=0; j<v[i].size(); j++){
				if(!del[v[i][j]])
					break;
			}
			if(j==v[i].size())
				ans++;
		}
	}
	cout << ans;
}