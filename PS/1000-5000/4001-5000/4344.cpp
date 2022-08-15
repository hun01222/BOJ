#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n, cnt=0, arr[1001]={0, };
		double mean=0.0;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			mean+=(double)arr[i];
		}
		
		mean/=(double)n;
		for(int i=0; i<n; i++){
			if(arr[i]>mean)
				cnt++;
		}
		cnt*=100;
		
		cout << fixed;
		cout.precision(3);
		cout << double(cnt)/double(n) << "%\n";
	}
}