#include<iostream>
#include<vector>
#include<cmath>
#define max 1000001
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	vector<int> v(max, 1);
	v[1]=0;
	
	for(int i=2; i<=sqrt(max); i++){
		if(v[i]){
			for(int j=i*2; j<=max; j+=i)
				v[j]=0;
		}
	}
	v[2]=0;
	
	while(1){
		int n;
		cin >> n;
		int a=3, b=n-3;
		
		if(n==0)
			return 0;
		while(1){
			if(a>b){
				cout << "\"Goldbach's conjecture is wrong\"\n";
				break;
			}
			if(v[a]&&v[b]){
				cout << n << " = " << a << " + " << b << "\n";
				break;
			}
			a++, b--;
		}
	}
}