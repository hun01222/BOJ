#include<iostream>
using namespace std;

int main(){
	int ans;
	cin >> ans;
	for(int i=0; i<9; i++){
		int temp;
		cin >> temp;
		ans-=temp;
	}
	cout << ans;
}