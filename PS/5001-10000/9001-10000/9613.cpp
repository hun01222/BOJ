#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

int GCD(int a, int b){
	if(a%b==0)
		return b;
	return GCD(b, a%b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		ll ans=0;
		vector<int> v;
		
		cin >> n;
		for(int i=0; i<n; i++){
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		
		for(int i=0; i<n; i++)
			for(int j=i+1; j<n; j++)
				ans+=GCD(v[i], v[j]);
		
		cout << ans << "\n";
	}
}