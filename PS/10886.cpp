#include<iostream>
using namespace std;

int main(){
	int n, a=0, b=0;
	cin >> n;
	while(n--){
		int temp;
		cin >> temp;
		if(temp)
			a++;
		else
			b++;
	}
	if(a>b)
		cout << "Junhee is cute!;
	else
		cout << "Junhee is not cute!";
}