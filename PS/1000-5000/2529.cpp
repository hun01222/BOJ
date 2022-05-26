// 9에서 5까지만 순열 만들고 싶으면 vector에 9에서 5까지 삽입 후 prev_permutation

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int n;
string s;
vector<int> v_max;
vector<int> v_min;

bool IsTrue(vector<int>& v){
	for(int i=0; i<s.size(); i++){
		if((s[i]=='>')&&(v[i]<v[i+1]))
			return false;
		if((s[i]=='<')&&(v[i]>v[i+1]))
			return false;
	}
	return true;
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		char temp;
		cin >> temp;
		s+=temp;
	}
	
	for(int i=9; i>=9-n; i--)
		v_max.push_back(i);
	while(1){
		if(IsTrue(v_max))
			break;
		prev_permutation(v_max.begin(), v_max.end());
	}
	for(int i=0; i<=n; i++)
		v_min.push_back(i);
	while(1){
		if(IsTrue(v_min))
			break;
		next_permutation(v_min.begin(), v_min.end());
	}
	
	for(auto a:v_max)
		cout << a;
	cout << "\n";
	for(auto a:v_min)
		cout << a;
}