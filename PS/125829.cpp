#include<iostream>
using namespace std;

int main(){
	long long int n, r=1, sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
		char temp;
		cin >> temp;
		sum+=(r*(temp-96))%1234567891;
		r*=31;
		r%=1234567891;
	}
	cout << sum%1234567891;
}