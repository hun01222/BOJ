#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n, k, ans=0;
	vector<int> v;
	vector<int> iter;
	
	cin >> n >> k;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
		iter.push_back(i);
	}
	
	do{
		int sum=0;
		for(int i=0; i<n; i++){
			sum+=(v[iter[i]]-k);
			if(sum<0)
				break;
		}
		if(sum>=0)
			ans++;
	}while(next_permutation(iter.begin(), iter.end()));
	
	cout << ans;
}