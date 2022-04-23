#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int arr[500001]={0, };

int main(){
	int n;
	double sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		sum+=(double)arr[i];
	}
	sort(arr, arr+n);
		
	int mcv=arr[0], cnt=0, start=0, temp=0;
	for(int i=0; i<n; i++){
		if(arr[start]!=arr[i]&&cnt<i-start){
			mcv=arr[start];
			cnt=i-start;
			start=i;
			temp=0;
		}
		if((arr[start]!=arr[i])&&(cnt=i-start)&&(temp==0)){
			mcv=arr[start];
			temp=1;
		}
	}
	
	cout << round(sum/double(n)) << '\n' << arr[n/2] << '\n' << mcv << '\n' << arr[n-1]-arr[0];
}