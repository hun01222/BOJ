#include<iostream>
typedef long long ll;
using namespace std;

int main(){
	ll n;
	cin >> n;
	if(n%7==2||n%7==0)
		cout << "CY";
	else
		cout << "SK";
}