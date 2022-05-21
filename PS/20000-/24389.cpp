#include<iostream>
using namespace std;

int main(){
	int n, m, cnt=0;
	cin >> n;
	m=-n;
	
	for(int i=0; i<32; i++){
		if((m&1)!=(n&1))
			cnt++;
		n>>=1, m>>=1;
	}
	cout << cnt;
}