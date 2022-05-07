#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, m, a, b;
	cin >> n >> m;
	a=max(n, m);
	b=min(n, m);
	cout << a-1+a*(b-1);
}