#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int main(){
	int n, k;
	set<string> s;
	
	cin >> n;
	for(int i=0; i<n; i++){
		string str="";
		cin >> k;
		for(int j=0; j<k; j++){
			string t;
			cin >> t;
			str+=('*'+t);
			s.insert(str);
		}
	}
	
	for(auto a:s){
		int cnt=count(a.begin(), a.end(), '*');
		int pos=a.find_last_of('*');
		string temp=a.substr(pos+1);
		for(int i=0; i<cnt-1; i++)
			cout << "--";
		cout << temp << "\n";
	}
}