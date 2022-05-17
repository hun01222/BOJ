#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, m;
	int arr[8];
	cin >> n >> m;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j)
				continue;
			for(int k=0; k<m; k++){
				cout << arr[i] << ' ' << arr[j] << "\n";
			}
		}
	}
}