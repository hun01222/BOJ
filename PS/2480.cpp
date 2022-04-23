#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a==b&&a==c&&b==c){
		cout << 10000+a*1000;
	}
	else if(a!=b&&b!=c&&c!=a){
		int max=a>b?a:b;
		max=max>c?max:c;
		cout << max*100;
	}
	else{
		int temp=a;
		if(temp==b||temp==c){
			cout << 1000+temp*100;
		}
		else{
			cout << 1000+b*100;
		}
	}
}