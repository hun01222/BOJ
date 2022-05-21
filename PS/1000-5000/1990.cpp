#include<iostream>
#include<algorithm>
#include<cmath>
#define max 10000001
using namespace std;

bool IsPrime(int num){
	if(num<2)
		return false;
	
	for(int i=2; i<=sqrt(num); i++){
		if(num%i==0)
			return false;
	}
	
	return true;
}

bool IsPalindrome(string str){
	string front, back;
	
	front=str;
	reverse(str.begin(), str.end());
	back=str;
	
	if(front==back)
		return true;
	else
		return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	cin >> a >> b;
	
	for(int i=a; i<=max; i++){
		if(i>b)
			break;
		if(IsPalindrome(to_string(i))&&IsPrime(i))
			cout << i << "\n";
	}
	cout << -1;
}