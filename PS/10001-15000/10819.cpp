#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int n, ans=0;
int arr[8]={0, };

int main(){
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	
	do{
		int temp=0;
		for(int i=0; i<n-1; i++)
			temp+=abs(arr[i]-arr[i+1]);
		ans=max(ans, temp);
	}while(next_permutation(arr, arr+n));
	cout << ans;
}