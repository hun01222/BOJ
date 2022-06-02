#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int n;
	int arr[27]={0, };
	string s;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s;
		int size=s.size();
		for(int j=0; j<size; j++)
			arr[s[size-1-j]-'A']-=pow(10, j);
	}
	sort(arr, arr+27);
	
	int ans=0;
	for(int i=0; i<10; i++){
		ans+=arr[i]*(9-i);
	}
	cout << -ans;
}