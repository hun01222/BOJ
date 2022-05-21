#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[50]={0, };
	arr[0]=0, arr[1]=1;
	cin >> n;
	for(int i=2; i<49; i++)
		arr[i]=arr[i-1]+arr[i-2];
	
	cout << arr[n];
}