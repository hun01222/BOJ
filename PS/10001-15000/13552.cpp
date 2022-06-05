#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

struct coor{
	ll x, y, z;
};

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	vector<coor> v;
	
	cin >> n;
	for(int i=0; i<n; i++){
		ll x, y, z;
		cin >> x >> y >> z;
		v.push_back({x, y, z});
	}
	
	cin >> m;
	for(int i=0; i<m; i++){
		ll x, y, z, r, cnt=0;
		cin >> x >> y >> z >> r;
		for(int j=0; j<n; j++){
			if((x-v[j].x)*(x-v[j].x)+(y-v[j].y)*(y-v[j].y)+(z-v[j].z)*(z-v[j].z)<=r*r)
				cnt++;
		}
		cout << cnt << "\n";
	}
}