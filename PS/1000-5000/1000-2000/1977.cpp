#include<iostream>
using namespace std;

int main(){
	int arr[1000]={0, };
	for(int i=1; i<=1000; i++)
		arr[i]=i*i;
	
	int m, n, sum=0, first=0;
	cin >> m >> n;
	
	for(int i=1; i<=1000; i++)
		if(m<=arr[i]&&arr[i]<=n){
			if(sum==0)
				first=arr[i];
			sum+=arr[i];
		}
	if(first==0)
		cout << -1;
	else
		cout << sum << "\n" << first;
}