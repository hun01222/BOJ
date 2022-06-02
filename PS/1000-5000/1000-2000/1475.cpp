#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int arr[10]={0, };
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i]-'0'==9)
			arr[6]++;
		else
			arr[s[i]-'0']++;
	}
	arr[6]=(arr[6]+1)/2;
	sort(arr, arr+10);
	cout << arr[9];
}