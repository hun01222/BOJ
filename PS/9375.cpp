#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	while(n--){
		int m;
		string s;
		vector<string> v;
		map<string, int> map;
		
		cin >> m;
		for(int i=0; i<m; i++){
			string s1, s2;
			cin >> s1 >> s2;
			if(map[s2]==0){
				v.push_back(s2);
				map[s2]++;
			}
			map[s2]++;
		}
		
		int times=1;
		for(auto a:v){
			times*=map[a];
		}
		cout << times-1 << "\n";
	}
}