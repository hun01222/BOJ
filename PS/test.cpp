#include<iostream>
using namespace std;

int main(){
	char a;
	int arr[26];
	cin >> a;
	arr[a-97]=1;
	cout << arr[a-97];
}