#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, temp1, temp2;
		cin >> n >> m;
		for(int i=0; i<m; i++)
			cin >> temp1 >> temp2;
		
		cout << n-1 << "\n";
	}
}

// 비행기를 타는 횟수는 중요하지 않다!!