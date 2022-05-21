#include<iostream>
#include<vector>
#include<cmath>
#define max 1001
using namespace std;

int main(){
	int n, k, cnt=0;
	vector<int> v(max, 1);
	cin >> n >> k;
	
	for(int i=2; i<=n; i++){
		if(v[i]){
			v[i]=0;
			cnt++;
			if(cnt==k){
				cout << i;
				return 0;
			}
		}
		for(int j=i*2; j<=n; j+=i){
			if(v[j]){
				v[j]=0;
				cnt++;
			}
			if(cnt==k){
				cout << j;
				return 0;
			}
		}
	}
}
//2 4 6 3 5 7