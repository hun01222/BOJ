#include<iostream>
using namespace std;

int main(){
	int e, s, m, year=1;
	cin >> e >> s >> m;
	
	while(1){
		if((year-e)%15==0&&(year-s)%28==0&&(year-m)%19==0){
			cout << year;
			return 0;
		}
		year++;
	}
}