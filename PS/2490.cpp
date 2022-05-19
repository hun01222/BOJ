#include<iostream>
using namespace std;

int main(){
	for(int i=0; i<3; i++){
		int cnt=0;
		for(int j=0; j<4; j++){
			int temp;
			cin >> temp;
			if(!temp)
				cnt++;
		}
		if(cnt==0)
			cout << "E\n";
		if(cnt==1)
			cout << "A\n";
		if(cnt==2)
			cout << "B\n";
		if(cnt==3)
			cout << "C\n";
		if(cnt==4)
			cout << "D\n";
	}
}