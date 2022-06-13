#include<iostream>
#include<utility>
#define MOD 1000000007
typedef long long ll;
using namespace std;

int GCD(int a, int b){
	if(a%b==0)
		return b;
	return GCD(b, a%b);
}

pair<int, int> sum(pair<int, int> &p1, pair<int, int> &p2){
	
	
	return p1;
}

int main(){
	int n, temp1, temp2;
	pair<int, int> p1;
	pair<int, int> p2;
	
	cin >> n >> temp1 >> temp2;
	p1={temp1, temp2};
	for(int i=1; i<n; i++){
		cin >> temp1 >> temp2;
		p2={temp1, temp2};
		
		p1=sum(p1, p2);
	}
}