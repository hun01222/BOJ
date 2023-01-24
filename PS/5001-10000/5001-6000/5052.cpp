#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		bool flag=false;
		string temp;
		vector<string> v;
		cin >> n;
		
		for(int i=0; i<n; i++){
			cin >> temp;
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		
		for(int i=0; i<n-1; i++){
			int curr=v[i].length();
			int next=v[i+1].length();
			
			if(curr>=next)
				continue;
			if(v[i+1].substr(0, curr)==v[i]){
				cout << "NO\n";
				flag=true;
				break;
			}
		}
		
		if(flag==false)
			cout << "YES\n";
		v.clear();
	}
}