#include<iostream>
using namespace std;

int main(){
	while(1){
		int temp;
		cin >> temp;
		if(temp==0){
			return 0;
		}
		if(temp<10){
			cout << "yes" << "\n";
		}
		else if(10<=temp&&temp<100){
			if(temp/10==temp%10){
				cout << "yes" << "\n";
			}
			else{
				cout << "no" << "\n";
			}
		}
		else if(100<=temp&&temp<1000){
			if(temp/100==temp%10){
				cout << "yes" << "\n";
			}
			else{
				cout << "no" << "\n";
			}
		}
		else if(1000<=temp&&temp<10000){
			if((temp/1000==temp%10)||((temp/100)%10)==((temp/10)%10)){
				cout << "yes" << "\n";
			}
			else{
				cout << "no" << "\n";
			}
		}
		else{
			if((temp/10000==temp%10)&&(((temp/1000)%10)==(temp/10)%10)){
				cout << "yes" << "\n";
			}
			else{
				cout << "no" << "\n";
			}
		}
	}
}