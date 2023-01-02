#include<iostream>
using namespace std;

int main(){
	int n, m;
	int arr1[101][101], arr2[101][101];
	
	cin >> m >> n;
	for (int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin >> arr1[i][j];
	for (int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin >> arr2[i][j];
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++)
			cout << arr1[i][j]+ arr2[i][j] << ' ';
		cout << "\n";
	}
}