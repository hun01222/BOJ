#include<iostream>
#include<string>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
	ll n;
	string s;
	cin >> n;
	
	if(n==0){
		cout << 0;
		return 0;
	}
	
	while(n!=0){
		if(n%-2==0){
			s+='0';
			n/=-2;
		}
		else{
			s+='1';
			n=(n-1)/-2;
		}
	}
	reverse(s.begin(), s.end());
	
	cout << s;
}