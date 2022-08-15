#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, w, h, len;
	cin >> n >> w >> h;
	len=sqrt(w*w+h*h);
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		if(temp<=len)
			cout << "DA\n";
		else
			cout << "NE\n";
	}
}