#include<iostream>
#include<vector>
using namespace std;

bool IsPrime(int num){
	if(num<2)
		return false;
	
	for(int i=2; i*i<=num; i++){
		if(num%i==0)
			return false;
	}
	return true;
}

int main(){
	int n, ans=0;
	vector<int> v;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	for(int i=0; i<n; i++)
		if(IsPrime(v[i]))
			ans++;
	
	cout << ans;
}