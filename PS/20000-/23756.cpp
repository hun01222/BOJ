#include<iostream>
using namespace std;

int main(){
	int n, sum=0;
	int arr[101]={0, };
	
	cin >> n;
	for(int i=0; i<n+1; i++){
		cin >> arr[i];
	}
	
	for (int i=0; i<n; i++){
		if(arr[i+1]-arr[i]<=-180)
			sum+=(360+(arr[i+1]-arr[i]));
		else if(arr[i+1]-arr[i]<=0)
			sum+=-(arr[i+1]-arr[i]);
		else if(arr[i+1]-arr[i]<=180)
			sum+=(arr[i+1]-arr[i]);
		else
			sum+=(360-(arr[i+1]-arr[i]));
	}
	
	cout << sum;
}