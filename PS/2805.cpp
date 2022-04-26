#include<iostream>
using namespace std;

long long int arr[1000001]={0, };

int main(){
	long long int n, m, high, mid, low=0, temp, max=0;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> temp;
		arr[i]=temp;
		if(temp>max)
			max=temp;
	}
	high=max;
}