#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<=i; j++)
			cout << '*';
		cout << "\n";
	}
	for(int i=1; i<=n; i++){
		for(int j=n-i; j>=0; j--)
			cout << '*';
		cout << "\n";
	}
}