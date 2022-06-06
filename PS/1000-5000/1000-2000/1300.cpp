#include<iostream>
#include<algorithm>
#define MAX 100001
using namespace std;

int n, k, ans=0;
int arr[MAX]={0, };

bool check(int mid){
	int cnt=0;
	
	for(int i=1; i<=n; i++)
		cnt+=min(mid/i, n); // i*j<=mid
	
	return cnt<k;
}

int main(){
	cin >> n >> k;
	
	int lo=1, hi=k+1;
	while(lo+1<hi){
		int mid=(lo+hi)/2;
		if(check(mid))
			lo=mid;
		else{
			hi=mid;
			ans=mid;
		}
	}
	
	cout << ans;
}