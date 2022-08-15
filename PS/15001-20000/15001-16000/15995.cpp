#include<iostream>
using namespace std;

int main(){
	int a, m;
	cin >> a >> m;
	
	int i=1;
	while(1){
		if((a*i)%m==1)
			break;
		i++;
	}
	
	cout << i;
}