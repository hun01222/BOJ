#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int cnt=0, ans=0;
	for(int i=0; i<4; i++){
		int a, b;
		cin >> a >> b;
		cnt+=(-a+b);
		ans=max(ans, cnt);
	}
	cout << ans;
}