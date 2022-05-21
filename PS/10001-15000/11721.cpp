#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int size=s.size(), cnt=0;
	while(size>9){
		for(int i=cnt*10; i<cnt*10+10; i++)
			cout << s[i];
		cout << "\n";
		cnt++;
		size-=10;
	}
	for(int i=cnt*10; i<cnt*10+size; i++)
		cout << s[i];
}