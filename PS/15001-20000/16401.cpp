#include<iostream>
typedef long long ll;
using namespace std;

int m, n, arr[1000001]={0, };

bool check(int mid){
	ll sum=0;
	for(int i=0; i<n; i++)
		sum+=(arr[i]/mid);
	return sum>=m;
}

int main(){
	cin >> m >> n;
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