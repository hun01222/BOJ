#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int n, cnt=0;
	double sum=0.0;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	
	//cout << round((double)n*0.15) << ' ' << round((double)n*0.85);
	for(int i=(int)round((double)n*0.15); i<(int)round((double)n*0.85); i++){
		sum+=(double)v[i];
		cnt++;
	}
	
	cout << round(sum/(double)cnt);
}