#include<iostream>
#include<algorithm>
#define MAX 200001
using namespace std;

int n, c;
int arr[MAX]={0, };

bool check(int mid){
	int cnt=1;
	int temp=arr[0];
	
	for(int i=1; i<n; i++)
		if(arr[i]-temp>=mid){
			cnt++;
			temp=arr[i];
		}
	
	if(cnt>=c)
		return true;
	return false;
}

int main(){
	cin >> n >> c;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	
	int lo=1, hi=arr[n-1]-arr[0]+1, ans=1;
	while(lo+1<hi){
		int mid=(lo+hi)/2;
		if(check(mid)){
			ans=max(ans, mid);
			lo=mid;
		}
		else
			hi=mid;
	}
	
	cout << ans;
}