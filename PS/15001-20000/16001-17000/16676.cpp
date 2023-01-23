#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	if(n<11)
		cout << 1;
	else if(n<111)
		cout << 2;
	else if(n<1111)
		cout << 3;
	else if(n<11111)
		cout << 4;
	else if(n<111111)
		cout << 5;
	else if(n<1111111)
		cout << 6;
	else if(n<11111111)
		cout << 7;
	else if(n<111111111)
		cout << 8;
	else if(n<1111111111)
		cout << 9;
}