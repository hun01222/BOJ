#include<iostream>
using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	
	while(x!=1){
		if(x==2||x==4||x==6||x==7||x==9||x==11)
			y+=31;
		else if(x==3)
			y+=28;
		else
			y+=30;
		x--;
	}
	
	if(y%7==1)
		cout << "MON";
	else if(y%7==2)
		cout << "TUE";
	else if(y%7==3)
		cout << "WED";
	else if(y%7==4)
		cout << "THU";
	else if(y%7==5)
		cout << "FRI";
	else if(y%7==6)
		cout << "SAT";
	else if(y%7==0)
		cout << "SUN";
}