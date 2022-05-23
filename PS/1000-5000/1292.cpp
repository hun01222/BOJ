#include<iostream>
#include<vector>
using namespace std;

int main(){
	int a, b;
	vector<int> v;
	for(int i=1; i<100; i++)
		for(int j=1; j<=i; j++)
			v.push_back(i);
	
	cin >> a >> b;
	int sum=0;
	for(int i=a-1; i<b; i++)
		sum+=v[i];
	
	cout << sum;
}