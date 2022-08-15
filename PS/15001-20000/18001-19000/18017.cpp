#include<iostream>
#define c 299792458.00
using namespace std;

int main(){
	double a, b;
	cin >> a >> b;
	
	cout << fixed;
	cout.precision(2);
	cout << (a+b)/(1+(a*b)/(c*c));
}