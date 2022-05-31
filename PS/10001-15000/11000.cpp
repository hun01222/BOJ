#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct time{
	int start, stop;
	bool check;
};

bool cmp(time a, time b){
	if(a.stop==b.stop)
		return a.start<b.start;
	return a.stop<b.stop;
}

int main(){
	int n;
	vector<time> v;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;
		v.push_back({a, b, false});
	}
	sort(v.begin(), v.end(), cmp);
	
}