#include<iostream>
using namespace std;

int main(){
	int temp, type=0;
	cin >> temp;
	if(temp==1)
		type=1;
	else if(temp==8)
		type=2;
	else{
		cout << "mixed";
		return 0;
	}
	
	for(int i=2; i<=8; i++){
		cin >> temp;
		if(temp==i&&type==1){
			continue;
		}
		else if(temp==9-i&&type==2){
			continue;
		}
		else{
			cout << "mixed";
			return 0;
		}
	}
	if(temp==8)
		cout << "ascending";
	else
		cout << "descending";
}