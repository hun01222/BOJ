#include<iostream>
#include<string>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	
	string a_max, b_max, a_min, b_min;
	a_min=a, a_max=a;
	for(int i=0; i<a.size(); i++){
		if(a[i]=='6')
			a_min[i]='5';
		if(a[i]=='5')
			a_max[i]='6';
	}
	b_min=b, b_max=b;
	for(int i=0; i<b.size(); i++){
		if(b[i]=='6')
			b_min[i]='5';
		if(b[i]=='5')
			b_max[i]='6';
	}
	int a_max_int=stoi(a_max);
	int a_min_int=stoi(a_min);
	int b_max_int=stoi(b_max);
	int b_min_int=stoi(b_min);
	
	cout << a_min_int+b_min_int << ' ' << a_max_int+b_max_int;
}