#include<iostream>
using namespace std;

int GCD(int a, int b){
	if(a%b==0)
		return b;
	return GCD(b, a%b);
}

int main(){
	int n, temp1, temp2, gcd;
	vector<int> v;
	
	cin >> n >> temp1 >> temp2;
	gcd=(temp2-temp1);
	for(int i=2; i<n; i++){
		cin >> temp2;
		gcd=GCD(gcd, temp2-temp1);
		temp1=temp2;
	}
	
}