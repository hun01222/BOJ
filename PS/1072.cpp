#include<iostream>
#define max 100000000
typedef long long ll;
using namespace std;

int main(){
	ll x, y;
	cin >> x >> y;
	int z=(y*100)/x;
	if(z>=99){
		cout << -1;
		return 0;
	}
	
	int low=0, high=max;
	int result=-1;
	while(low<=high){
		int mid=(high+low)/2;
		int temp=(100*(y+mid))/(x+mid);
		if(z>=temp){
			result=mid+1;
			low=mid+1;
		}
		else
			high=mid-1;
	}
	cout << result;
}