#include<iostream>
using namespace std;

int arr[100001]={0, };

int main(){
	int n, m, sum=0, max=0;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(i>=m){
			sum+=arr[i];
			sum-=arr[i-m];
			if(sum>max){
				max=sum;
			}
		}
		else{
			sum+=arr[i];
			max=sum;
		}
	}
	cout << max;
}