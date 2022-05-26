#include<iostream>
using namespace std;

int main(){
	int l, p;
	cin >> l >> p;
	for(int i=0; i<5; i++){
		int temp;
		cin >> temp;
		cout << temp-l*p << ' ';
	}
}