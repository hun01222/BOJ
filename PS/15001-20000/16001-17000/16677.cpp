#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	string s;
	int n, size;
	vector<pair<string, double>> v;
	
	cin >> s >> n;
	size=s.length();
	for(int i=0; i<n; i++){
		string temp_s;
		double temp_w;
		cin >> temp_s >> temp_w;
		v.push_back(make_pair(temp_s, temp_w));		
	}
	
	
	
}