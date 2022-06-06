#include<iostream>
#include<algorithm>
using namespace std;

int n, k, arr[1048577]={0, };

void Conquer(int x, int size){
	sort(arr+x, arr+x+size);
	return;
}

void Divide(int x, int size){
	if(size==n/k){
		Conquer(x, size);
		return;
	}
	
	Divide(x, size/2);
	Divide(x+size/2, size/2);
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	cin >> k;
	
	Divide(0, n);
	
	for(int i=0; i<n; i++)
		cout << arr[i] << ' ';
}