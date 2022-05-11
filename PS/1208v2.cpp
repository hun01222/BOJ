#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

vector<int> v;

void DFS(int cnt, int val, int num, vector<int> &vect){
	if(cnt==num){
		vect.push_back(val);
		return;
	}
	DFS(cnt+1, val, num, vect);
	DFS(cnt+1, val+v[cnt], num, vect);
}

int main(){
	int n, s, temp;
	cin >> n >> s;
	for(int i=0; i<n; i++){
		cin >> temp;
		v.push_back(temp);
	}
	
	int half=n/2;
	vector<int> l, r;
	DFS(0, 0, half, l);
	DFS(0, 0, n-half, r);
	sort(l.begin(), l.end());
}