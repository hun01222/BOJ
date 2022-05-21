#include<iostream>
using namespace std;

int main(){
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int x=a<b?a:b;
	x=x<c?x:c;
	int y=d<e?d:e;
	cout << x+y-50;
}