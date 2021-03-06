#include<iostream>
#define MAX 1000001
typedef long long ll;
using namespace std;

int n, m, arr[MAX]={0, };

bool check(int mid){
	ll sum=0;
	for(int i=0; i<n; i++)
		if(arr[i]>mid)
			sum+=(arr[i]-mid);
	return sum>=m;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	int lo=0, hi=1e9;
	while(lo+1<hi){
		int mid=(lo+hi)/2;
		if(check(mid))
			lo=mid;
		else
			hi=mid;
	}

	cout << lo;
}