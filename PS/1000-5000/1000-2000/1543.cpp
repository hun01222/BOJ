#include<iostream>
#include<string>
using namespace std;

int main(){
	string main, sub;
	int main_len, sub_len, cnt=0;
	
	getline(cin, main);
	getline(cin, sub);
	main_len=main.length(), sub_len=sub.length();
	
	for(int i=0; i<main_len; i++){
		for(int j=0; j<sub_len; j++){
			if(main[i+j]!=sub[j]){
				break;
			}
			if(j==sub_len-1){
				cnt++;
				i+=(sub_len-1);
			}
		}
	}
	
	cout << cnt;
}