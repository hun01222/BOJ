#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<2*n-1; i++){
		for(int j=0; j<n; j++){
			if((i<n-1&&i+j<n-1)||(i>n-1&&i-j>n-1))
				cout << ' ';
			else{
				cout << '*';
			}
		}
		cout << "\n";
	}
}

/*
0 1 2 3 4
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8

3 2 1
4 3 2
*/