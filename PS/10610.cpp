#include<iostream>
typedef long long ll;
using namespace std;

int main(){
	ll s, sum;
	int n=1;
	cin >> s;
	
	while(1){
		sum+=n;
		if(sum>s){
			n--;
			break;
		}
		n++;
	}
	cout << n;
}