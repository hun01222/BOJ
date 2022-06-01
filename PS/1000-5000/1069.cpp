#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	int x, y, d, t;
	cin >> x >> y >> d >> t;
	
	double distance=sqrt((double)(x*x+y*y));
	double ans=distance;
	int cnt=distance/d;
	distance-=cnt*d;
	
	if(!cnt){
		ans=min(ans, (double)t+((double)d-distance));
		ans=min(ans, 2.0*(double)t);
	}
	else{
		ans=min(ans, (double)cnt*t+distance);
		ans=min(ans, (double)((cnt+1)*t));
	}
	
	cout << fixed;
	cout.precision(12);
	cout << ans;
}