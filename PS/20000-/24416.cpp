#include<iostream>
using namespace std;

void fibonacci(int n){
	int cnt=0;
	int f[50]={0, };
	f[1]=1, f[2]=1;
	for(int i=3; i<=n; i++){
		f[i]=f[i-1]+f[i-2];
		cnt++;
	}
	cout << f[n] << ' ' << cnt;
}

int main(){
	int n;
	cin >> n;
	
	fibonacci(n);
}