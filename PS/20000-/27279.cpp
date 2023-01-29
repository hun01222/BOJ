#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n), b(m), cnt(n, 0);
	for(int i=0; i<n; i++){
		cin >> a[i];
		cnt[a[i]-1]++;
	}
	for(int i=0; i<m; i++)
		cin >> b[i];
	sort(b.begin(), b.end());
	
	for(int i=m-1; i>=0; i--){
		if(cnt[i]>=b[i]){
			if(i==0){
				cout << "YES";
				return 0;
			}
			cnt[i-1]+=(cnt[i]-b[i]);
		}
		else{
			cout << "NO";
			return 0;
		}
	}
	
}