#include<iostream>
using namespace std;

int main(){
	int n, temp, cnt=0;
	
	cin >> n;
	for(int i=0; i<5; i++){
		cin >> temp;
		if(temp%10==n)
			cnt++;
	}
	cout << cnt;
}