#include<iostream>
using namespace std;

int main(){
	int temp, ans_i=0, ans_j=0, max=0;
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cin >> temp;
			if(temp>=max){
				max=temp;
				ans_i=i;
				ans_j=j;
			}
		}
	}
	cout << max << "\n" << ans_i+1 << ' ' << ans_j+1;
}