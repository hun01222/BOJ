#include<iostream>
using namespace std;

int n, m, arr[100001]={0, };

bool check(int mid){
	int cnt=1, temp=mid;
	for(int i=0; i<n; i++){
		if(mid<arr[i])
			return false;
		
		if(temp-arr[i]<0){
			cnt++;
			temp=mid;
		}
		temp-=arr[i];
	}
	return cnt<=m;
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	int lo=1, hi=1e4;
	while(lo+1<hi){
		int mid=(lo+hi)/2;
		if(check(mid))
			lo=mid;
		else
			hi=mid;
	}
	
	cout << lo;
}