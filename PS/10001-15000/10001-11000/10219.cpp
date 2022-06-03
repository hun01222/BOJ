#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int h, w;
		char map[12][12];
		cin >> h >> w;
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++)
				cin >> map[i][j];
		}
		
		for(int i=h-1; i>=0; i--){
			for(int j=0; j<w; j++)
				cout << map[i][j];
			cout << "\n";
		}
	}
}