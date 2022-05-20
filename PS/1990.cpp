#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#define max 100000001
using namespace std;

int main(){
	vector<int> v(max, 1);
	for(int i=2; i<=sqrt(max); i++){
		for(int j=i*2; j<=max; j+=i)
			v[j]=0;
	}
	v[1]=0;
	
	int a, b;
	cin >> a >> b;
	while(a<=b){
		if(v[a]){
			string s=to_string(a);
			int start=0, end=s.size()-1;
			while(start<=end){
				if(s[start]!=s[end])
					break;
				start++, end--;
			}
			if(start>=end)
				cout << a << "\n";	
		}
		a++;
	}
	cout << -1;
}