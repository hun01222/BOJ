#include<iostream>
using namespace std;

int main(){
	int t, a=0, b=0, c=0;
	cin >> t;
	while(t>0){
		if(t>=300){
			t-=300;
			a++;
		}
		else if(t>=60){
			t-=60;
			b++;
		}
		else{
			t-=10;
			c++;
		}
	}
	
	if(t==0)
		cout << a << ' ' << b << ' ' << c;
	else
		cout << -1;
}