#include<iostream>
#include<vector>
using namespace std;

int k;
int result[50]={0, };
vector<int> v;

void DFS(int L, int pre){
	if(L==6){
		for(int i=0; i<6; i++)
			cout << result[i] << ' ';
		cout << "\n";
	}
	else{
		for(int i=1; i<=k; i++){
			if(pre<i){
				result[L]=v[i-1];
				DFS(L+1, i);
			}
		}
	}
}

int main(){	
	while(1){
		cin >> k;
		if(k==0)
			return 0;
		for(int i=0; i<k; i++){
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		DFS(0, 0);
		cout << "\n";
		v.clear();
		for(int i=0; i<k; i++)
			result[i]=0;
	}
}