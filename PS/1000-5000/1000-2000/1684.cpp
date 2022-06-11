#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 1001
using namespace std;

int GCD(int a, int b){
	if(a%b==0)
		return b;
	return GCD(b, a%b);
}

int main(){
	int n;
	int arr[MAX];
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	
	vector<int> v;
	for(int i=1; i<n; i++)
		v.push_back(arr[i]-arr[i-1]);
	
	int ans=v[0];
	for(int i=1; i<v.size(); i++){
		if(ans<v[i])
			swap(ans, v[i]);
		if(v[i]!=0)
			ans=GCD(ans, v[i]);
	}
	
	cout << ans;
}