#include<iostream>
#include<cmath>
using namespace std;

void DFS(int n){
	if(n==0){
		cout << '-';
		return;
	}
	
	DFS(n-1);
	for(int i=0; i<pow(3, n-1); i++)
		cout << ' ';
	DFS(n-1);
}

int main(){
	int n;
	
	while(cin>>n){
		DFS(n);
		cout << "\n";
	}
}